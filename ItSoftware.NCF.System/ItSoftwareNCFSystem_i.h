

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ItSoftwareNCFSystem.idl:
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

#ifndef __ItSoftwareNCFSystem_i_h__
#define __ItSoftwareNCFSystem_i_h__

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


#ifndef __INCFString_FWD_DEFINED__
#define __INCFString_FWD_DEFINED__
typedef interface INCFString INCFString;

#endif 	/* __INCFString_FWD_DEFINED__ */


#ifndef __INCFRegistry_FWD_DEFINED__
#define __INCFRegistry_FWD_DEFINED__
typedef interface INCFRegistry INCFRegistry;

#endif 	/* __INCFRegistry_FWD_DEFINED__ */


#ifndef __INCFIniFile_FWD_DEFINED__
#define __INCFIniFile_FWD_DEFINED__
typedef interface INCFIniFile INCFIniFile;

#endif 	/* __INCFIniFile_FWD_DEFINED__ */


#ifndef __INCFGuid_FWD_DEFINED__
#define __INCFGuid_FWD_DEFINED__
typedef interface INCFGuid INCFGuid;

#endif 	/* __INCFGuid_FWD_DEFINED__ */


#ifndef __INCFEventLog_FWD_DEFINED__
#define __INCFEventLog_FWD_DEFINED__
typedef interface INCFEventLog INCFEventLog;

#endif 	/* __INCFEventLog_FWD_DEFINED__ */


#ifndef __NCFString_FWD_DEFINED__
#define __NCFString_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFString NCFString;
#else
typedef struct NCFString NCFString;
#endif /* __cplusplus */

#endif 	/* __NCFString_FWD_DEFINED__ */


#ifndef __NCFRegistry_FWD_DEFINED__
#define __NCFRegistry_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFRegistry NCFRegistry;
#else
typedef struct NCFRegistry NCFRegistry;
#endif /* __cplusplus */

#endif 	/* __NCFRegistry_FWD_DEFINED__ */


#ifndef __NCFIniFile_FWD_DEFINED__
#define __NCFIniFile_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFIniFile NCFIniFile;
#else
typedef struct NCFIniFile NCFIniFile;
#endif /* __cplusplus */

#endif 	/* __NCFIniFile_FWD_DEFINED__ */


#ifndef __NCFGuid_FWD_DEFINED__
#define __NCFGuid_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFGuid NCFGuid;
#else
typedef struct NCFGuid NCFGuid;
#endif /* __cplusplus */

#endif 	/* __NCFGuid_FWD_DEFINED__ */


#ifndef __NCFEventLog_FWD_DEFINED__
#define __NCFEventLog_FWD_DEFINED__

#ifdef __cplusplus
typedef class NCFEventLog NCFEventLog;
#else
typedef struct NCFEventLog NCFEventLog;
#endif /* __cplusplus */

#endif 	/* __NCFEventLog_FWD_DEFINED__ */


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


/* interface __MIDL_itf_ItSoftwareNCFSystem_0000_0002 */
/* [local] */ 

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("73BD090B-029F-48ae-A155-28AF31522ABA") 
enum ENEGNUMBERMODE
    {
        ENEGN_LEFTPAR_NUMBER_RIGHTPAR	= 0,
        ENEGN_NEGSIGN_NUMBER	= 1,
        ENEGN_NEGSIGN_SPACE_NUMBER	= 2,
        ENEGN_NUMBER_NEGSIGN	= 3,
        ENEGN_NUMBER_SPACE_NEGSIGN	= 4
    } 	ENEGNUMBERMODE;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("E94E11AD-4683-41bc-B9EA-2F567EFA3983") 
enum ENEGCURRENCYMODE
    {
        ENEGC_LEFTPAR_MONSYM_NUMBER_RIGHTPAR	= 0,
        ENEGC_NEGSIG_MONSYM_NUMBER	= 1,
        ENEGC_MONSYM_NEGSIG_NUMBER	= 2,
        ENEGC_MONSYM_NUMBER_NEGSIG	= 3,
        ENEGC_LEFTPAR_NUMBER_MONSYM_RIGHTPAR	= 4,
        ENEGC_NEGSIG_NUMBER_MONSYM	= 5,
        ENEGC_NUMBER_NEGSIG_MONSYM	= 6,
        ENEGC_NUMBER_MONSYM_NEGSIG	= 7,
        ENEGC_NEGSIG_NUMBER_SPACE_MONSYM	= 8,
        ENEGC_NEGSIG_MONSYM_SPACE_NUMBER	= 9,
        ENEGC_NUMBER_SPACE_MONSYM_NEGSIG	= 10,
        ENEGC_MONSYM_SPACE_NUMBER_NEGSIG	= 11,
        ENEGC_MONSYM_SPACE_NEGSIG_NUMBER	= 12,
        ENEGC_MONSYM_NUMBER_NEGSIG_SPACE_MONSYM	= 13,
        ENEGC_LEFTPAR_MONSYM_SPACE_NUMBER_RIGHTPAR	= 14,
        ENEGC_LEFTPAR_NUMBER_SPACE_MONSYM_RIGHTPAR	= 15
    } 	ENEGCURRENCYMODE;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("636194BC-5CC1-4436-95A5-FD4FE9E23A21") 
enum EPOSCURRENCYMODE
    {
        EPOSC_PREFIX_NOSEP	= 0,
        EPOSC_SUFFIX_NOSEP	= 1,
        EPOSC_PREFIX_SPACE	= 2,
        EPOSC_SUFFIX_SPACE	= 3
    } 	EPOSCURRENCYMODE;



extern RPC_IF_HANDLE __MIDL_itf_ItSoftwareNCFSystem_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ItSoftwareNCFSystem_0000_0002_v0_0_s_ifspec;

#ifndef __INCFString_INTERFACE_DEFINED__
#define __INCFString_INTERFACE_DEFINED__

/* interface INCFString */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFString;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3F2FC46F-4FDA-45BF-90A5-CA5EB0859EF8")
    INCFString : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CutLeft( 
            /* [in] */ BSTR source_string,
            /* [in] */ long length,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CutMid( 
            /* [in] */ BSTR source_string,
            /* [in] */ long start_index,
            /* [in] */ long length,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CutRight( 
            /* [in] */ BSTR source_string,
            /* [in] */ long length,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Left( 
            /* [in] */ BSTR source_string,
            /* [in] */ long length,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Mid( 
            /* [in] */ BSTR source_string,
            /* [in] */ long start_index,
            /* [in] */ long length,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Right( 
            /* [in] */ BSTR source_string,
            /* [in] */ long length,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SpanIncluding( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR char_set,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SpanExcluding( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR char_set,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ToUpperCase( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ToLowerCase( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reverse( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Replace( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR replace_string,
            /* [in] */ BSTR replacement_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReplaceSection( 
            /* [in] */ BSTR source_string,
            /* [in] */ long start_index,
            /* [in] */ long length,
            /* [in] */ BSTR replacement_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR insert_string,
            /* [in] */ long index,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ToString( 
            /* [in] */ VARIANT value,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLength( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ long *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringBetweenStrings( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR string1,
            /* [in] */ BSTR string2,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringBetweenStringsEx( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR string1,
            /* [in] */ BSTR string2,
            /* [in] */ long string_pair_number,
            /* [retval][out] */ BSTR *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringBeforeString( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR search_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringAfterString( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR search_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR append_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Compare( 
            /* [in] */ BSTR source_string1,
            /* [in] */ BSTR source_string2,
            /* [in] */ VARIANT_BOOL case_sensitive,
            /* [retval][out] */ long *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Copy( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Trim( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TrimLeft( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TrimRight( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TrimEx( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR trim_characters,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TrimLeftEx( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR trim_characters,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TrimRightEx( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR trim_characters,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSubstringCount( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substring,
            /* [retval][out] */ long *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Split( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR delimiter_string,
            /* [out][in] */ BSTR *remainder_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ToFixedLength( 
            /* [in] */ BSTR source_string,
            /* [in] */ long length,
            /* [in] */ BSTR fill_string,
            /* [retval][out] */ BSTR *output) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [retval][out] */ long *result_index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindNext( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [in] */ long last_found_index,
            /* [retval][out] */ long *result_index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindReverse( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [retval][out] */ long *result_index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindReverseNext( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [in] */ long last_found_index,
            /* [retval][out] */ long *result_index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindFirstOf( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [retval][out] */ long *result_index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindFirstNotOf( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [retval][out] */ long *result_index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindLastOf( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [retval][out] */ long *result_index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindLastNotOf( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [retval][out] */ long *result_index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateUniform( 
            /* [in] */ long length,
            /* [in] */ BSTR fill_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLocalNumberFormat( 
            /* [in] */ VARIANT value,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumberFormat( 
            /* [in] */ VARIANT value,
            /* [in] */ long num_digits,
            /* [in] */ long grouping,
            /* [in] */ BSTR decimal_sep,
            /* [in] */ BSTR thousand_sep,
            /* [in] */ ENEGNUMBERMODE negative_number_format,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLocalCurrencyFormat( 
            /* [in] */ VARIANT value,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCurrencyFormat( 
            /* [in] */ VARIANT value,
            /* [in] */ long num_digits,
            /* [in] */ long grouping,
            /* [in] */ BSTR decimal_sep,
            /* [in] */ BSTR thousand_sep,
            /* [in] */ ENEGCURRENCYMODE negative_currency_format,
            /* [in] */ EPOSCURRENCYMODE positive_currency_format,
            /* [in] */ BSTR currency_symbol,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExpandEnvironmentString( 
            /* [in] */ BSTR environment_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasAlpha( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasAlphaNumeric( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasUpperCase( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasLowerCase( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasDigit( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasHexDigit( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasSpace( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasPunct( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasPrint( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasGraph( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasASCII( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasControl( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsAlpha( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsAlphaNumeric( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsUpperCase( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsLowerCase( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsDigit( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsHexDigit( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsSpace( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsPunct( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsPrint( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsGraph( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsASCII( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsControl( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SplitToCollection( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR delimiter_string,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LineSplit( 
            /* [in] */ BSTR source_string,
            /* [out][in] */ BSTR *remainder_string,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LineSplitToCollection( 
            /* [in] */ BSTR source_string,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StringBetweenStringsInOrder( 
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR string1,
            /* [in] */ BSTR string2,
            /* [retval][out] */ BSTR *result_string) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TimeToString( 
            /* [in] */ BSTR format,
            /* [in] */ ULONG timeMilliseconds,
            /* [retval][out] */ BSTR *result_string) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFStringVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFString * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFString * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFString * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFString * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFString * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFString * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFString * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CutLeft )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ long length,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CutMid )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ long start_index,
            /* [in] */ long length,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CutRight )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ long length,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Left )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ long length,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Mid )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ long start_index,
            /* [in] */ long length,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Right )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ long length,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SpanIncluding )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR char_set,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SpanExcluding )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR char_set,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ToUpperCase )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ToLowerCase )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Reverse )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Replace )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR replace_string,
            /* [in] */ BSTR replacement_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReplaceSection )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ long start_index,
            /* [in] */ long length,
            /* [in] */ BSTR replacement_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR insert_string,
            /* [in] */ long index,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ToString )( 
            INCFString * This,
            /* [in] */ VARIANT value,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLength )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ long *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringBetweenStrings )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR string1,
            /* [in] */ BSTR string2,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringBetweenStringsEx )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR string1,
            /* [in] */ BSTR string2,
            /* [in] */ long string_pair_number,
            /* [retval][out] */ BSTR *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringBeforeString )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR search_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringAfterString )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR search_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR append_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Compare )( 
            INCFString * This,
            /* [in] */ BSTR source_string1,
            /* [in] */ BSTR source_string2,
            /* [in] */ VARIANT_BOOL case_sensitive,
            /* [retval][out] */ long *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Copy )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Trim )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TrimLeft )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TrimRight )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TrimEx )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR trim_characters,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TrimLeftEx )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR trim_characters,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TrimRightEx )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR trim_characters,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSubstringCount )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substring,
            /* [retval][out] */ long *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Split )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR delimiter_string,
            /* [out][in] */ BSTR *remainder_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ToFixedLength )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ long length,
            /* [in] */ BSTR fill_string,
            /* [retval][out] */ BSTR *output);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [retval][out] */ long *result_index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindNext )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [in] */ long last_found_index,
            /* [retval][out] */ long *result_index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindReverse )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [retval][out] */ long *result_index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindReverseNext )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [in] */ long last_found_index,
            /* [retval][out] */ long *result_index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstOf )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [retval][out] */ long *result_index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindFirstNotOf )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [retval][out] */ long *result_index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindLastOf )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [retval][out] */ long *result_index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindLastNotOf )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR substr,
            /* [retval][out] */ long *result_index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateUniform )( 
            INCFString * This,
            /* [in] */ long length,
            /* [in] */ BSTR fill_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLocalNumberFormat )( 
            INCFString * This,
            /* [in] */ VARIANT value,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberFormat )( 
            INCFString * This,
            /* [in] */ VARIANT value,
            /* [in] */ long num_digits,
            /* [in] */ long grouping,
            /* [in] */ BSTR decimal_sep,
            /* [in] */ BSTR thousand_sep,
            /* [in] */ ENEGNUMBERMODE negative_number_format,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLocalCurrencyFormat )( 
            INCFString * This,
            /* [in] */ VARIANT value,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrencyFormat )( 
            INCFString * This,
            /* [in] */ VARIANT value,
            /* [in] */ long num_digits,
            /* [in] */ long grouping,
            /* [in] */ BSTR decimal_sep,
            /* [in] */ BSTR thousand_sep,
            /* [in] */ ENEGCURRENCYMODE negative_currency_format,
            /* [in] */ EPOSCURRENCYMODE positive_currency_format,
            /* [in] */ BSTR currency_symbol,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExpandEnvironmentString )( 
            INCFString * This,
            /* [in] */ BSTR environment_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasAlpha )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasAlphaNumeric )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasUpperCase )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasLowerCase )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasDigit )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasHexDigit )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasSpace )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasPunct )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasPrint )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasGraph )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasASCII )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasControl )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsAlpha )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsAlphaNumeric )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsUpperCase )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsLowerCase )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsDigit )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsHexDigit )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsSpace )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsPunct )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsPrint )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsGraph )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsASCII )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsControl )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ VARIANT_BOOL *result_value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SplitToCollection )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR delimiter_string,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LineSplit )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [out][in] */ BSTR *remainder_string,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LineSplitToCollection )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StringBetweenStringsInOrder )( 
            INCFString * This,
            /* [in] */ BSTR source_string,
            /* [in] */ BSTR string1,
            /* [in] */ BSTR string2,
            /* [retval][out] */ BSTR *result_string);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TimeToString )( 
            INCFString * This,
            /* [in] */ BSTR format,
            /* [in] */ ULONG timeMilliseconds,
            /* [retval][out] */ BSTR *result_string);
        
        END_INTERFACE
    } INCFStringVtbl;

    interface INCFString
    {
        CONST_VTBL struct INCFStringVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFString_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFString_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFString_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFString_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFString_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFString_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFString_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFString_CutLeft(This,source_string,length,result_string)	\
    ( (This)->lpVtbl -> CutLeft(This,source_string,length,result_string) ) 

#define INCFString_CutMid(This,source_string,start_index,length,result_string)	\
    ( (This)->lpVtbl -> CutMid(This,source_string,start_index,length,result_string) ) 

#define INCFString_CutRight(This,source_string,length,result_string)	\
    ( (This)->lpVtbl -> CutRight(This,source_string,length,result_string) ) 

#define INCFString_Left(This,source_string,length,result_string)	\
    ( (This)->lpVtbl -> Left(This,source_string,length,result_string) ) 

#define INCFString_Mid(This,source_string,start_index,length,result_string)	\
    ( (This)->lpVtbl -> Mid(This,source_string,start_index,length,result_string) ) 

#define INCFString_Right(This,source_string,length,result_string)	\
    ( (This)->lpVtbl -> Right(This,source_string,length,result_string) ) 

#define INCFString_SpanIncluding(This,source_string,char_set,result_string)	\
    ( (This)->lpVtbl -> SpanIncluding(This,source_string,char_set,result_string) ) 

#define INCFString_SpanExcluding(This,source_string,char_set,result_string)	\
    ( (This)->lpVtbl -> SpanExcluding(This,source_string,char_set,result_string) ) 

#define INCFString_ToUpperCase(This,source_string,result_string)	\
    ( (This)->lpVtbl -> ToUpperCase(This,source_string,result_string) ) 

#define INCFString_ToLowerCase(This,source_string,result_string)	\
    ( (This)->lpVtbl -> ToLowerCase(This,source_string,result_string) ) 

#define INCFString_Reverse(This,source_string,result_string)	\
    ( (This)->lpVtbl -> Reverse(This,source_string,result_string) ) 

#define INCFString_Replace(This,source_string,replace_string,replacement_string,result_string)	\
    ( (This)->lpVtbl -> Replace(This,source_string,replace_string,replacement_string,result_string) ) 

#define INCFString_ReplaceSection(This,source_string,start_index,length,replacement_string,result_string)	\
    ( (This)->lpVtbl -> ReplaceSection(This,source_string,start_index,length,replacement_string,result_string) ) 

#define INCFString_Insert(This,source_string,insert_string,index,result_string)	\
    ( (This)->lpVtbl -> Insert(This,source_string,insert_string,index,result_string) ) 

#define INCFString_ToString(This,value,result_string)	\
    ( (This)->lpVtbl -> ToString(This,value,result_string) ) 

#define INCFString_GetLength(This,source_string,result_value)	\
    ( (This)->lpVtbl -> GetLength(This,source_string,result_value) ) 

#define INCFString_StringBetweenStrings(This,source_string,string1,string2,result_string)	\
    ( (This)->lpVtbl -> StringBetweenStrings(This,source_string,string1,string2,result_string) ) 

#define INCFString_StringBetweenStringsEx(This,source_string,string1,string2,string_pair_number,result_value)	\
    ( (This)->lpVtbl -> StringBetweenStringsEx(This,source_string,string1,string2,string_pair_number,result_value) ) 

#define INCFString_StringBeforeString(This,source_string,search_string,result_string)	\
    ( (This)->lpVtbl -> StringBeforeString(This,source_string,search_string,result_string) ) 

#define INCFString_StringAfterString(This,source_string,search_string,result_string)	\
    ( (This)->lpVtbl -> StringAfterString(This,source_string,search_string,result_string) ) 

#define INCFString_Append(This,source_string,append_string,result_string)	\
    ( (This)->lpVtbl -> Append(This,source_string,append_string,result_string) ) 

#define INCFString_Compare(This,source_string1,source_string2,case_sensitive,result_value)	\
    ( (This)->lpVtbl -> Compare(This,source_string1,source_string2,case_sensitive,result_value) ) 

#define INCFString_Copy(This,source_string,result_string)	\
    ( (This)->lpVtbl -> Copy(This,source_string,result_string) ) 

#define INCFString_Trim(This,source_string,result_string)	\
    ( (This)->lpVtbl -> Trim(This,source_string,result_string) ) 

#define INCFString_TrimLeft(This,source_string,result_string)	\
    ( (This)->lpVtbl -> TrimLeft(This,source_string,result_string) ) 

#define INCFString_TrimRight(This,source_string,result_string)	\
    ( (This)->lpVtbl -> TrimRight(This,source_string,result_string) ) 

#define INCFString_TrimEx(This,source_string,trim_characters,result_string)	\
    ( (This)->lpVtbl -> TrimEx(This,source_string,trim_characters,result_string) ) 

#define INCFString_TrimLeftEx(This,source_string,trim_characters,result_string)	\
    ( (This)->lpVtbl -> TrimLeftEx(This,source_string,trim_characters,result_string) ) 

#define INCFString_TrimRightEx(This,source_string,trim_characters,result_string)	\
    ( (This)->lpVtbl -> TrimRightEx(This,source_string,trim_characters,result_string) ) 

#define INCFString_GetSubstringCount(This,source_string,substring,result_value)	\
    ( (This)->lpVtbl -> GetSubstringCount(This,source_string,substring,result_value) ) 

#define INCFString_Split(This,source_string,delimiter_string,remainder_string,result_string)	\
    ( (This)->lpVtbl -> Split(This,source_string,delimiter_string,remainder_string,result_string) ) 

#define INCFString_ToFixedLength(This,source_string,length,fill_string,output)	\
    ( (This)->lpVtbl -> ToFixedLength(This,source_string,length,fill_string,output) ) 

#define INCFString_Find(This,source_string,substr,result_index)	\
    ( (This)->lpVtbl -> Find(This,source_string,substr,result_index) ) 

#define INCFString_FindNext(This,source_string,substr,last_found_index,result_index)	\
    ( (This)->lpVtbl -> FindNext(This,source_string,substr,last_found_index,result_index) ) 

#define INCFString_FindReverse(This,source_string,substr,result_index)	\
    ( (This)->lpVtbl -> FindReverse(This,source_string,substr,result_index) ) 

#define INCFString_FindReverseNext(This,source_string,substr,last_found_index,result_index)	\
    ( (This)->lpVtbl -> FindReverseNext(This,source_string,substr,last_found_index,result_index) ) 

#define INCFString_FindFirstOf(This,source_string,substr,result_index)	\
    ( (This)->lpVtbl -> FindFirstOf(This,source_string,substr,result_index) ) 

#define INCFString_FindFirstNotOf(This,source_string,substr,result_index)	\
    ( (This)->lpVtbl -> FindFirstNotOf(This,source_string,substr,result_index) ) 

#define INCFString_FindLastOf(This,source_string,substr,result_index)	\
    ( (This)->lpVtbl -> FindLastOf(This,source_string,substr,result_index) ) 

#define INCFString_FindLastNotOf(This,source_string,substr,result_index)	\
    ( (This)->lpVtbl -> FindLastNotOf(This,source_string,substr,result_index) ) 

#define INCFString_CreateUniform(This,length,fill_string,result_string)	\
    ( (This)->lpVtbl -> CreateUniform(This,length,fill_string,result_string) ) 

#define INCFString_GetLocalNumberFormat(This,value,result_string)	\
    ( (This)->lpVtbl -> GetLocalNumberFormat(This,value,result_string) ) 

#define INCFString_GetNumberFormat(This,value,num_digits,grouping,decimal_sep,thousand_sep,negative_number_format,result_string)	\
    ( (This)->lpVtbl -> GetNumberFormat(This,value,num_digits,grouping,decimal_sep,thousand_sep,negative_number_format,result_string) ) 

#define INCFString_GetLocalCurrencyFormat(This,value,result_string)	\
    ( (This)->lpVtbl -> GetLocalCurrencyFormat(This,value,result_string) ) 

#define INCFString_GetCurrencyFormat(This,value,num_digits,grouping,decimal_sep,thousand_sep,negative_currency_format,positive_currency_format,currency_symbol,result_string)	\
    ( (This)->lpVtbl -> GetCurrencyFormat(This,value,num_digits,grouping,decimal_sep,thousand_sep,negative_currency_format,positive_currency_format,currency_symbol,result_string) ) 

#define INCFString_ExpandEnvironmentString(This,environment_string,result_string)	\
    ( (This)->lpVtbl -> ExpandEnvironmentString(This,environment_string,result_string) ) 

#define INCFString_HasAlpha(This,source_string,result_value)	\
    ( (This)->lpVtbl -> HasAlpha(This,source_string,result_value) ) 

#define INCFString_HasAlphaNumeric(This,source_string,result_value)	\
    ( (This)->lpVtbl -> HasAlphaNumeric(This,source_string,result_value) ) 

#define INCFString_HasUpperCase(This,source_string,result_value)	\
    ( (This)->lpVtbl -> HasUpperCase(This,source_string,result_value) ) 

#define INCFString_HasLowerCase(This,source_string,result_value)	\
    ( (This)->lpVtbl -> HasLowerCase(This,source_string,result_value) ) 

#define INCFString_HasDigit(This,source_string,result_value)	\
    ( (This)->lpVtbl -> HasDigit(This,source_string,result_value) ) 

#define INCFString_HasHexDigit(This,source_string,result_value)	\
    ( (This)->lpVtbl -> HasHexDigit(This,source_string,result_value) ) 

#define INCFString_HasSpace(This,source_string,result_value)	\
    ( (This)->lpVtbl -> HasSpace(This,source_string,result_value) ) 

#define INCFString_HasPunct(This,source_string,result_value)	\
    ( (This)->lpVtbl -> HasPunct(This,source_string,result_value) ) 

#define INCFString_HasPrint(This,source_string,result_value)	\
    ( (This)->lpVtbl -> HasPrint(This,source_string,result_value) ) 

#define INCFString_HasGraph(This,source_string,result_value)	\
    ( (This)->lpVtbl -> HasGraph(This,source_string,result_value) ) 

#define INCFString_HasASCII(This,source_string,result_value)	\
    ( (This)->lpVtbl -> HasASCII(This,source_string,result_value) ) 

#define INCFString_HasControl(This,source_string,result_value)	\
    ( (This)->lpVtbl -> HasControl(This,source_string,result_value) ) 

#define INCFString_IsAlpha(This,source_string,result_value)	\
    ( (This)->lpVtbl -> IsAlpha(This,source_string,result_value) ) 

#define INCFString_IsAlphaNumeric(This,source_string,result_value)	\
    ( (This)->lpVtbl -> IsAlphaNumeric(This,source_string,result_value) ) 

#define INCFString_IsUpperCase(This,source_string,result_value)	\
    ( (This)->lpVtbl -> IsUpperCase(This,source_string,result_value) ) 

#define INCFString_IsLowerCase(This,source_string,result_value)	\
    ( (This)->lpVtbl -> IsLowerCase(This,source_string,result_value) ) 

#define INCFString_IsDigit(This,source_string,result_value)	\
    ( (This)->lpVtbl -> IsDigit(This,source_string,result_value) ) 

#define INCFString_IsHexDigit(This,source_string,result_value)	\
    ( (This)->lpVtbl -> IsHexDigit(This,source_string,result_value) ) 

#define INCFString_IsSpace(This,source_string,result_value)	\
    ( (This)->lpVtbl -> IsSpace(This,source_string,result_value) ) 

#define INCFString_IsPunct(This,source_string,result_value)	\
    ( (This)->lpVtbl -> IsPunct(This,source_string,result_value) ) 

#define INCFString_IsPrint(This,source_string,result_value)	\
    ( (This)->lpVtbl -> IsPrint(This,source_string,result_value) ) 

#define INCFString_IsGraph(This,source_string,result_value)	\
    ( (This)->lpVtbl -> IsGraph(This,source_string,result_value) ) 

#define INCFString_IsASCII(This,source_string,result_value)	\
    ( (This)->lpVtbl -> IsASCII(This,source_string,result_value) ) 

#define INCFString_IsControl(This,source_string,result_value)	\
    ( (This)->lpVtbl -> IsControl(This,source_string,result_value) ) 

#define INCFString_SplitToCollection(This,source_string,delimiter_string,ppINCFCollectionList)	\
    ( (This)->lpVtbl -> SplitToCollection(This,source_string,delimiter_string,ppINCFCollectionList) ) 

#define INCFString_LineSplit(This,source_string,remainder_string,result_string)	\
    ( (This)->lpVtbl -> LineSplit(This,source_string,remainder_string,result_string) ) 

#define INCFString_LineSplitToCollection(This,source_string,ppINCFCollectionList)	\
    ( (This)->lpVtbl -> LineSplitToCollection(This,source_string,ppINCFCollectionList) ) 

#define INCFString_StringBetweenStringsInOrder(This,source_string,string1,string2,result_string)	\
    ( (This)->lpVtbl -> StringBetweenStringsInOrder(This,source_string,string1,string2,result_string) ) 

#define INCFString_TimeToString(This,format,timeMilliseconds,result_string)	\
    ( (This)->lpVtbl -> TimeToString(This,format,timeMilliseconds,result_string) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFString_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ItSoftwareNCFSystem_0000_0003 */
/* [local] */ 

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("19099BA3-C673-4fdf-9781-ADCA3C5135FD") 
enum EREGCLASS
    {
        EHKEY_CLASSES_ROOT	= 0,
        EHKEY_CURRENT_USER	= 1,
        EHKEY_LOCAL_MACHINE	= 2,
        EHKEY_USERS	= 3,
        EHKEY_PERFORMANCE_DATA	= 4,
        EHKEY_CURRENT_CONFIG	= 5,
        EHKEY_DYN_DATA	= 6
    } 	EREGCLASS;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("A0C54F1E-CD9D-4d93-9894-D28AB3B2CE7E") 
enum EREGVALUETYPE
    {
        ERDT_REG_NONE	= 0,
        ERDT_REG_SZ	= 1,
        ERDT_REG_EXPAND_SZ	= 2,
        ERDT_REG_BINARY	= 3,
        ERDT_REG_DWORD	= 4,
        ERDT_REG_DWORD_LITTLE_ENDIAN	= 4,
        ERDT_REG_DWORD_BIG_ENDIAN	= 5,
        ERDT_REG_MULTI_SZ	= 7,
        ERDT_REG_RESOURCE_LIST	= 8,
        ERDT_REG_FULL_RESOURCE_DESCRIPTOR	= 9,
        ERDT_REG_RESOURCE_REQUIREMENTS_LIST	= 10,
        ERDT_REG_QWORD	= 11,
        ERDT_REG_QWORD_LITTLE_ENDIAN	= 11
    } 	EREGVALUETYPE;



extern RPC_IF_HANDLE __MIDL_itf_ItSoftwareNCFSystem_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ItSoftwareNCFSystem_0000_0003_v0_0_s_ifspec;

#ifndef __INCFRegistry_INTERFACE_DEFINED__
#define __INCFRegistry_INTERFACE_DEFINED__

/* interface INCFRegistry */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFRegistry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CEBF8F72-25BB-41BC-B918-F6065A352050")
    INCFRegistry : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteKey( 
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateKey( 
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key,
            /* [in] */ BSTR default_data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddValue( 
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key,
            /* [in] */ BSTR value,
            /* [in] */ BSTR data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteValue( 
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key,
            /* [in] */ BSTR value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadValue( 
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key,
            /* [in] */ BSTR value,
            /* [retval][out] */ BSTR *data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateKeys( 
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateValues( 
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateStringValues( 
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key,
            /* [retval][out] */ INCFCollectionMap **ppINCFCollectionMap) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StoreCollection( 
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key,
            /* [in] */ INCFCollectionMap *pINCFCollectionMap) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFRegistryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFRegistry * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFRegistry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFRegistry * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFRegistry * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFRegistry * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFRegistry * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFRegistry * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteKey )( 
            INCFRegistry * This,
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateKey )( 
            INCFRegistry * This,
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key,
            /* [in] */ BSTR default_data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddValue )( 
            INCFRegistry * This,
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key,
            /* [in] */ BSTR value,
            /* [in] */ BSTR data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteValue )( 
            INCFRegistry * This,
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key,
            /* [in] */ BSTR value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadValue )( 
            INCFRegistry * This,
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key,
            /* [in] */ BSTR value,
            /* [retval][out] */ BSTR *data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateKeys )( 
            INCFRegistry * This,
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateValues )( 
            INCFRegistry * This,
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateStringValues )( 
            INCFRegistry * This,
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key,
            /* [retval][out] */ INCFCollectionMap **ppINCFCollectionMap);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreCollection )( 
            INCFRegistry * This,
            /* [in] */ EREGCLASS eregclass,
            /* [in] */ BSTR path,
            /* [in] */ BSTR key,
            /* [in] */ INCFCollectionMap *pINCFCollectionMap);
        
        END_INTERFACE
    } INCFRegistryVtbl;

    interface INCFRegistry
    {
        CONST_VTBL struct INCFRegistryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFRegistry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFRegistry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFRegistry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFRegistry_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFRegistry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFRegistry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFRegistry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFRegistry_DeleteKey(This,eregclass,path,key)	\
    ( (This)->lpVtbl -> DeleteKey(This,eregclass,path,key) ) 

#define INCFRegistry_CreateKey(This,eregclass,path,key,default_data)	\
    ( (This)->lpVtbl -> CreateKey(This,eregclass,path,key,default_data) ) 

#define INCFRegistry_AddValue(This,eregclass,path,key,value,data)	\
    ( (This)->lpVtbl -> AddValue(This,eregclass,path,key,value,data) ) 

#define INCFRegistry_DeleteValue(This,eregclass,path,key,value)	\
    ( (This)->lpVtbl -> DeleteValue(This,eregclass,path,key,value) ) 

#define INCFRegistry_ReadValue(This,eregclass,path,key,value,data)	\
    ( (This)->lpVtbl -> ReadValue(This,eregclass,path,key,value,data) ) 

#define INCFRegistry_EnumerateKeys(This,eregclass,path,ppINCFCollectionList)	\
    ( (This)->lpVtbl -> EnumerateKeys(This,eregclass,path,ppINCFCollectionList) ) 

#define INCFRegistry_EnumerateValues(This,eregclass,path,key,ppINCFCollectionList)	\
    ( (This)->lpVtbl -> EnumerateValues(This,eregclass,path,key,ppINCFCollectionList) ) 

#define INCFRegistry_EnumerateStringValues(This,eregclass,path,key,ppINCFCollectionMap)	\
    ( (This)->lpVtbl -> EnumerateStringValues(This,eregclass,path,key,ppINCFCollectionMap) ) 

#define INCFRegistry_StoreCollection(This,eregclass,path,key,pINCFCollectionMap)	\
    ( (This)->lpVtbl -> StoreCollection(This,eregclass,path,key,pINCFCollectionMap) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFRegistry_INTERFACE_DEFINED__ */


#ifndef __INCFIniFile_INTERFACE_DEFINED__
#define __INCFIniFile_INTERFACE_DEFINED__

/* interface INCFIniFile */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFIniFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC2FE534-BB05-42B0-B581-F3411C35D95E")
    INCFIniFile : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateKey( 
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname,
            /* [in] */ BSTR keyname,
            /* [in] */ BSTR value,
            /* [in] */ VARIANT_BOOL overwriteifexist) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteKey( 
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname,
            /* [in] */ BSTR keyname) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadValue( 
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname,
            /* [in] */ BSTR keyname,
            /* [retval][out] */ BSTR *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname,
            /* [in] */ BSTR keyname,
            /* [in] */ BSTR value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSection( 
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteSection( 
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StoreCollection( 
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname,
            /* [in] */ INCFCollectionMap *pINCFCollectionMap,
            /* [in] */ VARIANT_BOOL overwriteifexist) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateKeys( 
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname,
            /* [retval][out] */ INCFCollectionMap **ppINCFCollectionMap) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateSections( 
            /* [in] */ BSTR filename,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFIniFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFIniFile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFIniFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFIniFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFIniFile * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFIniFile * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFIniFile * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFIniFile * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateKey )( 
            INCFIniFile * This,
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname,
            /* [in] */ BSTR keyname,
            /* [in] */ BSTR value,
            /* [in] */ VARIANT_BOOL overwriteifexist);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteKey )( 
            INCFIniFile * This,
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname,
            /* [in] */ BSTR keyname);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadValue )( 
            INCFIniFile * This,
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname,
            /* [in] */ BSTR keyname,
            /* [retval][out] */ BSTR *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            INCFIniFile * This,
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname,
            /* [in] */ BSTR keyname,
            /* [in] */ BSTR value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateSection )( 
            INCFIniFile * This,
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteSection )( 
            INCFIniFile * This,
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreCollection )( 
            INCFIniFile * This,
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname,
            /* [in] */ INCFCollectionMap *pINCFCollectionMap,
            /* [in] */ VARIANT_BOOL overwriteifexist);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateKeys )( 
            INCFIniFile * This,
            /* [in] */ BSTR filename,
            /* [in] */ BSTR sectionname,
            /* [retval][out] */ INCFCollectionMap **ppINCFCollectionMap);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateSections )( 
            INCFIniFile * This,
            /* [in] */ BSTR filename,
            /* [retval][out] */ INCFCollectionList **ppINCFCollectionList);
        
        END_INTERFACE
    } INCFIniFileVtbl;

    interface INCFIniFile
    {
        CONST_VTBL struct INCFIniFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFIniFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFIniFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFIniFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFIniFile_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFIniFile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFIniFile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFIniFile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFIniFile_CreateKey(This,filename,sectionname,keyname,value,overwriteifexist)	\
    ( (This)->lpVtbl -> CreateKey(This,filename,sectionname,keyname,value,overwriteifexist) ) 

#define INCFIniFile_DeleteKey(This,filename,sectionname,keyname)	\
    ( (This)->lpVtbl -> DeleteKey(This,filename,sectionname,keyname) ) 

#define INCFIniFile_ReadValue(This,filename,sectionname,keyname,value)	\
    ( (This)->lpVtbl -> ReadValue(This,filename,sectionname,keyname,value) ) 

#define INCFIniFile_SetValue(This,filename,sectionname,keyname,value)	\
    ( (This)->lpVtbl -> SetValue(This,filename,sectionname,keyname,value) ) 

#define INCFIniFile_CreateSection(This,filename,sectionname)	\
    ( (This)->lpVtbl -> CreateSection(This,filename,sectionname) ) 

#define INCFIniFile_DeleteSection(This,filename,sectionname)	\
    ( (This)->lpVtbl -> DeleteSection(This,filename,sectionname) ) 

#define INCFIniFile_StoreCollection(This,filename,sectionname,pINCFCollectionMap,overwriteifexist)	\
    ( (This)->lpVtbl -> StoreCollection(This,filename,sectionname,pINCFCollectionMap,overwriteifexist) ) 

#define INCFIniFile_EnumerateKeys(This,filename,sectionname,ppINCFCollectionMap)	\
    ( (This)->lpVtbl -> EnumerateKeys(This,filename,sectionname,ppINCFCollectionMap) ) 

#define INCFIniFile_EnumerateSections(This,filename,ppINCFCollectionList)	\
    ( (This)->lpVtbl -> EnumerateSections(This,filename,ppINCFCollectionList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFIniFile_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ItSoftwareNCFSystem_0000_0005 */
/* [local] */ 

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("8965DA36-C0D8-402b-A940-E0ED35B3CC0E") 
enum EGUIDTYPE
    {
        EGUID_REGISTRYFORMAT	= 0,
        EGUID_REGISTRYFORMAT_STRIPPED	= 1,
        EGUID_CONSTFORMAT	= 2,
        EGUID_COMPACTFORMAT	= 3,
        EGUID_PREFIXED_COMPACTFORMAT	= 4
    } 	EGUIDTYPE;



extern RPC_IF_HANDLE __MIDL_itf_ItSoftwareNCFSystem_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ItSoftwareNCFSystem_0000_0005_v0_0_s_ifspec;

#ifndef __INCFGuid_INTERFACE_DEFINED__
#define __INCFGuid_INTERFACE_DEFINED__

/* interface INCFGuid */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFGuid;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9FDA4821-618F-4FEB-9B62-02C36C6493DD")
    INCFGuid : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateGuidType( 
            /* [in] */ EGUIDTYPE __MIDL__INCFGuid0000,
            /* [retval][out] */ BSTR *pbstrGUID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateGuid( 
            /* [retval][out] */ BSTR *pbstrGUID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFGuidVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFGuid * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFGuid * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFGuid * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFGuid * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFGuid * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFGuid * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFGuid * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateGuidType )( 
            INCFGuid * This,
            /* [in] */ EGUIDTYPE __MIDL__INCFGuid0000,
            /* [retval][out] */ BSTR *pbstrGUID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateGuid )( 
            INCFGuid * This,
            /* [retval][out] */ BSTR *pbstrGUID);
        
        END_INTERFACE
    } INCFGuidVtbl;

    interface INCFGuid
    {
        CONST_VTBL struct INCFGuidVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFGuid_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFGuid_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFGuid_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFGuid_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFGuid_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFGuid_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFGuid_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFGuid_CreateGuidType(This,__MIDL__INCFGuid0000,pbstrGUID)	\
    ( (This)->lpVtbl -> CreateGuidType(This,__MIDL__INCFGuid0000,pbstrGUID) ) 

#define INCFGuid_CreateGuid(This,pbstrGUID)	\
    ( (This)->lpVtbl -> CreateGuid(This,pbstrGUID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFGuid_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_ItSoftwareNCFSystem_0000_0006 */
/* [local] */ 

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("10810239-C795-4221-B497-3B1EFB840C08") 
enum EEVENTLOGTYPE
    {
        EET_SUCCESS	= 0,
        EET_ERROR_TYPE	= 1,
        EET_WARNING_TYPE	= 2,
        EET_INFORMATION_TYPE	= 3,
        EET_AUDIT_SUCCESS	= 4,
        EET_AUDIT_FAILURE	= 5
    } 	EEVENTLOGTYPE;



extern RPC_IF_HANDLE __MIDL_itf_ItSoftwareNCFSystem_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ItSoftwareNCFSystem_0000_0006_v0_0_s_ifspec;

#ifndef __INCFEventLog_INTERFACE_DEFINED__
#define __INCFEventLog_INTERFACE_DEFINED__

/* interface INCFEventLog */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INCFEventLog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56F2F97E-4B27-4F64-A0D5-39158E535FFB")
    INCFEventLog : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReportEvent( 
            /* [in] */ BSTR sourcename,
            /* [in] */ EEVENTLOGTYPE eeventlogtype,
            /* [in] */ short category,
            /* [in] */ long eventid,
            /* [in] */ short numberofstrings,
            /* [in] */ BSTR description) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReportEventEx( 
            /* [in] */ BSTR uncservername,
            /* [in] */ BSTR sourcename,
            /* [in] */ EEVENTLOGTYPE eeventlogtype,
            /* [in] */ short category,
            /* [in] */ long eventid,
            /* [in] */ short numberofstrings,
            /* [in] */ BSTR description) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INCFEventLogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INCFEventLog * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INCFEventLog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INCFEventLog * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INCFEventLog * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INCFEventLog * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INCFEventLog * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INCFEventLog * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReportEvent )( 
            INCFEventLog * This,
            /* [in] */ BSTR sourcename,
            /* [in] */ EEVENTLOGTYPE eeventlogtype,
            /* [in] */ short category,
            /* [in] */ long eventid,
            /* [in] */ short numberofstrings,
            /* [in] */ BSTR description);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReportEventEx )( 
            INCFEventLog * This,
            /* [in] */ BSTR uncservername,
            /* [in] */ BSTR sourcename,
            /* [in] */ EEVENTLOGTYPE eeventlogtype,
            /* [in] */ short category,
            /* [in] */ long eventid,
            /* [in] */ short numberofstrings,
            /* [in] */ BSTR description);
        
        END_INTERFACE
    } INCFEventLogVtbl;

    interface INCFEventLog
    {
        CONST_VTBL struct INCFEventLogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INCFEventLog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INCFEventLog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INCFEventLog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INCFEventLog_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INCFEventLog_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INCFEventLog_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INCFEventLog_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INCFEventLog_ReportEvent(This,sourcename,eeventlogtype,category,eventid,numberofstrings,description)	\
    ( (This)->lpVtbl -> ReportEvent(This,sourcename,eeventlogtype,category,eventid,numberofstrings,description) ) 

#define INCFEventLog_ReportEventEx(This,uncservername,sourcename,eeventlogtype,category,eventid,numberofstrings,description)	\
    ( (This)->lpVtbl -> ReportEventEx(This,uncservername,sourcename,eeventlogtype,category,eventid,numberofstrings,description) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INCFEventLog_INTERFACE_DEFINED__ */



#ifndef __ItSoftwareNCFSystemLib_LIBRARY_DEFINED__
#define __ItSoftwareNCFSystemLib_LIBRARY_DEFINED__

/* library ItSoftwareNCFSystemLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ItSoftwareNCFSystemLib;

EXTERN_C const CLSID CLSID_NCFString;

#ifdef __cplusplus

class DECLSPEC_UUID("0583A421-2CB6-4A9A-B8B1-086C42F6FDC6")
NCFString;
#endif

EXTERN_C const CLSID CLSID_NCFRegistry;

#ifdef __cplusplus

class DECLSPEC_UUID("A23F8AAD-C135-4151-90D1-71C4E0232E67")
NCFRegistry;
#endif

EXTERN_C const CLSID CLSID_NCFIniFile;

#ifdef __cplusplus

class DECLSPEC_UUID("8C338C24-5C01-46EE-9B2D-DE58D4343E7E")
NCFIniFile;
#endif

EXTERN_C const CLSID CLSID_NCFGuid;

#ifdef __cplusplus

class DECLSPEC_UUID("E0C584DF-B183-452F-AA84-BE00D2A51328")
NCFGuid;
#endif

EXTERN_C const CLSID CLSID_NCFEventLog;

#ifdef __cplusplus

class DECLSPEC_UUID("7519E65E-1D53-4852-81EB-40800C11FBAB")
NCFEventLog;
#endif
#endif /* __ItSoftwareNCFSystemLib_LIBRARY_DEFINED__ */

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


