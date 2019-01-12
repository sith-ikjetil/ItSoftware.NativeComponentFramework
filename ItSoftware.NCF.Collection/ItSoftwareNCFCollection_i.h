

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ItSoftwareNCFCollection.idl:
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

#ifndef __ItSoftwareNCFCollection_i_h__
#define __ItSoftwareNCFCollection_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __INCFCollectionList_FWD_DEFINED__
#define __INCFCollectionList_FWD_DEFINED__
typedef interface INCFCollectionList INCFCollectionList;

#endif 	/* __INCFCollectionList_FWD_DEFINED__ */


#ifndef __INCFCollectionMap_FWD_DEFINED__
#define __INCFCollectionMap_FWD_DEFINED__
typedef interface INCFCollectionMap INCFCollectionMap;

#endif 	/* __INCFCollectionMap_FWD_DEFINED__ */


#ifndef __INCFCollectionPriorityQueue_FWD_DEFINED__
#define __INCFCollectionPriorityQueue_FWD_DEFINED__
typedef interface INCFCollectionPriorityQueue INCFCollectionPriorityQueue;

#endif 	/* __INCFCollectionPriorityQueue_FWD_DEFINED__ */


#ifndef __NCFCollectionList_FWD_DEFINED__
#define __NCFCollectionList_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFCollectionList NCFCollectionList;
#else
typedef struct NCFCollectionList NCFCollectionList;
#endif /* __cplusplus */

#endif 	/* __NCFCollectionList_FWD_DEFINED__ */


#ifndef __NCFCollectionMap_FWD_DEFINED__
#define __NCFCollectionMap_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFCollectionMap NCFCollectionMap;
#else
typedef struct NCFCollectionMap NCFCollectionMap;
#endif /* __cplusplus */

#endif 	/* __NCFCollectionMap_FWD_DEFINED__ */


#ifndef __NCFCollectionPriorityQueue_FWD_DEFINED__
#define __NCFCollectionPriorityQueue_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFCollectionPriorityQueue NCFCollectionPriorityQueue;
#else
typedef struct NCFCollectionPriorityQueue NCFCollectionPriorityQueue;
#endif /* __cplusplus */

#endif 	/* __NCFCollectionPriorityQueue_FWD_DEFINED__ */


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


#ifndef __INCFCollectionPriorityQueue_INTERFACE_DEFINED__
#define __INCFCollectionPriorityQueue_INTERFACE_DEFINED__

/* interface INCFCollectionPriorityQueue */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFCollectionPriorityQueue;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C68C9800-E4E5-4D3B-B49B-DF9E0E81E7FC")
    INCFCollectionPriorityQueue : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Empty( 
            /* [retval][out] */ VARIANT_BOOL *pvtbEmpty) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ long *plSize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddItem( 
            /* [in] */ VARIANT vtItem,
            /* [in] */ long lPriority) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Pop( 
            /* [retval][out] */ VARIANT *pvtItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveItem( 
            /* [in] */ VARIANT vtItem) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IncrementItemPriority( 
            /* [in] */ VARIANT vtItem,
            /* [in] */ long lPriority) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetItemPriority( 
            /* [in] */ VARIANT vtItem,
            /* [in] */ long lPriority) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetQueueItem( 
            /* [in] */ long lQueueIndex,
            /* [out][in] */ VARIANT *pvtItem,
            /* [retval][out] */ long *plPriority) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFCollectionPriorityQueueVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFCollectionPriorityQueue * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFCollectionPriorityQueue * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFCollectionPriorityQueue * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFCollectionPriorityQueue * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFCollectionPriorityQueue * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFCollectionPriorityQueue * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFCollectionPriorityQueue * This,
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
            INCFCollectionPriorityQueue * This,
            /* [retval][out] */ VARIANT_BOOL *pvtbEmpty);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            INCFCollectionPriorityQueue * This,
            /* [retval][out] */ long *plSize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            INCFCollectionPriorityQueue * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddItem )( 
            INCFCollectionPriorityQueue * This,
            /* [in] */ VARIANT vtItem,
            /* [in] */ long lPriority);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Pop )( 
            INCFCollectionPriorityQueue * This,
            /* [retval][out] */ VARIANT *pvtItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveItem )( 
            INCFCollectionPriorityQueue * This,
            /* [in] */ VARIANT vtItem);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IncrementItemPriority )( 
            INCFCollectionPriorityQueue * This,
            /* [in] */ VARIANT vtItem,
            /* [in] */ long lPriority);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetItemPriority )( 
            INCFCollectionPriorityQueue * This,
            /* [in] */ VARIANT vtItem,
            /* [in] */ long lPriority);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetQueueItem )( 
            INCFCollectionPriorityQueue * This,
            /* [in] */ long lQueueIndex,
            /* [out][in] */ VARIANT *pvtItem,
            /* [retval][out] */ long *plPriority);
        
        END_INTERFACE
    } INCFCollectionPriorityQueueVtbl;

    interface INCFCollectionPriorityQueue
    {
        CONST_VTBL struct INCFCollectionPriorityQueueVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFCollectionPriorityQueue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFCollectionPriorityQueue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFCollectionPriorityQueue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFCollectionPriorityQueue_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFCollectionPriorityQueue_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFCollectionPriorityQueue_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFCollectionPriorityQueue_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFCollectionPriorityQueue_get_Empty(This,pvtbEmpty)	\
    ( (This)->lpVtbl -> get_Empty(This,pvtbEmpty) ) 

#define INCFCollectionPriorityQueue_get_Size(This,plSize)	\
    ( (This)->lpVtbl -> get_Size(This,plSize) ) 

#define INCFCollectionPriorityQueue_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define INCFCollectionPriorityQueue_AddItem(This,vtItem,lPriority)	\
    ( (This)->lpVtbl -> AddItem(This,vtItem,lPriority) ) 

#define INCFCollectionPriorityQueue_Pop(This,pvtItem)	\
    ( (This)->lpVtbl -> Pop(This,pvtItem) ) 

#define INCFCollectionPriorityQueue_RemoveItem(This,vtItem)	\
    ( (This)->lpVtbl -> RemoveItem(This,vtItem) ) 

#define INCFCollectionPriorityQueue_IncrementItemPriority(This,vtItem,lPriority)	\
    ( (This)->lpVtbl -> IncrementItemPriority(This,vtItem,lPriority) ) 

#define INCFCollectionPriorityQueue_SetItemPriority(This,vtItem,lPriority)	\
    ( (This)->lpVtbl -> SetItemPriority(This,vtItem,lPriority) ) 

#define INCFCollectionPriorityQueue_GetQueueItem(This,lQueueIndex,pvtItem,plPriority)	\
    ( (This)->lpVtbl -> GetQueueItem(This,lQueueIndex,pvtItem,plPriority) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFCollectionPriorityQueue_INTERFACE_DEFINED__ */



#ifndef __ItSoftwareNCFCollectionLib_LIBRARY_DEFINED__
#define __ItSoftwareNCFCollectionLib_LIBRARY_DEFINED__

/* library ItSoftwareNCFCollectionLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ItSoftwareNCFCollectionLib;

EXTERN_C const CLSID CLSID_NCFCollectionList;

#ifdef __cplusplus

class DECLSPEC_UUID("86F1F40D-CD16-4365-80B9-24BC5FE5DCF0")
NCFCollectionList;
#endif

EXTERN_C const CLSID CLSID_NCFCollectionMap;

#ifdef __cplusplus

class DECLSPEC_UUID("1A035331-2AD2-43AE-B9D1-F9E4ED9B15C0")
NCFCollectionMap;
#endif

EXTERN_C const CLSID CLSID_NCFCollectionPriorityQueue;

#ifdef __cplusplus

class DECLSPEC_UUID("70E377C2-08AC-4FD4-940B-5F16FD13E1EB")
NCFCollectionPriorityQueue;
#endif
#endif /* __ItSoftwareNCFCollectionLib_LIBRARY_DEFINED__ */

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


