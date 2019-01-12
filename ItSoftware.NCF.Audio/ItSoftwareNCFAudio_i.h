

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ItSoftwareNCFAudio.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0620 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ItSoftwareNCFAudio_i_h__
#define __ItSoftwareNCFAudio_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __INCFCollectionMap_FWD_DEFINED__
#define __INCFCollectionMap_FWD_DEFINED__
typedef interface INCFCollectionMap INCFCollectionMap;

#endif 	/* __INCFCollectionMap_FWD_DEFINED__ */


#ifndef __INCFStream_FWD_DEFINED__
#define __INCFStream_FWD_DEFINED__
typedef interface INCFStream INCFStream;

#endif 	/* __INCFStream_FWD_DEFINED__ */


#ifndef __INCFAudioTag_FWD_DEFINED__
#define __INCFAudioTag_FWD_DEFINED__
typedef interface INCFAudioTag INCFAudioTag;

#endif 	/* __INCFAudioTag_FWD_DEFINED__ */


#ifndef __INCFWmaTag_FWD_DEFINED__
#define __INCFWmaTag_FWD_DEFINED__
typedef interface INCFWmaTag INCFWmaTag;

#endif 	/* __INCFWmaTag_FWD_DEFINED__ */


#ifndef __INCFMp3Tag_FWD_DEFINED__
#define __INCFMp3Tag_FWD_DEFINED__
typedef interface INCFMp3Tag INCFMp3Tag;

#endif 	/* __INCFMp3Tag_FWD_DEFINED__ */


#ifndef __INCFAacTag_FWD_DEFINED__
#define __INCFAacTag_FWD_DEFINED__
typedef interface INCFAacTag INCFAacTag;

#endif 	/* __INCFAacTag_FWD_DEFINED__ */


#ifndef __INCFMp3Genre_FWD_DEFINED__
#define __INCFMp3Genre_FWD_DEFINED__
typedef interface INCFMp3Genre INCFMp3Genre;

#endif 	/* __INCFMp3Genre_FWD_DEFINED__ */


#ifndef __INCFAudioCD_FWD_DEFINED__
#define __INCFAudioCD_FWD_DEFINED__
typedef interface INCFAudioCD INCFAudioCD;

#endif 	/* __INCFAudioCD_FWD_DEFINED__ */


#ifndef __INCFEncoderParams_FWD_DEFINED__
#define __INCFEncoderParams_FWD_DEFINED__
typedef interface INCFEncoderParams INCFEncoderParams;

#endif 	/* __INCFEncoderParams_FWD_DEFINED__ */


#ifndef __INCFWmaEncoder_FWD_DEFINED__
#define __INCFWmaEncoder_FWD_DEFINED__
typedef interface INCFWmaEncoder INCFWmaEncoder;

#endif 	/* __INCFWmaEncoder_FWD_DEFINED__ */


#ifndef __INCFMp3Encoder_FWD_DEFINED__
#define __INCFMp3Encoder_FWD_DEFINED__
typedef interface INCFMp3Encoder INCFMp3Encoder;

#endif 	/* __INCFMp3Encoder_FWD_DEFINED__ */


#ifndef __INCFAacEncoder_FWD_DEFINED__
#define __INCFAacEncoder_FWD_DEFINED__
typedef interface INCFAacEncoder INCFAacEncoder;

#endif 	/* __INCFAacEncoder_FWD_DEFINED__ */


#ifndef __INCFWavEncoder_FWD_DEFINED__
#define __INCFWavEncoder_FWD_DEFINED__
typedef interface INCFWavEncoder INCFWavEncoder;

#endif 	/* __INCFWavEncoder_FWD_DEFINED__ */


#ifndef __INCFAudioPlayer_FWD_DEFINED__
#define __INCFAudioPlayer_FWD_DEFINED__
typedef interface INCFAudioPlayer INCFAudioPlayer;

#endif 	/* __INCFAudioPlayer_FWD_DEFINED__ */


#ifndef __NCFAudioCD_FWD_DEFINED__
#define __NCFAudioCD_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFAudioCD NCFAudioCD;
#else
typedef struct NCFAudioCD NCFAudioCD;
#endif /* __cplusplus */

#endif 	/* __NCFAudioCD_FWD_DEFINED__ */


#ifndef __NCFWmaEncoder_FWD_DEFINED__
#define __NCFWmaEncoder_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFWmaEncoder NCFWmaEncoder;
#else
typedef struct NCFWmaEncoder NCFWmaEncoder;
#endif /* __cplusplus */

#endif 	/* __NCFWmaEncoder_FWD_DEFINED__ */


#ifndef __NCFMp3Encoder_FWD_DEFINED__
#define __NCFMp3Encoder_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFMp3Encoder NCFMp3Encoder;
#else
typedef struct NCFMp3Encoder NCFMp3Encoder;
#endif /* __cplusplus */

#endif 	/* __NCFMp3Encoder_FWD_DEFINED__ */


#ifndef __NCFAacEncoder_FWD_DEFINED__
#define __NCFAacEncoder_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFAacEncoder NCFAacEncoder;
#else
typedef struct NCFAacEncoder NCFAacEncoder;
#endif /* __cplusplus */

#endif 	/* __NCFAacEncoder_FWD_DEFINED__ */


#ifndef __NCFWavEncoder_FWD_DEFINED__
#define __NCFWavEncoder_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFWavEncoder NCFWavEncoder;
#else
typedef struct NCFWavEncoder NCFWavEncoder;
#endif /* __cplusplus */

#endif 	/* __NCFWavEncoder_FWD_DEFINED__ */


#ifndef __NCFEncoderParams_FWD_DEFINED__
#define __NCFEncoderParams_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFEncoderParams NCFEncoderParams;
#else
typedef struct NCFEncoderParams NCFEncoderParams;
#endif /* __cplusplus */

#endif 	/* __NCFEncoderParams_FWD_DEFINED__ */


#ifndef __NCFWmaTag_FWD_DEFINED__
#define __NCFWmaTag_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFWmaTag NCFWmaTag;
#else
typedef struct NCFWmaTag NCFWmaTag;
#endif /* __cplusplus */

#endif 	/* __NCFWmaTag_FWD_DEFINED__ */


#ifndef __NCFMp3Tag_FWD_DEFINED__
#define __NCFMp3Tag_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFMp3Tag NCFMp3Tag;
#else
typedef struct NCFMp3Tag NCFMp3Tag;
#endif /* __cplusplus */

#endif 	/* __NCFMp3Tag_FWD_DEFINED__ */


#ifndef __NCFAacTag_FWD_DEFINED__
#define __NCFAacTag_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFAacTag NCFAacTag;
#else
typedef struct NCFAacTag NCFAacTag;
#endif /* __cplusplus */

#endif 	/* __NCFAacTag_FWD_DEFINED__ */


#ifndef __NCFMp3Genre_FWD_DEFINED__
#define __NCFMp3Genre_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFMp3Genre NCFMp3Genre;
#else
typedef struct NCFMp3Genre NCFMp3Genre;
#endif /* __cplusplus */

#endif 	/* __NCFMp3Genre_FWD_DEFINED__ */


#ifndef __NCFAudioPlayer_FWD_DEFINED__
#define __NCFAudioPlayer_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFAudioPlayer NCFAudioPlayer;
#else
typedef struct NCFAudioPlayer NCFAudioPlayer;
#endif /* __cplusplus */

#endif 	/* __NCFAudioPlayer_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __INCFCollectionMap_INTERFACE_DEFINED__
#define __INCFCollectionMap_INTERFACE_DEFINED__

/* interface INCFCollectionMap */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFCollectionMap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("302930A6-6E9B-4040-B110-80D82EB2029A")
    INCFCollectionMap : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Empty( 
            /* [retval][out] */ VARIANT_BOOL *pvtbEmpty) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ long *plSize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddItem( 
            /* [in] */ BSTR bstrKey,
            /* [in] */ VARIANT vtValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveItemByKey( 
            /* [in] */ BSTR bstrKey) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveItemByIndex( 
            /* [in] */ long lIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UpdateValueByKey( 
            /* [in] */ BSTR bstrKey,
            /* [in] */ VARIANT vtValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UpdateValueByIndex( 
            /* [in] */ long lIndex,
            /* [in] */ VARIANT vtValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValueByKey( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ VARIANT *pvtValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValueByIndex( 
            /* [in] */ long lIndex,
            /* [retval][out] */ VARIANT *pvtValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetKeyByIndex( 
            /* [in] */ long lIndex,
            /* [retval][out] */ BSTR *pbstrKey) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sort( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItemByIndex( 
            /* [in] */ long lIndex,
            /* [out][in] */ BSTR *pbstrKey,
            /* [retval][out] */ VARIANT *pvtValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFCollectionMapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFCollectionMap * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFCollectionMap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFCollectionMap * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFCollectionMap * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFCollectionMap * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFCollectionMap * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFCollectionMap * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Empty )( 
            INCFCollectionMap * This,
            /* [retval][out] */ VARIANT_BOOL *pvtbEmpty);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            INCFCollectionMap * This,
            /* [retval][out] */ long *plSize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            INCFCollectionMap * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddItem )( 
            INCFCollectionMap * This,
            /* [in] */ BSTR bstrKey,
            /* [in] */ VARIANT vtValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveItemByKey )( 
            INCFCollectionMap * This,
            /* [in] */ BSTR bstrKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveItemByIndex )( 
            INCFCollectionMap * This,
            /* [in] */ long lIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UpdateValueByKey )( 
            INCFCollectionMap * This,
            /* [in] */ BSTR bstrKey,
            /* [in] */ VARIANT vtValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UpdateValueByIndex )( 
            INCFCollectionMap * This,
            /* [in] */ long lIndex,
            /* [in] */ VARIANT vtValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValueByKey )( 
            INCFCollectionMap * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ VARIANT *pvtValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValueByIndex )( 
            INCFCollectionMap * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ VARIANT *pvtValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetKeyByIndex )( 
            INCFCollectionMap * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ BSTR *pbstrKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sort )( 
            INCFCollectionMap * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )( 
            INCFCollectionMap * This,
            /* [in] */ long lIndex,
            /* [out][in] */ BSTR *pbstrKey,
            /* [retval][out] */ VARIANT *pvtValue);
        
        END_INTERFACE
    } INCFCollectionMapVtbl;

    interface INCFCollectionMap
    {
        CONST_VTBL struct INCFCollectionMapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFCollectionMap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFCollectionMap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFCollectionMap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFCollectionMap_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFCollectionMap_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFCollectionMap_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFCollectionMap_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFCollectionMap_get_Empty(This,pvtbEmpty)	\
    ( (This)->lpVtbl -> get_Empty(This,pvtbEmpty) ) 

#define INCFCollectionMap_get_Size(This,plSize)	\
    ( (This)->lpVtbl -> get_Size(This,plSize) ) 

#define INCFCollectionMap_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define INCFCollectionMap_AddItem(This,bstrKey,vtValue)	\
    ( (This)->lpVtbl -> AddItem(This,bstrKey,vtValue) ) 

#define INCFCollectionMap_RemoveItemByKey(This,bstrKey)	\
    ( (This)->lpVtbl -> RemoveItemByKey(This,bstrKey) ) 

#define INCFCollectionMap_RemoveItemByIndex(This,lIndex)	\
    ( (This)->lpVtbl -> RemoveItemByIndex(This,lIndex) ) 

#define INCFCollectionMap_UpdateValueByKey(This,bstrKey,vtValue)	\
    ( (This)->lpVtbl -> UpdateValueByKey(This,bstrKey,vtValue) ) 

#define INCFCollectionMap_UpdateValueByIndex(This,lIndex,vtValue)	\
    ( (This)->lpVtbl -> UpdateValueByIndex(This,lIndex,vtValue) ) 

#define INCFCollectionMap_GetValueByKey(This,bstrKey,pvtValue)	\
    ( (This)->lpVtbl -> GetValueByKey(This,bstrKey,pvtValue) ) 

#define INCFCollectionMap_GetValueByIndex(This,lIndex,pvtValue)	\
    ( (This)->lpVtbl -> GetValueByIndex(This,lIndex,pvtValue) ) 

#define INCFCollectionMap_GetKeyByIndex(This,lIndex,pbstrKey)	\
    ( (This)->lpVtbl -> GetKeyByIndex(This,lIndex,pbstrKey) ) 

#define INCFCollectionMap_Sort(This)	\
    ( (This)->lpVtbl -> Sort(This) ) 

#define INCFCollectionMap_GetItemByIndex(This,lIndex,pbstrKey,pvtValue)	\
    ( (This)->lpVtbl -> GetItemByIndex(This,lIndex,pbstrKey,pvtValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFCollectionMap_INTERFACE_DEFINED__ */


#ifndef __INCFStream_INTERFACE_DEFINED__
#define __INCFStream_INTERFACE_DEFINED__

/* interface INCFStream */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("40CE1CCD-A99C-4A34-B285-4C122C8D5018")
    INCFStream : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteFrom( 
            /* [in] */ BYTE *pData,
            /* [in] */ long length) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteFromStream( 
            /* [in] */ INCFStream *pINCFStream,
            /* [in] */ long length) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadTo( 
            /* [in] */ BYTE *pData,
            /* [in] */ long length) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadToStream( 
            /* [in] */ INCFStream *pINCFStream,
            /* [in] */ long length) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_CurrentReadPosition( 
            /* [in] */ long position) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_CurrentReadPosition( 
            /* [retval][out] */ long *position) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_CurrentWritePosition( 
            /* [in] */ long position) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_CurrentWritePosition( 
            /* [retval][out] */ long *position) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ long *length) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFStreamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFStream * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFStream * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFStream * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFStream * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFStream * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFStream * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFStream * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteFrom )( 
            INCFStream * This,
            /* [in] */ BYTE *pData,
            /* [in] */ long length);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteFromStream )( 
            INCFStream * This,
            /* [in] */ INCFStream *pINCFStream,
            /* [in] */ long length);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadTo )( 
            INCFStream * This,
            /* [in] */ BYTE *pData,
            /* [in] */ long length);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadToStream )( 
            INCFStream * This,
            /* [in] */ INCFStream *pINCFStream,
            /* [in] */ long length);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentReadPosition )( 
            INCFStream * This,
            /* [in] */ long position);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentReadPosition )( 
            INCFStream * This,
            /* [retval][out] */ long *position);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentWritePosition )( 
            INCFStream * This,
            /* [in] */ long position);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentWritePosition )( 
            INCFStream * This,
            /* [retval][out] */ long *position);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            INCFStream * This);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            INCFStream * This,
            /* [retval][out] */ long *length);
        
        END_INTERFACE
    } INCFStreamVtbl;

    interface INCFStream
    {
        CONST_VTBL struct INCFStreamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFStream_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFStream_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFStream_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFStream_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFStream_WriteFrom(This,pData,length)	\
    ( (This)->lpVtbl -> WriteFrom(This,pData,length) ) 

#define INCFStream_WriteFromStream(This,pINCFStream,length)	\
    ( (This)->lpVtbl -> WriteFromStream(This,pINCFStream,length) ) 

#define INCFStream_ReadTo(This,pData,length)	\
    ( (This)->lpVtbl -> ReadTo(This,pData,length) ) 

#define INCFStream_ReadToStream(This,pINCFStream,length)	\
    ( (This)->lpVtbl -> ReadToStream(This,pINCFStream,length) ) 

#define INCFStream_put_CurrentReadPosition(This,position)	\
    ( (This)->lpVtbl -> put_CurrentReadPosition(This,position) ) 

#define INCFStream_get_CurrentReadPosition(This,position)	\
    ( (This)->lpVtbl -> get_CurrentReadPosition(This,position) ) 

#define INCFStream_put_CurrentWritePosition(This,position)	\
    ( (This)->lpVtbl -> put_CurrentWritePosition(This,position) ) 

#define INCFStream_get_CurrentWritePosition(This,position)	\
    ( (This)->lpVtbl -> get_CurrentWritePosition(This,position) ) 

#define INCFStream_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define INCFStream_get_Length(This,length)	\
    ( (This)->lpVtbl -> get_Length(This,length) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFStream_INTERFACE_DEFINED__ */


#ifndef __INCFAudioTag_INTERFACE_DEFINED__
#define __INCFAudioTag_INTERFACE_DEFINED__

/* interface INCFAudioTag */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFAudioTag;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5AB40352-3E42-4B0E-B7DF-9A315920AADE")
    INCFAudioTag : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetTitle( 
            /* [in] */ BSTR title) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTitle( 
            /* [retval][out] */ BSTR *title) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAuthor( 
            /* [in] */ BSTR author) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAuthor( 
            /* [retval][out] */ BSTR *author) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetDescription( 
            /* [in] */ BSTR description) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [retval][out] */ BSTR *description) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetRating( 
            /* [in] */ BSTR rating) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRating( 
            /* [retval][out] */ BSTR *rating) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetCopyright( 
            /* [in] */ BSTR copyright) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCopyright( 
            /* [retval][out] */ BSTR *copyright) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAlbumTitle( 
            /* [in] */ BSTR album_title) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAlbumTitle( 
            /* [retval][out] */ BSTR *album_title) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetTrack( 
            /* [in] */ BSTR track_number) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTrack( 
            /* [retval][out] */ BSTR *track_number) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetGenre( 
            /* [in] */ BSTR genre) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetGenre( 
            /* [retval][out] */ BSTR *genre) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetYear( 
            /* [in] */ BSTR year) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetYear( 
            /* [retval][out] */ BSTR *year) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetCopyrightURL( 
            /* [in] */ BSTR copyright_url) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCopyrightURL( 
            /* [retval][out] */ BSTR *copyright_url) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAlbumCoverURL( 
            /* [in] */ BSTR album_cover_url) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAlbumCoverURL( 
            /* [retval][out] */ BSTR *album_cover_url) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPromotionURL( 
            /* [in] */ BSTR promotion_url) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPromotionURL( 
            /* [retval][out] */ BSTR *promotion_url) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetLyrics( 
            /* [in] */ BSTR lyrics) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLyrics( 
            /* [retval][out] */ BSTR *lyrics) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadFromFile( 
            /* [in] */ BSTR filename) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveToFile( 
            /* [in] */ BSTR filename) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadFromInterface( 
            /* [in] */ IUnknown *pIUnknown) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveToInterface( 
            /* [in] */ IUnknown *pIUnknown) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Duration( 
            /* [retval][out] */ long *milliseconds) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HasAudio( 
            /* [retval][out] */ VARIANT_BOOL *has_audio) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HasVideo( 
            /* [retval][out] */ VARIANT_BOOL *has_video) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetComposer( 
            /* [retval][out] */ BSTR *composer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetComposer( 
            /* [in] */ BSTR composer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAlbumAuthor( 
            /* [retval][out] */ BSTR *author) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAlbumAuthor( 
            /* [in] */ BSTR author) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFAudioTagVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFAudioTag * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFAudioTag * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFAudioTag * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFAudioTag * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFAudioTag * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFAudioTag * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFAudioTag * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            INCFAudioTag * This,
            /* [in] */ BSTR title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTitle )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAuthor )( 
            INCFAudioTag * This,
            /* [in] */ BSTR author);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAuthor )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *author);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            INCFAudioTag * This,
            /* [in] */ BSTR description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRating )( 
            INCFAudioTag * This,
            /* [in] */ BSTR rating);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRating )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *rating);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCopyright )( 
            INCFAudioTag * This,
            /* [in] */ BSTR copyright);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCopyright )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *copyright);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAlbumTitle )( 
            INCFAudioTag * This,
            /* [in] */ BSTR album_title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAlbumTitle )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *album_title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetTrack )( 
            INCFAudioTag * This,
            /* [in] */ BSTR track_number);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrack )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *track_number);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetGenre )( 
            INCFAudioTag * This,
            /* [in] */ BSTR genre);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGenre )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *genre);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetYear )( 
            INCFAudioTag * This,
            /* [in] */ BSTR year);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetYear )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *year);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCopyrightURL )( 
            INCFAudioTag * This,
            /* [in] */ BSTR copyright_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCopyrightURL )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *copyright_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAlbumCoverURL )( 
            INCFAudioTag * This,
            /* [in] */ BSTR album_cover_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAlbumCoverURL )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *album_cover_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPromotionURL )( 
            INCFAudioTag * This,
            /* [in] */ BSTR promotion_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPromotionURL )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *promotion_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLyrics )( 
            INCFAudioTag * This,
            /* [in] */ BSTR lyrics);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLyrics )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *lyrics);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFromFile )( 
            INCFAudioTag * This,
            /* [in] */ BSTR filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveToFile )( 
            INCFAudioTag * This,
            /* [in] */ BSTR filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFromInterface )( 
            INCFAudioTag * This,
            /* [in] */ IUnknown *pIUnknown);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveToInterface )( 
            INCFAudioTag * This,
            /* [in] */ IUnknown *pIUnknown);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            INCFAudioTag * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            INCFAudioTag * This,
            /* [retval][out] */ long *milliseconds);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasAudio )( 
            INCFAudioTag * This,
            /* [retval][out] */ VARIANT_BOOL *has_audio);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasVideo )( 
            INCFAudioTag * This,
            /* [retval][out] */ VARIANT_BOOL *has_video);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComposer )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *composer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetComposer )( 
            INCFAudioTag * This,
            /* [in] */ BSTR composer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAlbumAuthor )( 
            INCFAudioTag * This,
            /* [retval][out] */ BSTR *author);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAlbumAuthor )( 
            INCFAudioTag * This,
            /* [in] */ BSTR author);
        
        END_INTERFACE
    } INCFAudioTagVtbl;

    interface INCFAudioTag
    {
        CONST_VTBL struct INCFAudioTagVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFAudioTag_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFAudioTag_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFAudioTag_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFAudioTag_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFAudioTag_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFAudioTag_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFAudioTag_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFAudioTag_SetTitle(This,title)	\
    ( (This)->lpVtbl -> SetTitle(This,title) ) 

#define INCFAudioTag_GetTitle(This,title)	\
    ( (This)->lpVtbl -> GetTitle(This,title) ) 

#define INCFAudioTag_SetAuthor(This,author)	\
    ( (This)->lpVtbl -> SetAuthor(This,author) ) 

#define INCFAudioTag_GetAuthor(This,author)	\
    ( (This)->lpVtbl -> GetAuthor(This,author) ) 

#define INCFAudioTag_SetDescription(This,description)	\
    ( (This)->lpVtbl -> SetDescription(This,description) ) 

#define INCFAudioTag_GetDescription(This,description)	\
    ( (This)->lpVtbl -> GetDescription(This,description) ) 

#define INCFAudioTag_SetRating(This,rating)	\
    ( (This)->lpVtbl -> SetRating(This,rating) ) 

#define INCFAudioTag_GetRating(This,rating)	\
    ( (This)->lpVtbl -> GetRating(This,rating) ) 

#define INCFAudioTag_SetCopyright(This,copyright)	\
    ( (This)->lpVtbl -> SetCopyright(This,copyright) ) 

#define INCFAudioTag_GetCopyright(This,copyright)	\
    ( (This)->lpVtbl -> GetCopyright(This,copyright) ) 

#define INCFAudioTag_SetAlbumTitle(This,album_title)	\
    ( (This)->lpVtbl -> SetAlbumTitle(This,album_title) ) 

#define INCFAudioTag_GetAlbumTitle(This,album_title)	\
    ( (This)->lpVtbl -> GetAlbumTitle(This,album_title) ) 

#define INCFAudioTag_SetTrack(This,track_number)	\
    ( (This)->lpVtbl -> SetTrack(This,track_number) ) 

#define INCFAudioTag_GetTrack(This,track_number)	\
    ( (This)->lpVtbl -> GetTrack(This,track_number) ) 

#define INCFAudioTag_SetGenre(This,genre)	\
    ( (This)->lpVtbl -> SetGenre(This,genre) ) 

#define INCFAudioTag_GetGenre(This,genre)	\
    ( (This)->lpVtbl -> GetGenre(This,genre) ) 

#define INCFAudioTag_SetYear(This,year)	\
    ( (This)->lpVtbl -> SetYear(This,year) ) 

#define INCFAudioTag_GetYear(This,year)	\
    ( (This)->lpVtbl -> GetYear(This,year) ) 

#define INCFAudioTag_SetCopyrightURL(This,copyright_url)	\
    ( (This)->lpVtbl -> SetCopyrightURL(This,copyright_url) ) 

#define INCFAudioTag_GetCopyrightURL(This,copyright_url)	\
    ( (This)->lpVtbl -> GetCopyrightURL(This,copyright_url) ) 

#define INCFAudioTag_SetAlbumCoverURL(This,album_cover_url)	\
    ( (This)->lpVtbl -> SetAlbumCoverURL(This,album_cover_url) ) 

#define INCFAudioTag_GetAlbumCoverURL(This,album_cover_url)	\
    ( (This)->lpVtbl -> GetAlbumCoverURL(This,album_cover_url) ) 

#define INCFAudioTag_SetPromotionURL(This,promotion_url)	\
    ( (This)->lpVtbl -> SetPromotionURL(This,promotion_url) ) 

#define INCFAudioTag_GetPromotionURL(This,promotion_url)	\
    ( (This)->lpVtbl -> GetPromotionURL(This,promotion_url) ) 

#define INCFAudioTag_SetLyrics(This,lyrics)	\
    ( (This)->lpVtbl -> SetLyrics(This,lyrics) ) 

#define INCFAudioTag_GetLyrics(This,lyrics)	\
    ( (This)->lpVtbl -> GetLyrics(This,lyrics) ) 

#define INCFAudioTag_LoadFromFile(This,filename)	\
    ( (This)->lpVtbl -> LoadFromFile(This,filename) ) 

#define INCFAudioTag_SaveToFile(This,filename)	\
    ( (This)->lpVtbl -> SaveToFile(This,filename) ) 

#define INCFAudioTag_LoadFromInterface(This,pIUnknown)	\
    ( (This)->lpVtbl -> LoadFromInterface(This,pIUnknown) ) 

#define INCFAudioTag_SaveToInterface(This,pIUnknown)	\
    ( (This)->lpVtbl -> SaveToInterface(This,pIUnknown) ) 

#define INCFAudioTag_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define INCFAudioTag_get_Duration(This,milliseconds)	\
    ( (This)->lpVtbl -> get_Duration(This,milliseconds) ) 

#define INCFAudioTag_get_HasAudio(This,has_audio)	\
    ( (This)->lpVtbl -> get_HasAudio(This,has_audio) ) 

#define INCFAudioTag_get_HasVideo(This,has_video)	\
    ( (This)->lpVtbl -> get_HasVideo(This,has_video) ) 

#define INCFAudioTag_GetComposer(This,composer)	\
    ( (This)->lpVtbl -> GetComposer(This,composer) ) 

#define INCFAudioTag_SetComposer(This,composer)	\
    ( (This)->lpVtbl -> SetComposer(This,composer) ) 

#define INCFAudioTag_GetAlbumAuthor(This,author)	\
    ( (This)->lpVtbl -> GetAlbumAuthor(This,author) ) 

#define INCFAudioTag_SetAlbumAuthor(This,author)	\
    ( (This)->lpVtbl -> SetAlbumAuthor(This,author) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFAudioTag_INTERFACE_DEFINED__ */


#ifndef __INCFWmaTag_INTERFACE_DEFINED__
#define __INCFWmaTag_INTERFACE_DEFINED__

/* interface INCFWmaTag */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFWmaTag;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("78C894FB-9551-45BB-817B-313CC452D698")
    INCFWmaTag : public INCFAudioTag
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct INCFWmaTagVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFWmaTag * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFWmaTag * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFWmaTag * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFWmaTag * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFWmaTag * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFWmaTag * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFWmaTag * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            INCFWmaTag * This,
            /* [in] */ BSTR title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTitle )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAuthor )( 
            INCFWmaTag * This,
            /* [in] */ BSTR author);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAuthor )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *author);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            INCFWmaTag * This,
            /* [in] */ BSTR description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRating )( 
            INCFWmaTag * This,
            /* [in] */ BSTR rating);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRating )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *rating);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCopyright )( 
            INCFWmaTag * This,
            /* [in] */ BSTR copyright);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCopyright )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *copyright);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAlbumTitle )( 
            INCFWmaTag * This,
            /* [in] */ BSTR album_title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAlbumTitle )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *album_title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetTrack )( 
            INCFWmaTag * This,
            /* [in] */ BSTR track_number);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrack )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *track_number);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetGenre )( 
            INCFWmaTag * This,
            /* [in] */ BSTR genre);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGenre )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *genre);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetYear )( 
            INCFWmaTag * This,
            /* [in] */ BSTR year);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetYear )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *year);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCopyrightURL )( 
            INCFWmaTag * This,
            /* [in] */ BSTR copyright_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCopyrightURL )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *copyright_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAlbumCoverURL )( 
            INCFWmaTag * This,
            /* [in] */ BSTR album_cover_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAlbumCoverURL )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *album_cover_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPromotionURL )( 
            INCFWmaTag * This,
            /* [in] */ BSTR promotion_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPromotionURL )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *promotion_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLyrics )( 
            INCFWmaTag * This,
            /* [in] */ BSTR lyrics);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLyrics )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *lyrics);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFromFile )( 
            INCFWmaTag * This,
            /* [in] */ BSTR filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveToFile )( 
            INCFWmaTag * This,
            /* [in] */ BSTR filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFromInterface )( 
            INCFWmaTag * This,
            /* [in] */ IUnknown *pIUnknown);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveToInterface )( 
            INCFWmaTag * This,
            /* [in] */ IUnknown *pIUnknown);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            INCFWmaTag * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            INCFWmaTag * This,
            /* [retval][out] */ long *milliseconds);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasAudio )( 
            INCFWmaTag * This,
            /* [retval][out] */ VARIANT_BOOL *has_audio);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasVideo )( 
            INCFWmaTag * This,
            /* [retval][out] */ VARIANT_BOOL *has_video);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComposer )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *composer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetComposer )( 
            INCFWmaTag * This,
            /* [in] */ BSTR composer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAlbumAuthor )( 
            INCFWmaTag * This,
            /* [retval][out] */ BSTR *author);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAlbumAuthor )( 
            INCFWmaTag * This,
            /* [in] */ BSTR author);
        
        END_INTERFACE
    } INCFWmaTagVtbl;

    interface INCFWmaTag
    {
        CONST_VTBL struct INCFWmaTagVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFWmaTag_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFWmaTag_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFWmaTag_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFWmaTag_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFWmaTag_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFWmaTag_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFWmaTag_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFWmaTag_SetTitle(This,title)	\
    ( (This)->lpVtbl -> SetTitle(This,title) ) 

#define INCFWmaTag_GetTitle(This,title)	\
    ( (This)->lpVtbl -> GetTitle(This,title) ) 

#define INCFWmaTag_SetAuthor(This,author)	\
    ( (This)->lpVtbl -> SetAuthor(This,author) ) 

#define INCFWmaTag_GetAuthor(This,author)	\
    ( (This)->lpVtbl -> GetAuthor(This,author) ) 

#define INCFWmaTag_SetDescription(This,description)	\
    ( (This)->lpVtbl -> SetDescription(This,description) ) 

#define INCFWmaTag_GetDescription(This,description)	\
    ( (This)->lpVtbl -> GetDescription(This,description) ) 

#define INCFWmaTag_SetRating(This,rating)	\
    ( (This)->lpVtbl -> SetRating(This,rating) ) 

#define INCFWmaTag_GetRating(This,rating)	\
    ( (This)->lpVtbl -> GetRating(This,rating) ) 

#define INCFWmaTag_SetCopyright(This,copyright)	\
    ( (This)->lpVtbl -> SetCopyright(This,copyright) ) 

#define INCFWmaTag_GetCopyright(This,copyright)	\
    ( (This)->lpVtbl -> GetCopyright(This,copyright) ) 

#define INCFWmaTag_SetAlbumTitle(This,album_title)	\
    ( (This)->lpVtbl -> SetAlbumTitle(This,album_title) ) 

#define INCFWmaTag_GetAlbumTitle(This,album_title)	\
    ( (This)->lpVtbl -> GetAlbumTitle(This,album_title) ) 

#define INCFWmaTag_SetTrack(This,track_number)	\
    ( (This)->lpVtbl -> SetTrack(This,track_number) ) 

#define INCFWmaTag_GetTrack(This,track_number)	\
    ( (This)->lpVtbl -> GetTrack(This,track_number) ) 

#define INCFWmaTag_SetGenre(This,genre)	\
    ( (This)->lpVtbl -> SetGenre(This,genre) ) 

#define INCFWmaTag_GetGenre(This,genre)	\
    ( (This)->lpVtbl -> GetGenre(This,genre) ) 

#define INCFWmaTag_SetYear(This,year)	\
    ( (This)->lpVtbl -> SetYear(This,year) ) 

#define INCFWmaTag_GetYear(This,year)	\
    ( (This)->lpVtbl -> GetYear(This,year) ) 

#define INCFWmaTag_SetCopyrightURL(This,copyright_url)	\
    ( (This)->lpVtbl -> SetCopyrightURL(This,copyright_url) ) 

#define INCFWmaTag_GetCopyrightURL(This,copyright_url)	\
    ( (This)->lpVtbl -> GetCopyrightURL(This,copyright_url) ) 

#define INCFWmaTag_SetAlbumCoverURL(This,album_cover_url)	\
    ( (This)->lpVtbl -> SetAlbumCoverURL(This,album_cover_url) ) 

#define INCFWmaTag_GetAlbumCoverURL(This,album_cover_url)	\
    ( (This)->lpVtbl -> GetAlbumCoverURL(This,album_cover_url) ) 

#define INCFWmaTag_SetPromotionURL(This,promotion_url)	\
    ( (This)->lpVtbl -> SetPromotionURL(This,promotion_url) ) 

#define INCFWmaTag_GetPromotionURL(This,promotion_url)	\
    ( (This)->lpVtbl -> GetPromotionURL(This,promotion_url) ) 

#define INCFWmaTag_SetLyrics(This,lyrics)	\
    ( (This)->lpVtbl -> SetLyrics(This,lyrics) ) 

#define INCFWmaTag_GetLyrics(This,lyrics)	\
    ( (This)->lpVtbl -> GetLyrics(This,lyrics) ) 

#define INCFWmaTag_LoadFromFile(This,filename)	\
    ( (This)->lpVtbl -> LoadFromFile(This,filename) ) 

#define INCFWmaTag_SaveToFile(This,filename)	\
    ( (This)->lpVtbl -> SaveToFile(This,filename) ) 

#define INCFWmaTag_LoadFromInterface(This,pIUnknown)	\
    ( (This)->lpVtbl -> LoadFromInterface(This,pIUnknown) ) 

#define INCFWmaTag_SaveToInterface(This,pIUnknown)	\
    ( (This)->lpVtbl -> SaveToInterface(This,pIUnknown) ) 

#define INCFWmaTag_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define INCFWmaTag_get_Duration(This,milliseconds)	\
    ( (This)->lpVtbl -> get_Duration(This,milliseconds) ) 

#define INCFWmaTag_get_HasAudio(This,has_audio)	\
    ( (This)->lpVtbl -> get_HasAudio(This,has_audio) ) 

#define INCFWmaTag_get_HasVideo(This,has_video)	\
    ( (This)->lpVtbl -> get_HasVideo(This,has_video) ) 

#define INCFWmaTag_GetComposer(This,composer)	\
    ( (This)->lpVtbl -> GetComposer(This,composer) ) 

#define INCFWmaTag_SetComposer(This,composer)	\
    ( (This)->lpVtbl -> SetComposer(This,composer) ) 

#define INCFWmaTag_GetAlbumAuthor(This,author)	\
    ( (This)->lpVtbl -> GetAlbumAuthor(This,author) ) 

#define INCFWmaTag_SetAlbumAuthor(This,author)	\
    ( (This)->lpVtbl -> SetAlbumAuthor(This,author) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFWmaTag_INTERFACE_DEFINED__ */


#ifndef __INCFMp3Tag_INTERFACE_DEFINED__
#define __INCFMp3Tag_INTERFACE_DEFINED__

/* interface INCFMp3Tag */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFMp3Tag;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A32E1EB6-1437-425D-B966-0B427C109B9E")
    INCFMp3Tag : public INCFAudioTag
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct INCFMp3TagVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFMp3Tag * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFMp3Tag * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFMp3Tag * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFMp3Tag * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFMp3Tag * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFMp3Tag * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFMp3Tag * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTitle )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAuthor )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR author);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAuthor )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *author);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRating )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR rating);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRating )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *rating);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCopyright )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR copyright);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCopyright )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *copyright);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAlbumTitle )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR album_title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAlbumTitle )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *album_title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetTrack )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR track_number);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrack )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *track_number);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetGenre )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR genre);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGenre )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *genre);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetYear )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR year);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetYear )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *year);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCopyrightURL )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR copyright_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCopyrightURL )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *copyright_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAlbumCoverURL )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR album_cover_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAlbumCoverURL )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *album_cover_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPromotionURL )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR promotion_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPromotionURL )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *promotion_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLyrics )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR lyrics);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLyrics )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *lyrics);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFromFile )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveToFile )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFromInterface )( 
            INCFMp3Tag * This,
            /* [in] */ IUnknown *pIUnknown);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveToInterface )( 
            INCFMp3Tag * This,
            /* [in] */ IUnknown *pIUnknown);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            INCFMp3Tag * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            INCFMp3Tag * This,
            /* [retval][out] */ long *milliseconds);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasAudio )( 
            INCFMp3Tag * This,
            /* [retval][out] */ VARIANT_BOOL *has_audio);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasVideo )( 
            INCFMp3Tag * This,
            /* [retval][out] */ VARIANT_BOOL *has_video);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComposer )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *composer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetComposer )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR composer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAlbumAuthor )( 
            INCFMp3Tag * This,
            /* [retval][out] */ BSTR *author);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAlbumAuthor )( 
            INCFMp3Tag * This,
            /* [in] */ BSTR author);
        
        END_INTERFACE
    } INCFMp3TagVtbl;

    interface INCFMp3Tag
    {
        CONST_VTBL struct INCFMp3TagVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFMp3Tag_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFMp3Tag_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFMp3Tag_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFMp3Tag_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFMp3Tag_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFMp3Tag_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFMp3Tag_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFMp3Tag_SetTitle(This,title)	\
    ( (This)->lpVtbl -> SetTitle(This,title) ) 

#define INCFMp3Tag_GetTitle(This,title)	\
    ( (This)->lpVtbl -> GetTitle(This,title) ) 

#define INCFMp3Tag_SetAuthor(This,author)	\
    ( (This)->lpVtbl -> SetAuthor(This,author) ) 

#define INCFMp3Tag_GetAuthor(This,author)	\
    ( (This)->lpVtbl -> GetAuthor(This,author) ) 

#define INCFMp3Tag_SetDescription(This,description)	\
    ( (This)->lpVtbl -> SetDescription(This,description) ) 

#define INCFMp3Tag_GetDescription(This,description)	\
    ( (This)->lpVtbl -> GetDescription(This,description) ) 

#define INCFMp3Tag_SetRating(This,rating)	\
    ( (This)->lpVtbl -> SetRating(This,rating) ) 

#define INCFMp3Tag_GetRating(This,rating)	\
    ( (This)->lpVtbl -> GetRating(This,rating) ) 

#define INCFMp3Tag_SetCopyright(This,copyright)	\
    ( (This)->lpVtbl -> SetCopyright(This,copyright) ) 

#define INCFMp3Tag_GetCopyright(This,copyright)	\
    ( (This)->lpVtbl -> GetCopyright(This,copyright) ) 

#define INCFMp3Tag_SetAlbumTitle(This,album_title)	\
    ( (This)->lpVtbl -> SetAlbumTitle(This,album_title) ) 

#define INCFMp3Tag_GetAlbumTitle(This,album_title)	\
    ( (This)->lpVtbl -> GetAlbumTitle(This,album_title) ) 

#define INCFMp3Tag_SetTrack(This,track_number)	\
    ( (This)->lpVtbl -> SetTrack(This,track_number) ) 

#define INCFMp3Tag_GetTrack(This,track_number)	\
    ( (This)->lpVtbl -> GetTrack(This,track_number) ) 

#define INCFMp3Tag_SetGenre(This,genre)	\
    ( (This)->lpVtbl -> SetGenre(This,genre) ) 

#define INCFMp3Tag_GetGenre(This,genre)	\
    ( (This)->lpVtbl -> GetGenre(This,genre) ) 

#define INCFMp3Tag_SetYear(This,year)	\
    ( (This)->lpVtbl -> SetYear(This,year) ) 

#define INCFMp3Tag_GetYear(This,year)	\
    ( (This)->lpVtbl -> GetYear(This,year) ) 

#define INCFMp3Tag_SetCopyrightURL(This,copyright_url)	\
    ( (This)->lpVtbl -> SetCopyrightURL(This,copyright_url) ) 

#define INCFMp3Tag_GetCopyrightURL(This,copyright_url)	\
    ( (This)->lpVtbl -> GetCopyrightURL(This,copyright_url) ) 

#define INCFMp3Tag_SetAlbumCoverURL(This,album_cover_url)	\
    ( (This)->lpVtbl -> SetAlbumCoverURL(This,album_cover_url) ) 

#define INCFMp3Tag_GetAlbumCoverURL(This,album_cover_url)	\
    ( (This)->lpVtbl -> GetAlbumCoverURL(This,album_cover_url) ) 

#define INCFMp3Tag_SetPromotionURL(This,promotion_url)	\
    ( (This)->lpVtbl -> SetPromotionURL(This,promotion_url) ) 

#define INCFMp3Tag_GetPromotionURL(This,promotion_url)	\
    ( (This)->lpVtbl -> GetPromotionURL(This,promotion_url) ) 

#define INCFMp3Tag_SetLyrics(This,lyrics)	\
    ( (This)->lpVtbl -> SetLyrics(This,lyrics) ) 

#define INCFMp3Tag_GetLyrics(This,lyrics)	\
    ( (This)->lpVtbl -> GetLyrics(This,lyrics) ) 

#define INCFMp3Tag_LoadFromFile(This,filename)	\
    ( (This)->lpVtbl -> LoadFromFile(This,filename) ) 

#define INCFMp3Tag_SaveToFile(This,filename)	\
    ( (This)->lpVtbl -> SaveToFile(This,filename) ) 

#define INCFMp3Tag_LoadFromInterface(This,pIUnknown)	\
    ( (This)->lpVtbl -> LoadFromInterface(This,pIUnknown) ) 

#define INCFMp3Tag_SaveToInterface(This,pIUnknown)	\
    ( (This)->lpVtbl -> SaveToInterface(This,pIUnknown) ) 

#define INCFMp3Tag_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define INCFMp3Tag_get_Duration(This,milliseconds)	\
    ( (This)->lpVtbl -> get_Duration(This,milliseconds) ) 

#define INCFMp3Tag_get_HasAudio(This,has_audio)	\
    ( (This)->lpVtbl -> get_HasAudio(This,has_audio) ) 

#define INCFMp3Tag_get_HasVideo(This,has_video)	\
    ( (This)->lpVtbl -> get_HasVideo(This,has_video) ) 

#define INCFMp3Tag_GetComposer(This,composer)	\
    ( (This)->lpVtbl -> GetComposer(This,composer) ) 

#define INCFMp3Tag_SetComposer(This,composer)	\
    ( (This)->lpVtbl -> SetComposer(This,composer) ) 

#define INCFMp3Tag_GetAlbumAuthor(This,author)	\
    ( (This)->lpVtbl -> GetAlbumAuthor(This,author) ) 

#define INCFMp3Tag_SetAlbumAuthor(This,author)	\
    ( (This)->lpVtbl -> SetAlbumAuthor(This,author) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFMp3Tag_INTERFACE_DEFINED__ */


#ifndef __INCFAacTag_INTERFACE_DEFINED__
#define __INCFAacTag_INTERFACE_DEFINED__

/* interface INCFAacTag */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFAacTag;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C9C7563D-D672-47BA-B778-7427A0294380")
    INCFAacTag : public INCFAudioTag
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct INCFAacTagVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFAacTag * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFAacTag * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFAacTag * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFAacTag * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFAacTag * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFAacTag * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFAacTag * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            INCFAacTag * This,
            /* [in] */ BSTR title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTitle )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAuthor )( 
            INCFAacTag * This,
            /* [in] */ BSTR author);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAuthor )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *author);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            INCFAacTag * This,
            /* [in] */ BSTR description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRating )( 
            INCFAacTag * This,
            /* [in] */ BSTR rating);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRating )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *rating);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCopyright )( 
            INCFAacTag * This,
            /* [in] */ BSTR copyright);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCopyright )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *copyright);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAlbumTitle )( 
            INCFAacTag * This,
            /* [in] */ BSTR album_title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAlbumTitle )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *album_title);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetTrack )( 
            INCFAacTag * This,
            /* [in] */ BSTR track_number);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrack )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *track_number);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetGenre )( 
            INCFAacTag * This,
            /* [in] */ BSTR genre);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGenre )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *genre);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetYear )( 
            INCFAacTag * This,
            /* [in] */ BSTR year);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetYear )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *year);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCopyrightURL )( 
            INCFAacTag * This,
            /* [in] */ BSTR copyright_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCopyrightURL )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *copyright_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAlbumCoverURL )( 
            INCFAacTag * This,
            /* [in] */ BSTR album_cover_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAlbumCoverURL )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *album_cover_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPromotionURL )( 
            INCFAacTag * This,
            /* [in] */ BSTR promotion_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPromotionURL )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *promotion_url);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLyrics )( 
            INCFAacTag * This,
            /* [in] */ BSTR lyrics);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLyrics )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *lyrics);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFromFile )( 
            INCFAacTag * This,
            /* [in] */ BSTR filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveToFile )( 
            INCFAacTag * This,
            /* [in] */ BSTR filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFromInterface )( 
            INCFAacTag * This,
            /* [in] */ IUnknown *pIUnknown);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveToInterface )( 
            INCFAacTag * This,
            /* [in] */ IUnknown *pIUnknown);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            INCFAacTag * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            INCFAacTag * This,
            /* [retval][out] */ long *milliseconds);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasAudio )( 
            INCFAacTag * This,
            /* [retval][out] */ VARIANT_BOOL *has_audio);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasVideo )( 
            INCFAacTag * This,
            /* [retval][out] */ VARIANT_BOOL *has_video);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComposer )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *composer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetComposer )( 
            INCFAacTag * This,
            /* [in] */ BSTR composer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAlbumAuthor )( 
            INCFAacTag * This,
            /* [retval][out] */ BSTR *author);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAlbumAuthor )( 
            INCFAacTag * This,
            /* [in] */ BSTR author);
        
        END_INTERFACE
    } INCFAacTagVtbl;

    interface INCFAacTag
    {
        CONST_VTBL struct INCFAacTagVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFAacTag_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFAacTag_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFAacTag_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFAacTag_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFAacTag_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFAacTag_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFAacTag_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFAacTag_SetTitle(This,title)	\
    ( (This)->lpVtbl -> SetTitle(This,title) ) 

#define INCFAacTag_GetTitle(This,title)	\
    ( (This)->lpVtbl -> GetTitle(This,title) ) 

#define INCFAacTag_SetAuthor(This,author)	\
    ( (This)->lpVtbl -> SetAuthor(This,author) ) 

#define INCFAacTag_GetAuthor(This,author)	\
    ( (This)->lpVtbl -> GetAuthor(This,author) ) 

#define INCFAacTag_SetDescription(This,description)	\
    ( (This)->lpVtbl -> SetDescription(This,description) ) 

#define INCFAacTag_GetDescription(This,description)	\
    ( (This)->lpVtbl -> GetDescription(This,description) ) 

#define INCFAacTag_SetRating(This,rating)	\
    ( (This)->lpVtbl -> SetRating(This,rating) ) 

#define INCFAacTag_GetRating(This,rating)	\
    ( (This)->lpVtbl -> GetRating(This,rating) ) 

#define INCFAacTag_SetCopyright(This,copyright)	\
    ( (This)->lpVtbl -> SetCopyright(This,copyright) ) 

#define INCFAacTag_GetCopyright(This,copyright)	\
    ( (This)->lpVtbl -> GetCopyright(This,copyright) ) 

#define INCFAacTag_SetAlbumTitle(This,album_title)	\
    ( (This)->lpVtbl -> SetAlbumTitle(This,album_title) ) 

#define INCFAacTag_GetAlbumTitle(This,album_title)	\
    ( (This)->lpVtbl -> GetAlbumTitle(This,album_title) ) 

#define INCFAacTag_SetTrack(This,track_number)	\
    ( (This)->lpVtbl -> SetTrack(This,track_number) ) 

#define INCFAacTag_GetTrack(This,track_number)	\
    ( (This)->lpVtbl -> GetTrack(This,track_number) ) 

#define INCFAacTag_SetGenre(This,genre)	\
    ( (This)->lpVtbl -> SetGenre(This,genre) ) 

#define INCFAacTag_GetGenre(This,genre)	\
    ( (This)->lpVtbl -> GetGenre(This,genre) ) 

#define INCFAacTag_SetYear(This,year)	\
    ( (This)->lpVtbl -> SetYear(This,year) ) 

#define INCFAacTag_GetYear(This,year)	\
    ( (This)->lpVtbl -> GetYear(This,year) ) 

#define INCFAacTag_SetCopyrightURL(This,copyright_url)	\
    ( (This)->lpVtbl -> SetCopyrightURL(This,copyright_url) ) 

#define INCFAacTag_GetCopyrightURL(This,copyright_url)	\
    ( (This)->lpVtbl -> GetCopyrightURL(This,copyright_url) ) 

#define INCFAacTag_SetAlbumCoverURL(This,album_cover_url)	\
    ( (This)->lpVtbl -> SetAlbumCoverURL(This,album_cover_url) ) 

#define INCFAacTag_GetAlbumCoverURL(This,album_cover_url)	\
    ( (This)->lpVtbl -> GetAlbumCoverURL(This,album_cover_url) ) 

#define INCFAacTag_SetPromotionURL(This,promotion_url)	\
    ( (This)->lpVtbl -> SetPromotionURL(This,promotion_url) ) 

#define INCFAacTag_GetPromotionURL(This,promotion_url)	\
    ( (This)->lpVtbl -> GetPromotionURL(This,promotion_url) ) 

#define INCFAacTag_SetLyrics(This,lyrics)	\
    ( (This)->lpVtbl -> SetLyrics(This,lyrics) ) 

#define INCFAacTag_GetLyrics(This,lyrics)	\
    ( (This)->lpVtbl -> GetLyrics(This,lyrics) ) 

#define INCFAacTag_LoadFromFile(This,filename)	\
    ( (This)->lpVtbl -> LoadFromFile(This,filename) ) 

#define INCFAacTag_SaveToFile(This,filename)	\
    ( (This)->lpVtbl -> SaveToFile(This,filename) ) 

#define INCFAacTag_LoadFromInterface(This,pIUnknown)	\
    ( (This)->lpVtbl -> LoadFromInterface(This,pIUnknown) ) 

#define INCFAacTag_SaveToInterface(This,pIUnknown)	\
    ( (This)->lpVtbl -> SaveToInterface(This,pIUnknown) ) 

#define INCFAacTag_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define INCFAacTag_get_Duration(This,milliseconds)	\
    ( (This)->lpVtbl -> get_Duration(This,milliseconds) ) 

#define INCFAacTag_get_HasAudio(This,has_audio)	\
    ( (This)->lpVtbl -> get_HasAudio(This,has_audio) ) 

#define INCFAacTag_get_HasVideo(This,has_video)	\
    ( (This)->lpVtbl -> get_HasVideo(This,has_video) ) 

#define INCFAacTag_GetComposer(This,composer)	\
    ( (This)->lpVtbl -> GetComposer(This,composer) ) 

#define INCFAacTag_SetComposer(This,composer)	\
    ( (This)->lpVtbl -> SetComposer(This,composer) ) 

#define INCFAacTag_GetAlbumAuthor(This,author)	\
    ( (This)->lpVtbl -> GetAlbumAuthor(This,author) ) 

#define INCFAacTag_SetAlbumAuthor(This,author)	\
    ( (This)->lpVtbl -> SetAlbumAuthor(This,author) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFAacTag_INTERFACE_DEFINED__ */


#ifndef __INCFMp3Genre_INTERFACE_DEFINED__
#define __INCFMp3Genre_INTERFACE_DEFINED__

/* interface INCFMp3Genre */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFMp3Genre;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8B260E48-2D30-42BA-8113-0293CA98489A")
    INCFMp3Genre : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetGenreById( 
            /* [in] */ long genre_id,
            /* [retval][out] */ BSTR *genre_name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetGenreByName( 
            /* [in] */ BSTR genre_name,
            /* [retval][out] */ long *genre_id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateGenre( 
            /* [retval][out] */ INCFCollectionMap **ppINCFCollectionMap) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFMp3GenreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFMp3Genre * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFMp3Genre * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFMp3Genre * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFMp3Genre * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFMp3Genre * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFMp3Genre * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFMp3Genre * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGenreById )( 
            INCFMp3Genre * This,
            /* [in] */ long genre_id,
            /* [retval][out] */ BSTR *genre_name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGenreByName )( 
            INCFMp3Genre * This,
            /* [in] */ BSTR genre_name,
            /* [retval][out] */ long *genre_id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateGenre )( 
            INCFMp3Genre * This,
            /* [retval][out] */ INCFCollectionMap **ppINCFCollectionMap);
        
        END_INTERFACE
    } INCFMp3GenreVtbl;

    interface INCFMp3Genre
    {
        CONST_VTBL struct INCFMp3GenreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFMp3Genre_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFMp3Genre_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFMp3Genre_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFMp3Genre_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFMp3Genre_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFMp3Genre_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFMp3Genre_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFMp3Genre_GetGenreById(This,genre_id,genre_name)	\
    ( (This)->lpVtbl -> GetGenreById(This,genre_id,genre_name) ) 

#define INCFMp3Genre_GetGenreByName(This,genre_name,genre_id)	\
    ( (This)->lpVtbl -> GetGenreByName(This,genre_name,genre_id) ) 

#define INCFMp3Genre_EnumerateGenre(This,ppINCFCollectionMap)	\
    ( (This)->lpVtbl -> EnumerateGenre(This,ppINCFCollectionMap) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFMp3Genre_INTERFACE_DEFINED__ */


#ifndef __INCFAudioCD_INTERFACE_DEFINED__
#define __INCFAudioCD_INTERFACE_DEFINED__

/* interface INCFAudioCD */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFAudioCD;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("01785C52-E318-4AA2-978C-A8D3292D8AEE")
    INCFAudioCD : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR drive) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CddbId( 
            /* [retval][out] */ BSTR *cddb_id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CddbQuery( 
            /* [retval][out] */ BSTR *query_string) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TrackCount( 
            /* [retval][out] */ long *track_count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Loaded( 
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Drive( 
            /* [retval][out] */ BSTR *drive) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TotalPlaytime( 
            /* [retval][out] */ long *ms) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPlaytime( 
            /* [in] */ long track_number,
            /* [retval][out] */ long *ms) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtractTrack( 
            /* [in] */ long track_number,
            /* [in] */ BSTR filename,
            /* [in] */ VARIANT_BOOL bAsync) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExecuteCddbQuery( 
            /* [in] */ BSTR freedb_server,
            /* [in] */ VARIANT_BOOL bAsync) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Artist( 
            /* [retval][out] */ BSTR *artist) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AlbumTitle( 
            /* [retval][out] */ BSTR *album_title) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Genre( 
            /* [retval][out] */ BSTR *genre) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Year( 
            /* [retval][out] */ BSTR *year) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTitle( 
            /* [in] */ long track_number,
            /* [retval][out] */ BSTR *track_name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CddbLoaded( 
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtractTrackRange( 
            /* [in] */ long track_number_start,
            /* [in] */ long track_number_stop,
            /* [in] */ BSTR out_filename,
            /* [in] */ VARIANT_BOOL bAsync) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionFinished( 
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionSucceeded( 
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionErrorMessage( 
            /* [retval][out] */ BSTR *error_message) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetExtractionProgressPercent( 
            /* [retval][out] */ long *progress_value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFAudioCDVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFAudioCD * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFAudioCD * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFAudioCD * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFAudioCD * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFAudioCD * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFAudioCD * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFAudioCD * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            INCFAudioCD * This,
            /* [in] */ BSTR drive);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CddbId )( 
            INCFAudioCD * This,
            /* [retval][out] */ BSTR *cddb_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CddbQuery )( 
            INCFAudioCD * This,
            /* [retval][out] */ BSTR *query_string);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TrackCount )( 
            INCFAudioCD * This,
            /* [retval][out] */ long *track_count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Loaded )( 
            INCFAudioCD * This,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Drive )( 
            INCFAudioCD * This,
            /* [retval][out] */ BSTR *drive);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TotalPlaytime )( 
            INCFAudioCD * This,
            /* [retval][out] */ long *ms);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPlaytime )( 
            INCFAudioCD * This,
            /* [in] */ long track_number,
            /* [retval][out] */ long *ms);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtractTrack )( 
            INCFAudioCD * This,
            /* [in] */ long track_number,
            /* [in] */ BSTR filename,
            /* [in] */ VARIANT_BOOL bAsync);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExecuteCddbQuery )( 
            INCFAudioCD * This,
            /* [in] */ BSTR freedb_server,
            /* [in] */ VARIANT_BOOL bAsync);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Artist )( 
            INCFAudioCD * This,
            /* [retval][out] */ BSTR *artist);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AlbumTitle )( 
            INCFAudioCD * This,
            /* [retval][out] */ BSTR *album_title);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Genre )( 
            INCFAudioCD * This,
            /* [retval][out] */ BSTR *genre);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Year )( 
            INCFAudioCD * This,
            /* [retval][out] */ BSTR *year);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTitle )( 
            INCFAudioCD * This,
            /* [in] */ long track_number,
            /* [retval][out] */ BSTR *track_name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CddbLoaded )( 
            INCFAudioCD * This,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtractTrackRange )( 
            INCFAudioCD * This,
            /* [in] */ long track_number_start,
            /* [in] */ long track_number_stop,
            /* [in] */ BSTR out_filename,
            /* [in] */ VARIANT_BOOL bAsync);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionFinished )( 
            INCFAudioCD * This,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionSucceeded )( 
            INCFAudioCD * This,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionErrorMessage )( 
            INCFAudioCD * This,
            /* [retval][out] */ BSTR *error_message);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetExtractionProgressPercent )( 
            INCFAudioCD * This,
            /* [retval][out] */ long *progress_value);
        
        END_INTERFACE
    } INCFAudioCDVtbl;

    interface INCFAudioCD
    {
        CONST_VTBL struct INCFAudioCDVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFAudioCD_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFAudioCD_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFAudioCD_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFAudioCD_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFAudioCD_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFAudioCD_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFAudioCD_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFAudioCD_Load(This,drive)	\
    ( (This)->lpVtbl -> Load(This,drive) ) 

#define INCFAudioCD_get_CddbId(This,cddb_id)	\
    ( (This)->lpVtbl -> get_CddbId(This,cddb_id) ) 

#define INCFAudioCD_get_CddbQuery(This,query_string)	\
    ( (This)->lpVtbl -> get_CddbQuery(This,query_string) ) 

#define INCFAudioCD_get_TrackCount(This,track_count)	\
    ( (This)->lpVtbl -> get_TrackCount(This,track_count) ) 

#define INCFAudioCD_get_Loaded(This,status)	\
    ( (This)->lpVtbl -> get_Loaded(This,status) ) 

#define INCFAudioCD_get_Drive(This,drive)	\
    ( (This)->lpVtbl -> get_Drive(This,drive) ) 

#define INCFAudioCD_get_TotalPlaytime(This,ms)	\
    ( (This)->lpVtbl -> get_TotalPlaytime(This,ms) ) 

#define INCFAudioCD_GetPlaytime(This,track_number,ms)	\
    ( (This)->lpVtbl -> GetPlaytime(This,track_number,ms) ) 

#define INCFAudioCD_ExtractTrack(This,track_number,filename,bAsync)	\
    ( (This)->lpVtbl -> ExtractTrack(This,track_number,filename,bAsync) ) 

#define INCFAudioCD_ExecuteCddbQuery(This,freedb_server,bAsync)	\
    ( (This)->lpVtbl -> ExecuteCddbQuery(This,freedb_server,bAsync) ) 

#define INCFAudioCD_get_Artist(This,artist)	\
    ( (This)->lpVtbl -> get_Artist(This,artist) ) 

#define INCFAudioCD_get_AlbumTitle(This,album_title)	\
    ( (This)->lpVtbl -> get_AlbumTitle(This,album_title) ) 

#define INCFAudioCD_get_Genre(This,genre)	\
    ( (This)->lpVtbl -> get_Genre(This,genre) ) 

#define INCFAudioCD_get_Year(This,year)	\
    ( (This)->lpVtbl -> get_Year(This,year) ) 

#define INCFAudioCD_GetTitle(This,track_number,track_name)	\
    ( (This)->lpVtbl -> GetTitle(This,track_number,track_name) ) 

#define INCFAudioCD_get_CddbLoaded(This,status)	\
    ( (This)->lpVtbl -> get_CddbLoaded(This,status) ) 

#define INCFAudioCD_ExtractTrackRange(This,track_number_start,track_number_stop,out_filename,bAsync)	\
    ( (This)->lpVtbl -> ExtractTrackRange(This,track_number_start,track_number_stop,out_filename,bAsync) ) 

#define INCFAudioCD_get_ExtractionFinished(This,status)	\
    ( (This)->lpVtbl -> get_ExtractionFinished(This,status) ) 

#define INCFAudioCD_get_ExtractionSucceeded(This,status)	\
    ( (This)->lpVtbl -> get_ExtractionSucceeded(This,status) ) 

#define INCFAudioCD_get_ExtractionErrorMessage(This,error_message)	\
    ( (This)->lpVtbl -> get_ExtractionErrorMessage(This,error_message) ) 

#define INCFAudioCD_GetExtractionProgressPercent(This,progress_value)	\
    ( (This)->lpVtbl -> GetExtractionProgressPercent(This,progress_value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFAudioCD_INTERFACE_DEFINED__ */


#ifndef __INCFEncoderParams_INTERFACE_DEFINED__
#define __INCFEncoderParams_INTERFACE_DEFINED__

/* interface INCFEncoderParams */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFEncoderParams;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A844A5DD-9AB9-4130-A22C-CB752F3CC35D")
    INCFEncoderParams : public IDispatch
    {
    public:
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_NumberOfChannels( 
            /* [retval][out] */ short *count) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_NumberOfChannels( 
            /* [in] */ short count) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_SamplesPerSecond( 
            /* [retval][out] */ long *samples) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_SamplesPerSecond( 
            /* [in] */ long samples) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_BitsPerSample( 
            /* [retval][out] */ short *bits) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_BitsPerSample( 
            /* [in] */ short bits) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFEncoderParamsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFEncoderParams * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFEncoderParams * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFEncoderParams * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFEncoderParams * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFEncoderParams * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFEncoderParams * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFEncoderParams * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumberOfChannels )( 
            INCFEncoderParams * This,
            /* [retval][out] */ short *count);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_NumberOfChannels )( 
            INCFEncoderParams * This,
            /* [in] */ short count);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_SamplesPerSecond )( 
            INCFEncoderParams * This,
            /* [retval][out] */ long *samples);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_SamplesPerSecond )( 
            INCFEncoderParams * This,
            /* [in] */ long samples);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitsPerSample )( 
            INCFEncoderParams * This,
            /* [retval][out] */ short *bits);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitsPerSample )( 
            INCFEncoderParams * This,
            /* [in] */ short bits);
        
        END_INTERFACE
    } INCFEncoderParamsVtbl;

    interface INCFEncoderParams
    {
        CONST_VTBL struct INCFEncoderParamsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFEncoderParams_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFEncoderParams_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFEncoderParams_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFEncoderParams_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFEncoderParams_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFEncoderParams_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFEncoderParams_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFEncoderParams_get_NumberOfChannels(This,count)	\
    ( (This)->lpVtbl -> get_NumberOfChannels(This,count) ) 

#define INCFEncoderParams_put_NumberOfChannels(This,count)	\
    ( (This)->lpVtbl -> put_NumberOfChannels(This,count) ) 

#define INCFEncoderParams_get_SamplesPerSecond(This,samples)	\
    ( (This)->lpVtbl -> get_SamplesPerSecond(This,samples) ) 

#define INCFEncoderParams_put_SamplesPerSecond(This,samples)	\
    ( (This)->lpVtbl -> put_SamplesPerSecond(This,samples) ) 

#define INCFEncoderParams_get_BitsPerSample(This,bits)	\
    ( (This)->lpVtbl -> get_BitsPerSample(This,bits) ) 

#define INCFEncoderParams_put_BitsPerSample(This,bits)	\
    ( (This)->lpVtbl -> put_BitsPerSample(This,bits) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFEncoderParams_INTERFACE_DEFINED__ */


#ifndef __INCFWmaEncoder_INTERFACE_DEFINED__
#define __INCFWmaEncoder_INTERFACE_DEFINED__

/* interface INCFWmaEncoder */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFWmaEncoder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CFFAA2D5-B040-469F-9001-02FDF8AD37E8")
    INCFWmaEncoder : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Encode( 
            /* [in] */ INCFEncoderParams *pINCFEncoderParams,
            /* [in] */ INCFWmaTag *pINCFWmaTag,
            /* [in] */ BSTR in_filename,
            /* [in] */ BSTR out_filename,
            /* [in] */ VARIANT_BOOL async) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionFinished( 
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionSucceeded( 
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionErrorMessage( 
            /* [retval][out] */ BSTR *error_message) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetExtractionProgressPercent( 
            /* [retval][out] */ long *progress_value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFWmaEncoderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFWmaEncoder * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFWmaEncoder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFWmaEncoder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFWmaEncoder * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFWmaEncoder * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFWmaEncoder * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFWmaEncoder * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            INCFWmaEncoder * This,
            /* [in] */ INCFEncoderParams *pINCFEncoderParams,
            /* [in] */ INCFWmaTag *pINCFWmaTag,
            /* [in] */ BSTR in_filename,
            /* [in] */ BSTR out_filename,
            /* [in] */ VARIANT_BOOL async);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionFinished )( 
            INCFWmaEncoder * This,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionSucceeded )( 
            INCFWmaEncoder * This,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionErrorMessage )( 
            INCFWmaEncoder * This,
            /* [retval][out] */ BSTR *error_message);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetExtractionProgressPercent )( 
            INCFWmaEncoder * This,
            /* [retval][out] */ long *progress_value);
        
        END_INTERFACE
    } INCFWmaEncoderVtbl;

    interface INCFWmaEncoder
    {
        CONST_VTBL struct INCFWmaEncoderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFWmaEncoder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFWmaEncoder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFWmaEncoder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFWmaEncoder_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFWmaEncoder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFWmaEncoder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFWmaEncoder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFWmaEncoder_Encode(This,pINCFEncoderParams,pINCFWmaTag,in_filename,out_filename,async)	\
    ( (This)->lpVtbl -> Encode(This,pINCFEncoderParams,pINCFWmaTag,in_filename,out_filename,async) ) 

#define INCFWmaEncoder_get_ExtractionFinished(This,status)	\
    ( (This)->lpVtbl -> get_ExtractionFinished(This,status) ) 

#define INCFWmaEncoder_get_ExtractionSucceeded(This,status)	\
    ( (This)->lpVtbl -> get_ExtractionSucceeded(This,status) ) 

#define INCFWmaEncoder_get_ExtractionErrorMessage(This,error_message)	\
    ( (This)->lpVtbl -> get_ExtractionErrorMessage(This,error_message) ) 

#define INCFWmaEncoder_GetExtractionProgressPercent(This,progress_value)	\
    ( (This)->lpVtbl -> GetExtractionProgressPercent(This,progress_value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFWmaEncoder_INTERFACE_DEFINED__ */


#ifndef __INCFMp3Encoder_INTERFACE_DEFINED__
#define __INCFMp3Encoder_INTERFACE_DEFINED__

/* interface INCFMp3Encoder */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFMp3Encoder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("533B8527-207C-495C-B244-7D02669B5322")
    INCFMp3Encoder : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Encode( 
            /* [in] */ INCFEncoderParams *pINCFEncoderParams,
            /* [in] */ INCFMp3Tag *pINCFMp3Tag,
            /* [in] */ BSTR in_filename,
            /* [in] */ BSTR out_filename,
            /* [in] */ VARIANT_BOOL async) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionFinished( 
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionSucceeded( 
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionErrorMessage( 
            /* [retval][out] */ BSTR *error_message) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetExtractionProgressPercent( 
            /* [retval][out] */ long *progress_value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFMp3EncoderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFMp3Encoder * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFMp3Encoder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFMp3Encoder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFMp3Encoder * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFMp3Encoder * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFMp3Encoder * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFMp3Encoder * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            INCFMp3Encoder * This,
            /* [in] */ INCFEncoderParams *pINCFEncoderParams,
            /* [in] */ INCFMp3Tag *pINCFMp3Tag,
            /* [in] */ BSTR in_filename,
            /* [in] */ BSTR out_filename,
            /* [in] */ VARIANT_BOOL async);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionFinished )( 
            INCFMp3Encoder * This,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionSucceeded )( 
            INCFMp3Encoder * This,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionErrorMessage )( 
            INCFMp3Encoder * This,
            /* [retval][out] */ BSTR *error_message);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetExtractionProgressPercent )( 
            INCFMp3Encoder * This,
            /* [retval][out] */ long *progress_value);
        
        END_INTERFACE
    } INCFMp3EncoderVtbl;

    interface INCFMp3Encoder
    {
        CONST_VTBL struct INCFMp3EncoderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFMp3Encoder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFMp3Encoder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFMp3Encoder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFMp3Encoder_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFMp3Encoder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFMp3Encoder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFMp3Encoder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFMp3Encoder_Encode(This,pINCFEncoderParams,pINCFMp3Tag,in_filename,out_filename,async)	\
    ( (This)->lpVtbl -> Encode(This,pINCFEncoderParams,pINCFMp3Tag,in_filename,out_filename,async) ) 

#define INCFMp3Encoder_get_ExtractionFinished(This,status)	\
    ( (This)->lpVtbl -> get_ExtractionFinished(This,status) ) 

#define INCFMp3Encoder_get_ExtractionSucceeded(This,status)	\
    ( (This)->lpVtbl -> get_ExtractionSucceeded(This,status) ) 

#define INCFMp3Encoder_get_ExtractionErrorMessage(This,error_message)	\
    ( (This)->lpVtbl -> get_ExtractionErrorMessage(This,error_message) ) 

#define INCFMp3Encoder_GetExtractionProgressPercent(This,progress_value)	\
    ( (This)->lpVtbl -> GetExtractionProgressPercent(This,progress_value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFMp3Encoder_INTERFACE_DEFINED__ */


#ifndef __INCFAacEncoder_INTERFACE_DEFINED__
#define __INCFAacEncoder_INTERFACE_DEFINED__

/* interface INCFAacEncoder */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFAacEncoder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A42810A-B410-42FF-B4BB-E648B373DDB8")
    INCFAacEncoder : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Encode( 
            /* [in] */ INCFEncoderParams *pINCFEncoderParams,
            /* [in] */ INCFAacTag *pINCFAacTag,
            /* [in] */ BSTR in_filename,
            /* [in] */ BSTR out_filename,
            /* [in] */ VARIANT_BOOL async) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionFinished( 
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionSucceeded( 
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionErrorMessage( 
            /* [retval][out] */ BSTR *error_message) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetExtractionProgressPercent( 
            /* [retval][out] */ long *progress_value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFAacEncoderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFAacEncoder * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFAacEncoder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFAacEncoder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFAacEncoder * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFAacEncoder * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFAacEncoder * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFAacEncoder * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            INCFAacEncoder * This,
            /* [in] */ INCFEncoderParams *pINCFEncoderParams,
            /* [in] */ INCFAacTag *pINCFAacTag,
            /* [in] */ BSTR in_filename,
            /* [in] */ BSTR out_filename,
            /* [in] */ VARIANT_BOOL async);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionFinished )( 
            INCFAacEncoder * This,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionSucceeded )( 
            INCFAacEncoder * This,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionErrorMessage )( 
            INCFAacEncoder * This,
            /* [retval][out] */ BSTR *error_message);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetExtractionProgressPercent )( 
            INCFAacEncoder * This,
            /* [retval][out] */ long *progress_value);
        
        END_INTERFACE
    } INCFAacEncoderVtbl;

    interface INCFAacEncoder
    {
        CONST_VTBL struct INCFAacEncoderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFAacEncoder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFAacEncoder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFAacEncoder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFAacEncoder_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFAacEncoder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFAacEncoder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFAacEncoder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFAacEncoder_Encode(This,pINCFEncoderParams,pINCFAacTag,in_filename,out_filename,async)	\
    ( (This)->lpVtbl -> Encode(This,pINCFEncoderParams,pINCFAacTag,in_filename,out_filename,async) ) 

#define INCFAacEncoder_get_ExtractionFinished(This,status)	\
    ( (This)->lpVtbl -> get_ExtractionFinished(This,status) ) 

#define INCFAacEncoder_get_ExtractionSucceeded(This,status)	\
    ( (This)->lpVtbl -> get_ExtractionSucceeded(This,status) ) 

#define INCFAacEncoder_get_ExtractionErrorMessage(This,error_message)	\
    ( (This)->lpVtbl -> get_ExtractionErrorMessage(This,error_message) ) 

#define INCFAacEncoder_GetExtractionProgressPercent(This,progress_value)	\
    ( (This)->lpVtbl -> GetExtractionProgressPercent(This,progress_value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFAacEncoder_INTERFACE_DEFINED__ */


#ifndef __INCFWavEncoder_INTERFACE_DEFINED__
#define __INCFWavEncoder_INTERFACE_DEFINED__

/* interface INCFWavEncoder */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFWavEncoder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("812F9470-CA37-46A4-812A-54D9232BD6FD")
    INCFWavEncoder : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Encode( 
            /* [in] */ INCFEncoderParams *pINCFEncoderParams,
            /* [in] */ BSTR in_filename,
            /* [in] */ BSTR out_filename,
            /* [in] */ VARIANT_BOOL async) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EncodeToStream( 
            /* [in] */ INCFEncoderParams *pINCFEncoderParams,
            /* [in] */ BSTR in_filename,
            /* [in] */ INCFStream *pINCFStream) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionFinished( 
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionSucceeded( 
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExtractionErrorMessage( 
            /* [retval][out] */ BSTR *error_message) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetExtractionProgressPercent( 
            /* [retval][out] */ long *progress_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteWaveHeader( 
            /* [in] */ INCFEncoderParams *pINCFEncoderParams,
            /* [in] */ long fileSize,
            /* [in] */ BYTE *pWaveHeader) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteWaveHeaderToStream( 
            /* [in] */ INCFEncoderParams *pINCFEncoderParams,
            /* [in] */ long fileSize,
            /* [in] */ INCFStream *pINCFStream) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFWavEncoderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFWavEncoder * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFWavEncoder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFWavEncoder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFWavEncoder * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFWavEncoder * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFWavEncoder * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFWavEncoder * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            INCFWavEncoder * This,
            /* [in] */ INCFEncoderParams *pINCFEncoderParams,
            /* [in] */ BSTR in_filename,
            /* [in] */ BSTR out_filename,
            /* [in] */ VARIANT_BOOL async);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EncodeToStream )( 
            INCFWavEncoder * This,
            /* [in] */ INCFEncoderParams *pINCFEncoderParams,
            /* [in] */ BSTR in_filename,
            /* [in] */ INCFStream *pINCFStream);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionFinished )( 
            INCFWavEncoder * This,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionSucceeded )( 
            INCFWavEncoder * This,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExtractionErrorMessage )( 
            INCFWavEncoder * This,
            /* [retval][out] */ BSTR *error_message);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetExtractionProgressPercent )( 
            INCFWavEncoder * This,
            /* [retval][out] */ long *progress_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteWaveHeader )( 
            INCFWavEncoder * This,
            /* [in] */ INCFEncoderParams *pINCFEncoderParams,
            /* [in] */ long fileSize,
            /* [in] */ BYTE *pWaveHeader);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteWaveHeaderToStream )( 
            INCFWavEncoder * This,
            /* [in] */ INCFEncoderParams *pINCFEncoderParams,
            /* [in] */ long fileSize,
            /* [in] */ INCFStream *pINCFStream);
        
        END_INTERFACE
    } INCFWavEncoderVtbl;

    interface INCFWavEncoder
    {
        CONST_VTBL struct INCFWavEncoderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFWavEncoder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFWavEncoder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFWavEncoder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFWavEncoder_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFWavEncoder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFWavEncoder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFWavEncoder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFWavEncoder_Encode(This,pINCFEncoderParams,in_filename,out_filename,async)	\
    ( (This)->lpVtbl -> Encode(This,pINCFEncoderParams,in_filename,out_filename,async) ) 

#define INCFWavEncoder_EncodeToStream(This,pINCFEncoderParams,in_filename,pINCFStream)	\
    ( (This)->lpVtbl -> EncodeToStream(This,pINCFEncoderParams,in_filename,pINCFStream) ) 

#define INCFWavEncoder_get_ExtractionFinished(This,status)	\
    ( (This)->lpVtbl -> get_ExtractionFinished(This,status) ) 

#define INCFWavEncoder_get_ExtractionSucceeded(This,status)	\
    ( (This)->lpVtbl -> get_ExtractionSucceeded(This,status) ) 

#define INCFWavEncoder_get_ExtractionErrorMessage(This,error_message)	\
    ( (This)->lpVtbl -> get_ExtractionErrorMessage(This,error_message) ) 

#define INCFWavEncoder_GetExtractionProgressPercent(This,progress_value)	\
    ( (This)->lpVtbl -> GetExtractionProgressPercent(This,progress_value) ) 

#define INCFWavEncoder_WriteWaveHeader(This,pINCFEncoderParams,fileSize,pWaveHeader)	\
    ( (This)->lpVtbl -> WriteWaveHeader(This,pINCFEncoderParams,fileSize,pWaveHeader) ) 

#define INCFWavEncoder_WriteWaveHeaderToStream(This,pINCFEncoderParams,fileSize,pINCFStream)	\
    ( (This)->lpVtbl -> WriteWaveHeaderToStream(This,pINCFEncoderParams,fileSize,pINCFStream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFWavEncoder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ItSoftwareNCFAudio_0000_0013 */
/* [local] */ 

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("009CADE4-9AF5-459C-A17B-8B1F3B1CAB7D") 
enum AudioPlayerStatus
    {
        Uninitialized	= 0,
        Initialized	= 1,
        Loading	= 2,
        Loaded	= 4,
        Playing	= 8,
        Paused	= 16,
        Stopped	= 32,
        Closed	= 64,
        Error	= 128
    } 	AudioPlayerStatus;



extern RPC_IF_HANDLE __MIDL_itf_ItSoftwareNCFAudio_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ItSoftwareNCFAudio_0000_0013_v0_0_s_ifspec;

#ifndef __INCFAudioPlayer_INTERFACE_DEFINED__
#define __INCFAudioPlayer_INTERFACE_DEFINED__

/* interface INCFAudioPlayer */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFAudioPlayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("02F186E7-BA8D-4A10-AC72-FEB82B85171A")
    INCFAudioPlayer : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR mediaObject) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Play( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Pause( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Resume( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPlayedDuration( 
            /* [retval][out] */ long *timeMs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDuration( 
            /* [retval][out] */ long *timeMs) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_VolumeLevel( 
            /* [retval][out] */ long *volume) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_VolumeLevel( 
            /* [in] */ long volume) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ AudioPlayerStatus *status) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Metadata( 
            /* [retval][out] */ INCFAudioTag **pINCFAudioTag) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFAudioPlayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFAudioPlayer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFAudioPlayer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFAudioPlayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFAudioPlayer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFAudioPlayer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFAudioPlayer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFAudioPlayer * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            INCFAudioPlayer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            INCFAudioPlayer * This,
            /* [in] */ BSTR mediaObject);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Play )( 
            INCFAudioPlayer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Pause )( 
            INCFAudioPlayer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Resume )( 
            INCFAudioPlayer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            INCFAudioPlayer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            INCFAudioPlayer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPlayedDuration )( 
            INCFAudioPlayer * This,
            /* [retval][out] */ long *timeMs);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDuration )( 
            INCFAudioPlayer * This,
            /* [retval][out] */ long *timeMs);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_VolumeLevel )( 
            INCFAudioPlayer * This,
            /* [retval][out] */ long *volume);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_VolumeLevel )( 
            INCFAudioPlayer * This,
            /* [in] */ long volume);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            INCFAudioPlayer * This,
            /* [retval][out] */ AudioPlayerStatus *status);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Metadata )( 
            INCFAudioPlayer * This,
            /* [retval][out] */ INCFAudioTag **pINCFAudioTag);
        
        END_INTERFACE
    } INCFAudioPlayerVtbl;

    interface INCFAudioPlayer
    {
        CONST_VTBL struct INCFAudioPlayerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFAudioPlayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFAudioPlayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFAudioPlayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFAudioPlayer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFAudioPlayer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFAudioPlayer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFAudioPlayer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFAudioPlayer_Initialize(This)	\
    ( (This)->lpVtbl -> Initialize(This) ) 

#define INCFAudioPlayer_Load(This,mediaObject)	\
    ( (This)->lpVtbl -> Load(This,mediaObject) ) 

#define INCFAudioPlayer_Play(This)	\
    ( (This)->lpVtbl -> Play(This) ) 

#define INCFAudioPlayer_Pause(This)	\
    ( (This)->lpVtbl -> Pause(This) ) 

#define INCFAudioPlayer_Resume(This)	\
    ( (This)->lpVtbl -> Resume(This) ) 

#define INCFAudioPlayer_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define INCFAudioPlayer_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define INCFAudioPlayer_GetPlayedDuration(This,timeMs)	\
    ( (This)->lpVtbl -> GetPlayedDuration(This,timeMs) ) 

#define INCFAudioPlayer_GetDuration(This,timeMs)	\
    ( (This)->lpVtbl -> GetDuration(This,timeMs) ) 

#define INCFAudioPlayer_get_VolumeLevel(This,volume)	\
    ( (This)->lpVtbl -> get_VolumeLevel(This,volume) ) 

#define INCFAudioPlayer_put_VolumeLevel(This,volume)	\
    ( (This)->lpVtbl -> put_VolumeLevel(This,volume) ) 

#define INCFAudioPlayer_get_Status(This,status)	\
    ( (This)->lpVtbl -> get_Status(This,status) ) 

#define INCFAudioPlayer_get_Metadata(This,pINCFAudioTag)	\
    ( (This)->lpVtbl -> get_Metadata(This,pINCFAudioTag) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFAudioPlayer_INTERFACE_DEFINED__ */



#ifndef __ItSoftwareNCFAudioLib_LIBRARY_DEFINED__
#define __ItSoftwareNCFAudioLib_LIBRARY_DEFINED__

/* library ItSoftwareNCFAudioLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ItSoftwareNCFAudioLib;

EXTERN_C const CLSID CLSID_NCFAudioCD;

#ifdef __cplusplus

class DECLSPEC_UUID("7C01ACFA-59D2-4539-9D86-288A215423D8")
NCFAudioCD;
#endif

EXTERN_C const CLSID CLSID_NCFWmaEncoder;

#ifdef __cplusplus

class DECLSPEC_UUID("729E5AEA-46E7-4E19-AF0A-7CC7EEC1A969")
NCFWmaEncoder;
#endif

EXTERN_C const CLSID CLSID_NCFMp3Encoder;

#ifdef __cplusplus

class DECLSPEC_UUID("9DAC6DFA-6D9C-4B1D-83C2-8DE93E771DD0")
NCFMp3Encoder;
#endif

EXTERN_C const CLSID CLSID_NCFAacEncoder;

#ifdef __cplusplus

class DECLSPEC_UUID("50D87872-E0E2-4470-9DE0-48FF297E0584")
NCFAacEncoder;
#endif

EXTERN_C const CLSID CLSID_NCFWavEncoder;

#ifdef __cplusplus

class DECLSPEC_UUID("969620D5-C89F-49F7-BFB3-0D9E3A0C6186")
NCFWavEncoder;
#endif

EXTERN_C const CLSID CLSID_NCFEncoderParams;

#ifdef __cplusplus

class DECLSPEC_UUID("4783B9EE-AB96-4105-9C5E-496F74E26AAE")
NCFEncoderParams;
#endif

EXTERN_C const CLSID CLSID_NCFWmaTag;

#ifdef __cplusplus

class DECLSPEC_UUID("611250A1-4A6C-4FAC-B72C-B849A5F33110")
NCFWmaTag;
#endif

EXTERN_C const CLSID CLSID_NCFMp3Tag;

#ifdef __cplusplus

class DECLSPEC_UUID("45AEBF1B-D4F0-47A2-A7DD-87376B187E0C")
NCFMp3Tag;
#endif

EXTERN_C const CLSID CLSID_NCFAacTag;

#ifdef __cplusplus

class DECLSPEC_UUID("B05F9A1F-8B15-4A79-90BD-7C68D9392527")
NCFAacTag;
#endif

EXTERN_C const CLSID CLSID_NCFMp3Genre;

#ifdef __cplusplus

class DECLSPEC_UUID("6EA48EAF-F717-4CF9-BD74-71C3E5E2092A")
NCFMp3Genre;
#endif

EXTERN_C const CLSID CLSID_NCFAudioPlayer;

#ifdef __cplusplus

class DECLSPEC_UUID("E5743312-7214-4C6C-A33C-732E82BC5AB7")
NCFAudioPlayer;
#endif
#endif /* __ItSoftwareNCFAudioLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


