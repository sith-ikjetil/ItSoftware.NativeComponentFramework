#ifndef _CSESSION_H__
#define _CSESSION_H__
#include "atlbase.h"
#include "atlcomcli.h"
#include "wmcodecdsp.h"
#include "mftransform.h"
#include "mfidl.h"
#include "mfapi.h"
#include "shlwapi.h"

using namespace ATL;

class CSession : public IMFAsyncCallback
{
public:
	static STDMETHODIMP Create(CSession **ppSession)
	{
		*ppSession = NULL;

		CSession *pSession = new (std::nothrow) CSession();
		if (pSession == NULL)
		{
			return E_OUTOFMEMORY;
		}

		HRESULT hr = pSession->Initialize();
		if (FAILED(hr))
		{
			pSession->Release();
			delete pSession;
			return hr;
		}

		*ppSession = pSession;

		return S_OK;
	}

	// IUnknown methods
	//STDMETHODIMP QueryInterface(REFIID riid, void** ppv);
	//STDMETHODIMP_(ULONG) AddRef();
	//STDMETHODIMP_(ULONG) Release();

	// IMFAsyncCallback methods
	STDMETHODIMP GetParameters(DWORD* pdwFlags, DWORD* pdwQueue)
	{
		// Implementation of this method is optional.
		return E_NOTIMPL;
	}
	//STDMETHODIMP Invoke(IMFAsyncResult *pResult);

	// Other methods
	//HRESULT StartEncodingSession(IMFTopology *pTopology);
	//HRESULT GetEncodingPosition(MFTIME *pTime);
	//HRESULT Wait(DWORD dwMsec);



	STDMETHODIMP QueryInterface(REFIID riid, void** ppv)
	{
		static const QITAB qit[] =
		{
			QITABENT(CSession, IMFAsyncCallback),
			{ 0 }
		};
		return QISearch(this, qit, riid, ppv);
	}

	STDMETHODIMP_(ULONG) CSession::AddRef()
	{
		return InterlockedIncrement(&m_cRef);
	}

	STDMETHODIMP_(ULONG) CSession::Release()
	{
		long cRef = InterlockedDecrement(&m_cRef);
		if (cRef == 0)
		{
			delete this;
		}
		return cRef;
	}

	STDMETHODIMP Initialize()
	{
		CComPtr<IMFClock> pClock;

		HRESULT hr = MFCreateMediaSession(NULL, &m_pSession);
		if (FAILED(hr))
		{
			goto done;
		}

		hr = m_pSession->GetClock(&pClock);
		if (FAILED(hr))
		{
			goto done;
		}

		hr = pClock->QueryInterface(IID_PPV_ARGS(&m_pClock));
		if (FAILED(hr))
		{
			goto done;
		}

		hr = m_pSession->BeginGetEvent(this, NULL);
		if (FAILED(hr))
		{
			goto done;
		}

		m_hWaitEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
		if (m_hWaitEvent == NULL)
		{
			hr = HRESULT_FROM_WIN32(GetLastError());
		}
	done:
		return hr;
	}

	// Implements IMFAsyncCallback::Invoke
	STDMETHODIMP Invoke(IMFAsyncResult *pResult)
	{
		CComPtr<IMFMediaEvent> pEvent;
		MediaEventType meType = MEUnknown;
		HRESULT hrStatus = S_OK;

		HRESULT hr = m_pSession->EndGetEvent(pResult, &pEvent);
		if (FAILED(hr))
		{
			goto done;
		}

		hr = pEvent->GetType(&meType);
		if (FAILED(hr))
		{
			goto done;
		}

		hr = pEvent->GetStatus(&hrStatus);
		if (FAILED(hr))
		{
			goto done;
		}

		if (FAILED(hrStatus))
		{
			hr = hrStatus;
			goto done;
		}

		switch (meType)
		{
		case MESessionEnded:
			hr = m_pSession->Close();
			if (FAILED(hr))
			{
				goto done;
			}
			break;

		case MESessionClosed:
			SetEvent(m_hWaitEvent);
			break;
		}

		if (meType != MESessionClosed)
		{
			hr = m_pSession->BeginGetEvent(this, NULL);
		}

	done:
		if (FAILED(hr))
		{
			m_hrStatus = hr;
			m_pSession->Close();
		}

		return hr;
	}

	HRESULT StartEncodingSession(IMFTopology *pTopology)
	{
		HRESULT hr = m_pSession->SetTopology(0, pTopology);
		if (SUCCEEDED(hr))
		{
			PROPVARIANT varStart;
			PropVariantClear(&varStart);			
			hr = m_pSession->Start(&GUID_NULL, &varStart);
		}
		return hr;
	}

	HRESULT GetEncodingPosition(MFTIME *pTime)
	{
		return m_pClock->GetTime(pTime);
	}

	HRESULT Wait(DWORD dwMsec)
	{
		HRESULT hr = S_OK;

		DWORD dwTimeoutStatus = WaitForSingleObject(m_hWaitEvent, dwMsec);
		if (dwTimeoutStatus != WAIT_OBJECT_0)
		{
			hr = E_PENDING;
		}
		else
		{
			hr = m_hrStatus;
		}
		return hr;
	}

private:
	CSession() : m_cRef(1), m_pSession(NULL), m_pClock(NULL), m_hrStatus(S_OK), m_hWaitEvent(NULL)
	{
	}
	virtual ~CSession()
	{
		if (m_pSession)
		{
			m_pSession->Shutdown();
		}

		CloseHandle(m_hWaitEvent);
	}

	//HRESULT Initialize();

private:
	CComPtr<IMFMediaSession>      m_pSession;
	CComPtr<IMFPresentationClock> m_pClock;
	HRESULT m_hrStatus;
	HANDLE  m_hWaitEvent;
	long    m_cRef;
};
#endif