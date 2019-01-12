

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ItSoftwareNCFIO.idl:
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

#ifndef __ItSoftwareNCFIO_i_h__
#define __ItSoftwareNCFIO_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __INCFCollectionList_FWD_DEFINED__
#define __INCFCollectionList_FWD_DEFINED__
typedef interface INCFCollectionList INCFCollectionList;

#endif 	/* __INCFCollectionList_FWD_DEFINED__ */


#ifndef __INCFStream_FWD_DEFINED__
#define __INCFStream_FWD_DEFINED__
typedef interface INCFStream INCFStream;

#endif 	/* __INCFStream_FWD_DEFINED__ */


#ifndef __INCFPath_FWD_DEFINED__
#define __INCFPath_FWD_DEFINED__
typedef interface INCFPath INCFPath;

#endif 	/* __INCFPath_FWD_DEFINED__ */


#ifndef __INCFUrl_FWD_DEFINED__
#define __INCFUrl_FWD_DEFINED__
typedef interface INCFUrl INCFUrl;

#endif 	/* __INCFUrl_FWD_DEFINED__ */


#ifndef __INCFStringStream_FWD_DEFINED__
#define __INCFStringStream_FWD_DEFINED__
typedef interface INCFStringStream INCFStringStream;

#endif 	/* __INCFStringStream_FWD_DEFINED__ */


#ifndef __INCFFileStream_FWD_DEFINED__
#define __INCFFileStream_FWD_DEFINED__
typedef interface INCFFileStream INCFFileStream;

#endif 	/* __INCFFileStream_FWD_DEFINED__ */


#ifndef __INCFMemoryStream_FWD_DEFINED__
#define __INCFMemoryStream_FWD_DEFINED__
typedef interface INCFMemoryStream INCFMemoryStream;

#endif 	/* __INCFMemoryStream_FWD_DEFINED__ */


#ifndef __INCFFile_FWD_DEFINED__
#define __INCFFile_FWD_DEFINED__
typedef interface INCFFile INCFFile;

#endif 	/* __INCFFile_FWD_DEFINED__ */


#ifndef __INCFDirectory_FWD_DEFINED__
#define __INCFDirectory_FWD_DEFINED__
typedef interface INCFDirectory INCFDirectory;

#endif 	/* __INCFDirectory_FWD_DEFINED__ */


#ifndef __INCFNetworkResource_FWD_DEFINED__
#define __INCFNetworkResource_FWD_DEFINED__
typedef interface INCFNetworkResource INCFNetworkResource;

#endif 	/* __INCFNetworkResource_FWD_DEFINED__ */


#ifndef __INCFNetwork_FWD_DEFINED__
#define __INCFNetwork_FWD_DEFINED__
typedef interface INCFNetwork INCFNetwork;

#endif 	/* __INCFNetwork_FWD_DEFINED__ */


#ifndef __INCFNetworkShare_FWD_DEFINED__
#define __INCFNetworkShare_FWD_DEFINED__
typedef interface INCFNetworkShare INCFNetworkShare;

#endif 	/* __INCFNetworkShare_FWD_DEFINED__ */


#ifndef __NCFFile_FWD_DEFINED__
#define __NCFFile_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFFile NCFFile;
#else
typedef struct NCFFile NCFFile;
#endif /* __cplusplus */

#endif 	/* __NCFFile_FWD_DEFINED__ */


#ifndef __NCFDirectory_FWD_DEFINED__
#define __NCFDirectory_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFDirectory NCFDirectory;
#else
typedef struct NCFDirectory NCFDirectory;
#endif /* __cplusplus */

#endif 	/* __NCFDirectory_FWD_DEFINED__ */


#ifndef __NCFFileStream_FWD_DEFINED__
#define __NCFFileStream_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFFileStream NCFFileStream;
#else
typedef struct NCFFileStream NCFFileStream;
#endif /* __cplusplus */

#endif 	/* __NCFFileStream_FWD_DEFINED__ */


#ifndef __NCFStringStream_FWD_DEFINED__
#define __NCFStringStream_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFStringStream NCFStringStream;
#else
typedef struct NCFStringStream NCFStringStream;
#endif /* __cplusplus */

#endif 	/* __NCFStringStream_FWD_DEFINED__ */


#ifndef __NCFMemoryStream_FWD_DEFINED__
#define __NCFMemoryStream_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFMemoryStream NCFMemoryStream;
#else
typedef struct NCFMemoryStream NCFMemoryStream;
#endif /* __cplusplus */

#endif 	/* __NCFMemoryStream_FWD_DEFINED__ */


#ifndef __NCFUrl_FWD_DEFINED__
#define __NCFUrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFUrl NCFUrl;
#else
typedef struct NCFUrl NCFUrl;
#endif /* __cplusplus */

#endif 	/* __NCFUrl_FWD_DEFINED__ */


#ifndef __NCFPath_FWD_DEFINED__
#define __NCFPath_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFPath NCFPath;
#else
typedef struct NCFPath NCFPath;
#endif /* __cplusplus */

#endif 	/* __NCFPath_FWD_DEFINED__ */


#ifndef __NCFNetwork_FWD_DEFINED__
#define __NCFNetwork_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFNetwork NCFNetwork;
#else
typedef struct NCFNetwork NCFNetwork;
#endif /* __cplusplus */

#endif 	/* __NCFNetwork_FWD_DEFINED__ */


#ifndef __NCFNetworkResource_FWD_DEFINED__
#define __NCFNetworkResource_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFNetworkResource NCFNetworkResource;
#else
typedef struct NCFNetworkResource NCFNetworkResource;
#endif /* __cplusplus */

#endif 	/* __NCFNetworkResource_FWD_DEFINED__ */


#ifndef __NCFNetworkShare_FWD_DEFINED__
#define __NCFNetworkShare_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFNetworkShare NCFNetworkShare;
#else
typedef struct NCFNetworkShare NCFNetworkShare;
#endif /* __cplusplus */

#endif 	/* __NCFNetworkShare_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __INCFCollectionList_INTERFACE_DEFINED__
#define __INCFCollectionList_INTERFACE_DEFINED__

/* interface INCFCollectionList */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFCollectionList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("493378E5-71C6-4ACA-ACB4-B28D2695BA33")
    INCFCollectionList : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddItemToBack( 
            /* [in] */ VARIANT vtItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddItemToFront( 
            /* [in] */ VARIANT vtItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveBackItem( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveFrontItem( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ long *plSize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItemByIndex( 
            /* [in] */ long lIndex,
            /* [retval][out] */ VARIANT *pvtItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetItemByIndex( 
            /* [in] */ long lIndex,
            /* [in] */ VARIANT vtItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveItemByIndex( 
            /* [in] */ long lIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveItemsByValue( 
            /* [in] */ VARIANT vtItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Empty( 
            /* [retval][out] */ VARIANT_BOOL *pvtbEmpty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertItemBefore( 
            /* [in] */ long lIndex,
            /* [in] */ VARIANT vtItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveItems( 
            /* [in] */ long lIndex1,
            /* [in] */ long lIndex2) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFCollectionListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFCollectionList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFCollectionList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFCollectionList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFCollectionList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFCollectionList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFCollectionList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFCollectionList * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddItemToBack )( 
            INCFCollectionList * This,
            /* [in] */ VARIANT vtItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddItemToFront )( 
            INCFCollectionList * This,
            /* [in] */ VARIANT vtItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveBackItem )( 
            INCFCollectionList * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveFrontItem )( 
            INCFCollectionList * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            INCFCollectionList * This,
            /* [retval][out] */ long *plSize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )( 
            INCFCollectionList * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ VARIANT *pvtItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetItemByIndex )( 
            INCFCollectionList * This,
            /* [in] */ long lIndex,
            /* [in] */ VARIANT vtItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveItemByIndex )( 
            INCFCollectionList * This,
            /* [in] */ long lIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveItemsByValue )( 
            INCFCollectionList * This,
            /* [in] */ VARIANT vtItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            INCFCollectionList * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Empty )( 
            INCFCollectionList * This,
            /* [retval][out] */ VARIANT_BOOL *pvtbEmpty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertItemBefore )( 
            INCFCollectionList * This,
            /* [in] */ long lIndex,
            /* [in] */ VARIANT vtItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveItems )( 
            INCFCollectionList * This,
            /* [in] */ long lIndex1,
            /* [in] */ long lIndex2);
        
        END_INTERFACE
    } INCFCollectionListVtbl;

    interface INCFCollectionList
    {
        CONST_VTBL struct INCFCollectionListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFCollectionList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFCollectionList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFCollectionList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFCollectionList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFCollectionList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFCollectionList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFCollectionList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFCollectionList_AddItemToBack(This,vtItem)	\
    ( (This)->lpVtbl -> AddItemToBack(This,vtItem) ) 

#define INCFCollectionList_AddItemToFront(This,vtItem)	\
    ( (This)->lpVtbl -> AddItemToFront(This,vtItem) ) 

#define INCFCollectionList_RemoveBackItem(This)	\
    ( (This)->lpVtbl -> RemoveBackItem(This) ) 

#define INCFCollectionList_RemoveFrontItem(This)	\
    ( (This)->lpVtbl -> RemoveFrontItem(This) ) 

#define INCFCollectionList_get_Size(This,plSize)	\
    ( (This)->lpVtbl -> get_Size(This,plSize) ) 

#define INCFCollectionList_GetItemByIndex(This,lIndex,pvtItem)	\
    ( (This)->lpVtbl -> GetItemByIndex(This,lIndex,pvtItem) ) 

#define INCFCollectionList_SetItemByIndex(This,lIndex,vtItem)	\
    ( (This)->lpVtbl -> SetItemByIndex(This,lIndex,vtItem) ) 

#define INCFCollectionList_RemoveItemByIndex(This,lIndex)	\
    ( (This)->lpVtbl -> RemoveItemByIndex(This,lIndex) ) 

#define INCFCollectionList_RemoveItemsByValue(This,vtItem)	\
    ( (This)->lpVtbl -> RemoveItemsByValue(This,vtItem) ) 

#define INCFCollectionList_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define INCFCollectionList_get_Empty(This,pvtbEmpty)	\
    ( (This)->lpVtbl -> get_Empty(This,pvtbEmpty) ) 

#define INCFCollectionList_InsertItemBefore(This,lIndex,vtItem)	\
    ( (This)->lpVtbl -> InsertItemBefore(This,lIndex,vtItem) ) 

#define INCFCollectionList_RemoveItems(This,lIndex1,lIndex2)	\
    ( (This)->lpVtbl -> RemoveItems(This,lIndex1,lIndex2) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFCollectionList_INTERFACE_DEFINED__ */


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


#ifndef __INCFPath_INTERFACE_DEFINED__
#define __INCFPath_INTERFACE_DEFINED__

/* interface INCFPath */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFPath;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A3713788-8456-4F2A-A32A-C066053F3D0E")
    INCFPath : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NormalizePath( 
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *new_path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NormalizeExtension( 
            /* [in] */ BSTR extension,
            /* [retval][out] */ BSTR *new_extension) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtractPath( 
            /* [in] */ BSTR full_path,
            /* [retval][out] */ BSTR *path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtractExtension( 
            /* [in] */ BSTR full_path,
            /* [retval][out] */ BSTR *extension) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtractFilename( 
            /* [in] */ BSTR full_path,
            /* [retval][out] */ BSTR *filename) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtractBaseFilename( 
            /* [in] */ BSTR full_path,
            /* [retval][out] */ BSTR *base_filename) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReplaceFilename( 
            /* [in] */ BSTR full_path,
            /* [in] */ BSTR new_file_name,
            /* [retval][out] */ BSTR *new_full_path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReplacePath( 
            /* [in] */ BSTR full_path,
            /* [in] */ BSTR new_path,
            /* [retval][out] */ BSTR *new_full_path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReplaceBaseFilename( 
            /* [in] */ BSTR full_path,
            /* [in] */ BSTR new_base_filename,
            /* [retval][out] */ BSTR *new_full_path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReplaceFileExtension( 
            /* [in] */ BSTR full_path,
            /* [in] */ BSTR new_file_extension,
            /* [retval][out] */ BSTR *new_full_path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReplaceVolume( 
            /* [in] */ BSTR full_path,
            /* [in] */ BSTR new_volume,
            /* [retval][out] */ BSTR *new_full_path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SplitFullPath( 
            /* [in] */ BSTR full_path,
            /* [out][in] */ BSTR *volume,
            /* [out][in] */ BSTR *path,
            /* [out][in] */ BSTR *base_filename,
            /* [retval][out] */ BSTR *file_extension) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtractVolume( 
            /* [in] */ BSTR full_path,
            /* [retval][out] */ BSTR *volume) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFPathVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFPath * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFPath * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFPath * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFPath * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFPath * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFPath * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFPath * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NormalizePath )( 
            INCFPath * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *new_path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NormalizeExtension )( 
            INCFPath * This,
            /* [in] */ BSTR extension,
            /* [retval][out] */ BSTR *new_extension);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtractPath )( 
            INCFPath * This,
            /* [in] */ BSTR full_path,
            /* [retval][out] */ BSTR *path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtractExtension )( 
            INCFPath * This,
            /* [in] */ BSTR full_path,
            /* [retval][out] */ BSTR *extension);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtractFilename )( 
            INCFPath * This,
            /* [in] */ BSTR full_path,
            /* [retval][out] */ BSTR *filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtractBaseFilename )( 
            INCFPath * This,
            /* [in] */ BSTR full_path,
            /* [retval][out] */ BSTR *base_filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReplaceFilename )( 
            INCFPath * This,
            /* [in] */ BSTR full_path,
            /* [in] */ BSTR new_file_name,
            /* [retval][out] */ BSTR *new_full_path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReplacePath )( 
            INCFPath * This,
            /* [in] */ BSTR full_path,
            /* [in] */ BSTR new_path,
            /* [retval][out] */ BSTR *new_full_path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReplaceBaseFilename )( 
            INCFPath * This,
            /* [in] */ BSTR full_path,
            /* [in] */ BSTR new_base_filename,
            /* [retval][out] */ BSTR *new_full_path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReplaceFileExtension )( 
            INCFPath * This,
            /* [in] */ BSTR full_path,
            /* [in] */ BSTR new_file_extension,
            /* [retval][out] */ BSTR *new_full_path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReplaceVolume )( 
            INCFPath * This,
            /* [in] */ BSTR full_path,
            /* [in] */ BSTR new_volume,
            /* [retval][out] */ BSTR *new_full_path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SplitFullPath )( 
            INCFPath * This,
            /* [in] */ BSTR full_path,
            /* [out][in] */ BSTR *volume,
            /* [out][in] */ BSTR *path,
            /* [out][in] */ BSTR *base_filename,
            /* [retval][out] */ BSTR *file_extension);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtractVolume )( 
            INCFPath * This,
            /* [in] */ BSTR full_path,
            /* [retval][out] */ BSTR *volume);
        
        END_INTERFACE
    } INCFPathVtbl;

    interface INCFPath
    {
        CONST_VTBL struct INCFPathVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFPath_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFPath_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFPath_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFPath_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFPath_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFPath_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFPath_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFPath_NormalizePath(This,path,new_path)	\
    ( (This)->lpVtbl -> NormalizePath(This,path,new_path) ) 

#define INCFPath_NormalizeExtension(This,extension,new_extension)	\
    ( (This)->lpVtbl -> NormalizeExtension(This,extension,new_extension) ) 

#define INCFPath_ExtractPath(This,full_path,path)	\
    ( (This)->lpVtbl -> ExtractPath(This,full_path,path) ) 

#define INCFPath_ExtractExtension(This,full_path,extension)	\
    ( (This)->lpVtbl -> ExtractExtension(This,full_path,extension) ) 

#define INCFPath_ExtractFilename(This,full_path,filename)	\
    ( (This)->lpVtbl -> ExtractFilename(This,full_path,filename) ) 

#define INCFPath_ExtractBaseFilename(This,full_path,base_filename)	\
    ( (This)->lpVtbl -> ExtractBaseFilename(This,full_path,base_filename) ) 

#define INCFPath_ReplaceFilename(This,full_path,new_file_name,new_full_path)	\
    ( (This)->lpVtbl -> ReplaceFilename(This,full_path,new_file_name,new_full_path) ) 

#define INCFPath_ReplacePath(This,full_path,new_path,new_full_path)	\
    ( (This)->lpVtbl -> ReplacePath(This,full_path,new_path,new_full_path) ) 

#define INCFPath_ReplaceBaseFilename(This,full_path,new_base_filename,new_full_path)	\
    ( (This)->lpVtbl -> ReplaceBaseFilename(This,full_path,new_base_filename,new_full_path) ) 

#define INCFPath_ReplaceFileExtension(This,full_path,new_file_extension,new_full_path)	\
    ( (This)->lpVtbl -> ReplaceFileExtension(This,full_path,new_file_extension,new_full_path) ) 

#define INCFPath_ReplaceVolume(This,full_path,new_volume,new_full_path)	\
    ( (This)->lpVtbl -> ReplaceVolume(This,full_path,new_volume,new_full_path) ) 

#define INCFPath_SplitFullPath(This,full_path,volume,path,base_filename,file_extension)	\
    ( (This)->lpVtbl -> SplitFullPath(This,full_path,volume,path,base_filename,file_extension) ) 

#define INCFPath_ExtractVolume(This,full_path,volume)	\
    ( (This)->lpVtbl -> ExtractVolume(This,full_path,volume) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFPath_INTERFACE_DEFINED__ */


#ifndef __INCFUrl_INTERFACE_DEFINED__
#define __INCFUrl_INTERFACE_DEFINED__

/* interface INCFUrl */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFUrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6F8876A9-CED1-4AD3-A3DE-5ACF1036EA85")
    INCFUrl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtractProtocol( 
            /* [in] */ BSTR url,
            /* [retval][out] */ BSTR *protocol) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtractDomain( 
            /* [in] */ BSTR url,
            /* [retval][out] */ BSTR *domain) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtractPort( 
            /* [in] */ BSTR url,
            /* [retval][out] */ BSTR *port) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtractPath( 
            /* [in] */ BSTR url,
            /* [retval][out] */ BSTR *path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtractFilename( 
            /* [in] */ BSTR url,
            /* [retval][out] */ BSTR *filename) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SplitURL( 
            /* [in] */ BSTR url,
            /* [out][in] */ BSTR *protocol,
            /* [out][in] */ BSTR *domain,
            /* [out][in] */ BSTR *port,
            /* [out][in] */ BSTR *path,
            /* [retval][out] */ BSTR *filename) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Encode( 
            /* [in] */ BSTR url,
            /* [retval][out] */ BSTR *urlEncoded) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Decode( 
            /* [in] */ BSTR url,
            /* [retval][out] */ BSTR *urlDecoded) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFUrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFUrl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFUrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFUrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFUrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFUrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFUrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFUrl * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtractProtocol )( 
            INCFUrl * This,
            /* [in] */ BSTR url,
            /* [retval][out] */ BSTR *protocol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtractDomain )( 
            INCFUrl * This,
            /* [in] */ BSTR url,
            /* [retval][out] */ BSTR *domain);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtractPort )( 
            INCFUrl * This,
            /* [in] */ BSTR url,
            /* [retval][out] */ BSTR *port);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtractPath )( 
            INCFUrl * This,
            /* [in] */ BSTR url,
            /* [retval][out] */ BSTR *path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtractFilename )( 
            INCFUrl * This,
            /* [in] */ BSTR url,
            /* [retval][out] */ BSTR *filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SplitURL )( 
            INCFUrl * This,
            /* [in] */ BSTR url,
            /* [out][in] */ BSTR *protocol,
            /* [out][in] */ BSTR *domain,
            /* [out][in] */ BSTR *port,
            /* [out][in] */ BSTR *path,
            /* [retval][out] */ BSTR *filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            INCFUrl * This,
            /* [in] */ BSTR url,
            /* [retval][out] */ BSTR *urlEncoded);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Decode )( 
            INCFUrl * This,
            /* [in] */ BSTR url,
            /* [retval][out] */ BSTR *urlDecoded);
        
        END_INTERFACE
    } INCFUrlVtbl;

    interface INCFUrl
    {
        CONST_VTBL struct INCFUrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFUrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFUrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFUrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFUrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFUrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFUrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFUrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFUrl_ExtractProtocol(This,url,protocol)	\
    ( (This)->lpVtbl -> ExtractProtocol(This,url,protocol) ) 

#define INCFUrl_ExtractDomain(This,url,domain)	\
    ( (This)->lpVtbl -> ExtractDomain(This,url,domain) ) 

#define INCFUrl_ExtractPort(This,url,port)	\
    ( (This)->lpVtbl -> ExtractPort(This,url,port) ) 

#define INCFUrl_ExtractPath(This,url,path)	\
    ( (This)->lpVtbl -> ExtractPath(This,url,path) ) 

#define INCFUrl_ExtractFilename(This,url,filename)	\
    ( (This)->lpVtbl -> ExtractFilename(This,url,filename) ) 

#define INCFUrl_SplitURL(This,url,protocol,domain,port,path,filename)	\
    ( (This)->lpVtbl -> SplitURL(This,url,protocol,domain,port,path,filename) ) 

#define INCFUrl_Encode(This,url,urlEncoded)	\
    ( (This)->lpVtbl -> Encode(This,url,urlEncoded) ) 

#define INCFUrl_Decode(This,url,urlDecoded)	\
    ( (This)->lpVtbl -> Decode(This,url,urlDecoded) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFUrl_INTERFACE_DEFINED__ */


#ifndef __INCFStringStream_INTERFACE_DEFINED__
#define __INCFStringStream_INTERFACE_DEFINED__

/* interface INCFStringStream */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFStringStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("364A7EE0-8A6A-47E5-89E9-9979A4E50FC6")
    INCFStringStream : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteLine( 
            /* [in] */ BSTR text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteString( 
            /* [in] */ BSTR text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadLine( 
            /* [in] */ BSTR *pText) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadAllLines( 
            /* [retval][out] */ INCFCollectionList **pINCFCollectionList) = 0;
        
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

    typedef struct INCFStringStreamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFStringStream * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFStringStream * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFStringStream * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFStringStream * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFStringStream * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFStringStream * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFStringStream * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteLine )( 
            INCFStringStream * This,
            /* [in] */ BSTR text);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteString )( 
            INCFStringStream * This,
            /* [in] */ BSTR text);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadLine )( 
            INCFStringStream * This,
            /* [in] */ BSTR *pText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadAllLines )( 
            INCFStringStream * This,
            /* [retval][out] */ INCFCollectionList **pINCFCollectionList);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentReadPosition )( 
            INCFStringStream * This,
            /* [in] */ long position);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentReadPosition )( 
            INCFStringStream * This,
            /* [retval][out] */ long *position);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentWritePosition )( 
            INCFStringStream * This,
            /* [in] */ long position);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentWritePosition )( 
            INCFStringStream * This,
            /* [retval][out] */ long *position);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            INCFStringStream * This);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            INCFStringStream * This,
            /* [retval][out] */ long *length);
        
        END_INTERFACE
    } INCFStringStreamVtbl;

    interface INCFStringStream
    {
        CONST_VTBL struct INCFStringStreamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFStringStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFStringStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFStringStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFStringStream_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFStringStream_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFStringStream_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFStringStream_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFStringStream_WriteLine(This,text)	\
    ( (This)->lpVtbl -> WriteLine(This,text) ) 

#define INCFStringStream_WriteString(This,text)	\
    ( (This)->lpVtbl -> WriteString(This,text) ) 

#define INCFStringStream_ReadLine(This,pText)	\
    ( (This)->lpVtbl -> ReadLine(This,pText) ) 

#define INCFStringStream_ReadAllLines(This,pINCFCollectionList)	\
    ( (This)->lpVtbl -> ReadAllLines(This,pINCFCollectionList) ) 

#define INCFStringStream_put_CurrentReadPosition(This,position)	\
    ( (This)->lpVtbl -> put_CurrentReadPosition(This,position) ) 

#define INCFStringStream_get_CurrentReadPosition(This,position)	\
    ( (This)->lpVtbl -> get_CurrentReadPosition(This,position) ) 

#define INCFStringStream_put_CurrentWritePosition(This,position)	\
    ( (This)->lpVtbl -> put_CurrentWritePosition(This,position) ) 

#define INCFStringStream_get_CurrentWritePosition(This,position)	\
    ( (This)->lpVtbl -> get_CurrentWritePosition(This,position) ) 

#define INCFStringStream_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define INCFStringStream_get_Length(This,length)	\
    ( (This)->lpVtbl -> get_Length(This,length) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFStringStream_INTERFACE_DEFINED__ */


#ifndef __INCFFileStream_INTERFACE_DEFINED__
#define __INCFFileStream_INTERFACE_DEFINED__

/* interface INCFFileStream */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFFileStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5968D6DD-023F-4E7F-A001-1242A7AD8610")
    INCFFileStream : public INCFStream
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct INCFFileStreamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFFileStream * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFFileStream * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFFileStream * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFFileStream * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFFileStream * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFFileStream * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFFileStream * This,
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
            INCFFileStream * This,
            /* [in] */ BYTE *pData,
            /* [in] */ long length);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteFromStream )( 
            INCFFileStream * This,
            /* [in] */ INCFStream *pINCFStream,
            /* [in] */ long length);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadTo )( 
            INCFFileStream * This,
            /* [in] */ BYTE *pData,
            /* [in] */ long length);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadToStream )( 
            INCFFileStream * This,
            /* [in] */ INCFStream *pINCFStream,
            /* [in] */ long length);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentReadPosition )( 
            INCFFileStream * This,
            /* [in] */ long position);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentReadPosition )( 
            INCFFileStream * This,
            /* [retval][out] */ long *position);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentWritePosition )( 
            INCFFileStream * This,
            /* [in] */ long position);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentWritePosition )( 
            INCFFileStream * This,
            /* [retval][out] */ long *position);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            INCFFileStream * This);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            INCFFileStream * This,
            /* [retval][out] */ long *length);
        
        END_INTERFACE
    } INCFFileStreamVtbl;

    interface INCFFileStream
    {
        CONST_VTBL struct INCFFileStreamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFFileStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFFileStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFFileStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFFileStream_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFFileStream_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFFileStream_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFFileStream_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFFileStream_WriteFrom(This,pData,length)	\
    ( (This)->lpVtbl -> WriteFrom(This,pData,length) ) 

#define INCFFileStream_WriteFromStream(This,pINCFStream,length)	\
    ( (This)->lpVtbl -> WriteFromStream(This,pINCFStream,length) ) 

#define INCFFileStream_ReadTo(This,pData,length)	\
    ( (This)->lpVtbl -> ReadTo(This,pData,length) ) 

#define INCFFileStream_ReadToStream(This,pINCFStream,length)	\
    ( (This)->lpVtbl -> ReadToStream(This,pINCFStream,length) ) 

#define INCFFileStream_put_CurrentReadPosition(This,position)	\
    ( (This)->lpVtbl -> put_CurrentReadPosition(This,position) ) 

#define INCFFileStream_get_CurrentReadPosition(This,position)	\
    ( (This)->lpVtbl -> get_CurrentReadPosition(This,position) ) 

#define INCFFileStream_put_CurrentWritePosition(This,position)	\
    ( (This)->lpVtbl -> put_CurrentWritePosition(This,position) ) 

#define INCFFileStream_get_CurrentWritePosition(This,position)	\
    ( (This)->lpVtbl -> get_CurrentWritePosition(This,position) ) 

#define INCFFileStream_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define INCFFileStream_get_Length(This,length)	\
    ( (This)->lpVtbl -> get_Length(This,length) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFFileStream_INTERFACE_DEFINED__ */


#ifndef __INCFMemoryStream_INTERFACE_DEFINED__
#define __INCFMemoryStream_INTERFACE_DEFINED__

/* interface INCFMemoryStream */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFMemoryStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9545C638-EDE8-499F-AE37-ECF231C9E111")
    INCFMemoryStream : public INCFStream
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct INCFMemoryStreamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFMemoryStream * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFMemoryStream * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFMemoryStream * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFMemoryStream * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFMemoryStream * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFMemoryStream * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFMemoryStream * This,
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
            INCFMemoryStream * This,
            /* [in] */ BYTE *pData,
            /* [in] */ long length);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteFromStream )( 
            INCFMemoryStream * This,
            /* [in] */ INCFStream *pINCFStream,
            /* [in] */ long length);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadTo )( 
            INCFMemoryStream * This,
            /* [in] */ BYTE *pData,
            /* [in] */ long length);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadToStream )( 
            INCFMemoryStream * This,
            /* [in] */ INCFStream *pINCFStream,
            /* [in] */ long length);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentReadPosition )( 
            INCFMemoryStream * This,
            /* [in] */ long position);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentReadPosition )( 
            INCFMemoryStream * This,
            /* [retval][out] */ long *position);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentWritePosition )( 
            INCFMemoryStream * This,
            /* [in] */ long position);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentWritePosition )( 
            INCFMemoryStream * This,
            /* [retval][out] */ long *position);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            INCFMemoryStream * This);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            INCFMemoryStream * This,
            /* [retval][out] */ long *length);
        
        END_INTERFACE
    } INCFMemoryStreamVtbl;

    interface INCFMemoryStream
    {
        CONST_VTBL struct INCFMemoryStreamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFMemoryStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFMemoryStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFMemoryStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFMemoryStream_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFMemoryStream_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFMemoryStream_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFMemoryStream_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFMemoryStream_WriteFrom(This,pData,length)	\
    ( (This)->lpVtbl -> WriteFrom(This,pData,length) ) 

#define INCFMemoryStream_WriteFromStream(This,pINCFStream,length)	\
    ( (This)->lpVtbl -> WriteFromStream(This,pINCFStream,length) ) 

#define INCFMemoryStream_ReadTo(This,pData,length)	\
    ( (This)->lpVtbl -> ReadTo(This,pData,length) ) 

#define INCFMemoryStream_ReadToStream(This,pINCFStream,length)	\
    ( (This)->lpVtbl -> ReadToStream(This,pINCFStream,length) ) 

#define INCFMemoryStream_put_CurrentReadPosition(This,position)	\
    ( (This)->lpVtbl -> put_CurrentReadPosition(This,position) ) 

#define INCFMemoryStream_get_CurrentReadPosition(This,position)	\
    ( (This)->lpVtbl -> get_CurrentReadPosition(This,position) ) 

#define INCFMemoryStream_put_CurrentWritePosition(This,position)	\
    ( (This)->lpVtbl -> put_CurrentWritePosition(This,position) ) 

#define INCFMemoryStream_get_CurrentWritePosition(This,position)	\
    ( (This)->lpVtbl -> get_CurrentWritePosition(This,position) ) 

#define INCFMemoryStream_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define INCFMemoryStream_get_Length(This,length)	\
    ( (This)->lpVtbl -> get_Length(This,length) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFMemoryStream_INTERFACE_DEFINED__ */


#ifndef __INCFFile_INTERFACE_DEFINED__
#define __INCFFile_INTERFACE_DEFINED__

/* interface INCFFile */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1B5CE1F3-D493-4715-937D-D682E1040A43")
    INCFFile : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateOrOpen( 
            /* [in] */ BSTR filename,
            /* [retval][out] */ INCFFileStream **ppINCFFileStream) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateOrOpenText( 
            /* [in] */ BSTR filename,
            /* [retval][out] */ INCFStringStream **ppINCFStringStream) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateNew( 
            /* [in] */ BSTR filename,
            /* [retval][out] */ INCFFileStream **ppINCFFileStream) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateNewText( 
            /* [in] */ BSTR filename,
            /* [retval][out] */ INCFStringStream **ppINCFStringStream) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Exists( 
            /* [in] */ BSTR filename,
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ BSTR filename) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateFiles( 
            /* [in] */ BSTR directory,
            /* [in] */ BSTR pattern,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTempFilename( 
            /* [in] */ BSTR extension,
            /* [retval][out] */ BSTR *filename) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFFile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFFile * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFFile * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFFile * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFFile * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateOrOpen )( 
            INCFFile * This,
            /* [in] */ BSTR filename,
            /* [retval][out] */ INCFFileStream **ppINCFFileStream);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateOrOpenText )( 
            INCFFile * This,
            /* [in] */ BSTR filename,
            /* [retval][out] */ INCFStringStream **ppINCFStringStream);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateNew )( 
            INCFFile * This,
            /* [in] */ BSTR filename,
            /* [retval][out] */ INCFFileStream **ppINCFFileStream);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateNewText )( 
            INCFFile * This,
            /* [in] */ BSTR filename,
            /* [retval][out] */ INCFStringStream **ppINCFStringStream);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Exists )( 
            INCFFile * This,
            /* [in] */ BSTR filename,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            INCFFile * This,
            /* [in] */ BSTR filename);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateFiles )( 
            INCFFile * This,
            /* [in] */ BSTR directory,
            /* [in] */ BSTR pattern,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTempFilename )( 
            INCFFile * This,
            /* [in] */ BSTR extension,
            /* [retval][out] */ BSTR *filename);
        
        END_INTERFACE
    } INCFFileVtbl;

    interface INCFFile
    {
        CONST_VTBL struct INCFFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFFile_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFFile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFFile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFFile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFFile_CreateOrOpen(This,filename,ppINCFFileStream)	\
    ( (This)->lpVtbl -> CreateOrOpen(This,filename,ppINCFFileStream) ) 

#define INCFFile_CreateOrOpenText(This,filename,ppINCFStringStream)	\
    ( (This)->lpVtbl -> CreateOrOpenText(This,filename,ppINCFStringStream) ) 

#define INCFFile_CreateNew(This,filename,ppINCFFileStream)	\
    ( (This)->lpVtbl -> CreateNew(This,filename,ppINCFFileStream) ) 

#define INCFFile_CreateNewText(This,filename,ppINCFStringStream)	\
    ( (This)->lpVtbl -> CreateNewText(This,filename,ppINCFStringStream) ) 

#define INCFFile_Exists(This,filename,status)	\
    ( (This)->lpVtbl -> Exists(This,filename,status) ) 

#define INCFFile_Delete(This,filename)	\
    ( (This)->lpVtbl -> Delete(This,filename) ) 

#define INCFFile_EnumerateFiles(This,directory,pattern,ppINCFCollectionList)	\
    ( (This)->lpVtbl -> EnumerateFiles(This,directory,pattern,ppINCFCollectionList) ) 

#define INCFFile_GetTempFilename(This,extension,filename)	\
    ( (This)->lpVtbl -> GetTempFilename(This,extension,filename) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFFile_INTERFACE_DEFINED__ */


#ifndef __INCFDirectory_INTERFACE_DEFINED__
#define __INCFDirectory_INTERFACE_DEFINED__

/* interface INCFDirectory */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFDirectory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F9E1A9EF-FFB4-4AE7-85A2-A9E1689683A1")
    INCFDirectory : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ BSTR directory) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ BSTR directory) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Exists( 
            /* [in] */ BSTR directory,
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateDirectories( 
            /* [in] */ BSTR directory,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTempDirectory( 
            /* [retval][out] */ BSTR *directory) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProgramDataDirectory( 
            /* [retval][out] */ BSTR *directory) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFDirectoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFDirectory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFDirectory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFDirectory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFDirectory * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFDirectory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFDirectory * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFDirectory * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            INCFDirectory * This,
            /* [in] */ BSTR directory);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            INCFDirectory * This,
            /* [in] */ BSTR directory);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Exists )( 
            INCFDirectory * This,
            /* [in] */ BSTR directory,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateDirectories )( 
            INCFDirectory * This,
            /* [in] */ BSTR directory,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTempDirectory )( 
            INCFDirectory * This,
            /* [retval][out] */ BSTR *directory);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProgramDataDirectory )( 
            INCFDirectory * This,
            /* [retval][out] */ BSTR *directory);
        
        END_INTERFACE
    } INCFDirectoryVtbl;

    interface INCFDirectory
    {
        CONST_VTBL struct INCFDirectoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFDirectory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFDirectory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFDirectory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFDirectory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFDirectory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFDirectory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFDirectory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFDirectory_Create(This,directory)	\
    ( (This)->lpVtbl -> Create(This,directory) ) 

#define INCFDirectory_Delete(This,directory)	\
    ( (This)->lpVtbl -> Delete(This,directory) ) 

#define INCFDirectory_Exists(This,directory,status)	\
    ( (This)->lpVtbl -> Exists(This,directory,status) ) 

#define INCFDirectory_EnumerateDirectories(This,directory,ppINCFCollectionList)	\
    ( (This)->lpVtbl -> EnumerateDirectories(This,directory,ppINCFCollectionList) ) 

#define INCFDirectory_GetTempDirectory(This,directory)	\
    ( (This)->lpVtbl -> GetTempDirectory(This,directory) ) 

#define INCFDirectory_GetProgramDataDirectory(This,directory)	\
    ( (This)->lpVtbl -> GetProgramDataDirectory(This,directory) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFDirectory_INTERFACE_DEFINED__ */


#ifndef __INCFNetworkResource_INTERFACE_DEFINED__
#define __INCFNetworkResource_INTERFACE_DEFINED__

/* interface INCFNetworkResource */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFNetworkResource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("075034B4-2DEC-47C3-BEC2-EDFC45F61950")
    INCFNetworkResource : public IDispatch
    {
    public:
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Scope( 
            /* [in] */ long scope) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Scope( 
            /* [retval][out] */ long *scope) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ long type) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ long *type) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_DisplayType( 
            /* [in] */ long displayType) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_DisplayType( 
            /* [retval][out] */ long *displayType) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Usage( 
            /* [in] */ long usage) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Usage( 
            /* [retval][out] */ long *usage) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_LocalName( 
            /* [in] */ BSTR localName) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_LocalName( 
            /* [retval][out] */ BSTR *localName) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_RemoteName( 
            /* [in] */ BSTR remoteName) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_RemoteName( 
            /* [retval][out] */ BSTR *remoteName) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Comment( 
            /* [in] */ BSTR comment) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Comment( 
            /* [retval][out] */ BSTR *comment) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Provider( 
            /* [in] */ BSTR provider) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Provider( 
            /* [retval][out] */ BSTR *provider) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFNetworkResourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFNetworkResource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFNetworkResource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFNetworkResource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFNetworkResource * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFNetworkResource * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFNetworkResource * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFNetworkResource * This,
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
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Scope )( 
            INCFNetworkResource * This,
            /* [in] */ long scope);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Scope )( 
            INCFNetworkResource * This,
            /* [retval][out] */ long *scope);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            INCFNetworkResource * This,
            /* [in] */ long type);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            INCFNetworkResource * This,
            /* [retval][out] */ long *type);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayType )( 
            INCFNetworkResource * This,
            /* [in] */ long displayType);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayType )( 
            INCFNetworkResource * This,
            /* [retval][out] */ long *displayType);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Usage )( 
            INCFNetworkResource * This,
            /* [in] */ long usage);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Usage )( 
            INCFNetworkResource * This,
            /* [retval][out] */ long *usage);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_LocalName )( 
            INCFNetworkResource * This,
            /* [in] */ BSTR localName);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_LocalName )( 
            INCFNetworkResource * This,
            /* [retval][out] */ BSTR *localName);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_RemoteName )( 
            INCFNetworkResource * This,
            /* [in] */ BSTR remoteName);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteName )( 
            INCFNetworkResource * This,
            /* [retval][out] */ BSTR *remoteName);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Comment )( 
            INCFNetworkResource * This,
            /* [in] */ BSTR comment);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Comment )( 
            INCFNetworkResource * This,
            /* [retval][out] */ BSTR *comment);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Provider )( 
            INCFNetworkResource * This,
            /* [in] */ BSTR provider);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Provider )( 
            INCFNetworkResource * This,
            /* [retval][out] */ BSTR *provider);
        
        END_INTERFACE
    } INCFNetworkResourceVtbl;

    interface INCFNetworkResource
    {
        CONST_VTBL struct INCFNetworkResourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFNetworkResource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFNetworkResource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFNetworkResource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFNetworkResource_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFNetworkResource_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFNetworkResource_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFNetworkResource_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFNetworkResource_put_Scope(This,scope)	\
    ( (This)->lpVtbl -> put_Scope(This,scope) ) 

#define INCFNetworkResource_get_Scope(This,scope)	\
    ( (This)->lpVtbl -> get_Scope(This,scope) ) 

#define INCFNetworkResource_put_Type(This,type)	\
    ( (This)->lpVtbl -> put_Type(This,type) ) 

#define INCFNetworkResource_get_Type(This,type)	\
    ( (This)->lpVtbl -> get_Type(This,type) ) 

#define INCFNetworkResource_put_DisplayType(This,displayType)	\
    ( (This)->lpVtbl -> put_DisplayType(This,displayType) ) 

#define INCFNetworkResource_get_DisplayType(This,displayType)	\
    ( (This)->lpVtbl -> get_DisplayType(This,displayType) ) 

#define INCFNetworkResource_put_Usage(This,usage)	\
    ( (This)->lpVtbl -> put_Usage(This,usage) ) 

#define INCFNetworkResource_get_Usage(This,usage)	\
    ( (This)->lpVtbl -> get_Usage(This,usage) ) 

#define INCFNetworkResource_put_LocalName(This,localName)	\
    ( (This)->lpVtbl -> put_LocalName(This,localName) ) 

#define INCFNetworkResource_get_LocalName(This,localName)	\
    ( (This)->lpVtbl -> get_LocalName(This,localName) ) 

#define INCFNetworkResource_put_RemoteName(This,remoteName)	\
    ( (This)->lpVtbl -> put_RemoteName(This,remoteName) ) 

#define INCFNetworkResource_get_RemoteName(This,remoteName)	\
    ( (This)->lpVtbl -> get_RemoteName(This,remoteName) ) 

#define INCFNetworkResource_put_Comment(This,comment)	\
    ( (This)->lpVtbl -> put_Comment(This,comment) ) 

#define INCFNetworkResource_get_Comment(This,comment)	\
    ( (This)->lpVtbl -> get_Comment(This,comment) ) 

#define INCFNetworkResource_put_Provider(This,provider)	\
    ( (This)->lpVtbl -> put_Provider(This,provider) ) 

#define INCFNetworkResource_get_Provider(This,provider)	\
    ( (This)->lpVtbl -> get_Provider(This,provider) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFNetworkResource_INTERFACE_DEFINED__ */


#ifndef __INCFNetwork_INTERFACE_DEFINED__
#define __INCFNetwork_INTERFACE_DEFINED__

/* interface INCFNetwork */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFNetwork;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5181F2B6-7417-482A-A907-C5465133B2C7")
    INCFNetwork : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConnectUNC( 
            /* [in] */ BSTR remoteName,
            /* [in] */ BSTR username,
            /* [in] */ BSTR password,
            /* [in] */ VARIANT_BOOL rememberOnLogin,
            /* [retval][out] */ VARIANT_BOOL *status) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateAllNetworkResources( 
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateNetworkResources( 
            /* [in] */ INCFNetworkResource *pINCFNetworkResource,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateNetworkShares( 
            /* [in] */ BSTR remoteName,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFNetworkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFNetwork * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFNetwork * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFNetwork * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFNetwork * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFNetwork * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFNetwork * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFNetwork * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ConnectUNC )( 
            INCFNetwork * This,
            /* [in] */ BSTR remoteName,
            /* [in] */ BSTR username,
            /* [in] */ BSTR password,
            /* [in] */ VARIANT_BOOL rememberOnLogin,
            /* [retval][out] */ VARIANT_BOOL *status);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateAllNetworkResources )( 
            INCFNetwork * This,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateNetworkResources )( 
            INCFNetwork * This,
            /* [in] */ INCFNetworkResource *pINCFNetworkResource,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateNetworkShares )( 
            INCFNetwork * This,
            /* [in] */ BSTR remoteName,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList);
        
        END_INTERFACE
    } INCFNetworkVtbl;

    interface INCFNetwork
    {
        CONST_VTBL struct INCFNetworkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFNetwork_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFNetwork_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFNetwork_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFNetwork_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFNetwork_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFNetwork_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFNetwork_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFNetwork_ConnectUNC(This,remoteName,username,password,rememberOnLogin,status)	\
    ( (This)->lpVtbl -> ConnectUNC(This,remoteName,username,password,rememberOnLogin,status) ) 

#define INCFNetwork_EnumerateAllNetworkResources(This,ppINCFCollectionList)	\
    ( (This)->lpVtbl -> EnumerateAllNetworkResources(This,ppINCFCollectionList) ) 

#define INCFNetwork_EnumerateNetworkResources(This,pINCFNetworkResource,ppINCFCollectionList)	\
    ( (This)->lpVtbl -> EnumerateNetworkResources(This,pINCFNetworkResource,ppINCFCollectionList) ) 

#define INCFNetwork_EnumerateNetworkShares(This,remoteName,ppINCFCollectionList)	\
    ( (This)->lpVtbl -> EnumerateNetworkShares(This,remoteName,ppINCFCollectionList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFNetwork_INTERFACE_DEFINED__ */


#ifndef __INCFNetworkShare_INTERFACE_DEFINED__
#define __INCFNetworkShare_INTERFACE_DEFINED__

/* interface INCFNetworkShare */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFNetworkShare;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AFFFF835-169A-434B-AD2E-65AB75B01D0C")
    INCFNetworkShare : public IDispatch
    {
    public:
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_NetName( 
            /* [in] */ BSTR netName) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_NetName( 
            /* [retval][out] */ BSTR *netName) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ DWORD type) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ DWORD *type) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Remark( 
            /* [in] */ BSTR remark) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Remark( 
            /* [retval][out] */ BSTR *remark) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Permissions( 
            /* [in] */ DWORD permissions) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Permissions( 
            /* [retval][out] */ DWORD *permissions) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_MaxUses( 
            /* [in] */ DWORD maxUses) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_MaxUses( 
            /* [retval][out] */ DWORD *maxUses) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_CurrentUses( 
            /* [in] */ DWORD currentUses) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_CurrentUses( 
            /* [retval][out] */ DWORD *currentUses) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Path( 
            /* [in] */ BSTR path) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *path) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Password( 
            /* [in] */ BSTR password) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ BSTR *password) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFNetworkShareVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFNetworkShare * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFNetworkShare * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFNetworkShare * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFNetworkShare * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFNetworkShare * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFNetworkShare * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFNetworkShare * This,
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
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_NetName )( 
            INCFNetworkShare * This,
            /* [in] */ BSTR netName);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_NetName )( 
            INCFNetworkShare * This,
            /* [retval][out] */ BSTR *netName);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            INCFNetworkShare * This,
            /* [in] */ DWORD type);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            INCFNetworkShare * This,
            /* [retval][out] */ DWORD *type);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Remark )( 
            INCFNetworkShare * This,
            /* [in] */ BSTR remark);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Remark )( 
            INCFNetworkShare * This,
            /* [retval][out] */ BSTR *remark);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Permissions )( 
            INCFNetworkShare * This,
            /* [in] */ DWORD permissions);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Permissions )( 
            INCFNetworkShare * This,
            /* [retval][out] */ DWORD *permissions);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxUses )( 
            INCFNetworkShare * This,
            /* [in] */ DWORD maxUses);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxUses )( 
            INCFNetworkShare * This,
            /* [retval][out] */ DWORD *maxUses);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentUses )( 
            INCFNetworkShare * This,
            /* [in] */ DWORD currentUses);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentUses )( 
            INCFNetworkShare * This,
            /* [retval][out] */ DWORD *currentUses);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Path )( 
            INCFNetworkShare * This,
            /* [in] */ BSTR path);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            INCFNetworkShare * This,
            /* [retval][out] */ BSTR *path);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Password )( 
            INCFNetworkShare * This,
            /* [in] */ BSTR password);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            INCFNetworkShare * This,
            /* [retval][out] */ BSTR *password);
        
        END_INTERFACE
    } INCFNetworkShareVtbl;

    interface INCFNetworkShare
    {
        CONST_VTBL struct INCFNetworkShareVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFNetworkShare_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFNetworkShare_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFNetworkShare_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFNetworkShare_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFNetworkShare_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFNetworkShare_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFNetworkShare_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFNetworkShare_put_NetName(This,netName)	\
    ( (This)->lpVtbl -> put_NetName(This,netName) ) 

#define INCFNetworkShare_get_NetName(This,netName)	\
    ( (This)->lpVtbl -> get_NetName(This,netName) ) 

#define INCFNetworkShare_put_Type(This,type)	\
    ( (This)->lpVtbl -> put_Type(This,type) ) 

#define INCFNetworkShare_get_Type(This,type)	\
    ( (This)->lpVtbl -> get_Type(This,type) ) 

#define INCFNetworkShare_put_Remark(This,remark)	\
    ( (This)->lpVtbl -> put_Remark(This,remark) ) 

#define INCFNetworkShare_get_Remark(This,remark)	\
    ( (This)->lpVtbl -> get_Remark(This,remark) ) 

#define INCFNetworkShare_put_Permissions(This,permissions)	\
    ( (This)->lpVtbl -> put_Permissions(This,permissions) ) 

#define INCFNetworkShare_get_Permissions(This,permissions)	\
    ( (This)->lpVtbl -> get_Permissions(This,permissions) ) 

#define INCFNetworkShare_put_MaxUses(This,maxUses)	\
    ( (This)->lpVtbl -> put_MaxUses(This,maxUses) ) 

#define INCFNetworkShare_get_MaxUses(This,maxUses)	\
    ( (This)->lpVtbl -> get_MaxUses(This,maxUses) ) 

#define INCFNetworkShare_put_CurrentUses(This,currentUses)	\
    ( (This)->lpVtbl -> put_CurrentUses(This,currentUses) ) 

#define INCFNetworkShare_get_CurrentUses(This,currentUses)	\
    ( (This)->lpVtbl -> get_CurrentUses(This,currentUses) ) 

#define INCFNetworkShare_put_Path(This,path)	\
    ( (This)->lpVtbl -> put_Path(This,path) ) 

#define INCFNetworkShare_get_Path(This,path)	\
    ( (This)->lpVtbl -> get_Path(This,path) ) 

#define INCFNetworkShare_put_Password(This,password)	\
    ( (This)->lpVtbl -> put_Password(This,password) ) 

#define INCFNetworkShare_get_Password(This,password)	\
    ( (This)->lpVtbl -> get_Password(This,password) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFNetworkShare_INTERFACE_DEFINED__ */



#ifndef __ItSoftwareNCFIOLib_LIBRARY_DEFINED__
#define __ItSoftwareNCFIOLib_LIBRARY_DEFINED__

/* library ItSoftwareNCFIOLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ItSoftwareNCFIOLib;

EXTERN_C const CLSID CLSID_NCFFile;

#ifdef __cplusplus

class DECLSPEC_UUID("C2BC2F82-ABD5-4CC6-95F4-2742E5DB641E")
NCFFile;
#endif

EXTERN_C const CLSID CLSID_NCFDirectory;

#ifdef __cplusplus

class DECLSPEC_UUID("53DB178E-06A6-477A-A91A-C1CEF8185F43")
NCFDirectory;
#endif

EXTERN_C const CLSID CLSID_NCFFileStream;

#ifdef __cplusplus

class DECLSPEC_UUID("72894C33-C2E7-4F08-98FF-D348741C3E8D")
NCFFileStream;
#endif

EXTERN_C const CLSID CLSID_NCFStringStream;

#ifdef __cplusplus

class DECLSPEC_UUID("616646F6-FC54-4A7B-9639-227F1D9740BE")
NCFStringStream;
#endif

EXTERN_C const CLSID CLSID_NCFMemoryStream;

#ifdef __cplusplus

class DECLSPEC_UUID("9D9DCBCB-F2ED-4648-A953-B54E5FBA3CFE")
NCFMemoryStream;
#endif

EXTERN_C const CLSID CLSID_NCFUrl;

#ifdef __cplusplus

class DECLSPEC_UUID("65DE533B-16D7-4DD5-B58E-F1887105EB4F")
NCFUrl;
#endif

EXTERN_C const CLSID CLSID_NCFPath;

#ifdef __cplusplus

class DECLSPEC_UUID("A5A4D7E8-6C84-49F8-BFA5-637CD76528BC")
NCFPath;
#endif

EXTERN_C const CLSID CLSID_NCFNetwork;

#ifdef __cplusplus

class DECLSPEC_UUID("40999C16-B1BB-446D-866C-189D1BC64F04")
NCFNetwork;
#endif

EXTERN_C const CLSID CLSID_NCFNetworkResource;

#ifdef __cplusplus

class DECLSPEC_UUID("19007660-76CE-457B-B5B3-517BCFB44840")
NCFNetworkResource;
#endif

EXTERN_C const CLSID CLSID_NCFNetworkShare;

#ifdef __cplusplus

class DECLSPEC_UUID("F47C2C85-3CA9-4DC1-8A28-2A5C832C2873")
NCFNetworkShare;
#endif
#endif /* __ItSoftwareNCFIOLib_LIBRARY_DEFINED__ */

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


