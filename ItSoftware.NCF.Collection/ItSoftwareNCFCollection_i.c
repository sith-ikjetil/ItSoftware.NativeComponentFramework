

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_INCFCollectionList,0x493378E5,0x71C6,0x4ACA,0xAC,0xB4,0xB2,0x8D,0x26,0x95,0xBA,0x33);


MIDL_DEFINE_GUID(IID, IID_INCFCollectionMap,0x302930A6,0x6E9B,0x4040,0xB1,0x10,0x80,0xD8,0x2E,0xB2,0x02,0x9A);


MIDL_DEFINE_GUID(IID, IID_INCFCollectionPriorityQueue,0xC68C9800,0xE4E5,0x4D3B,0xB4,0x9B,0xDF,0x9E,0x0E,0x81,0xE7,0xFC);


MIDL_DEFINE_GUID(IID, LIBID_ItSoftwareNCFCollectionLib,0x0A19436E,0x3FDD,0x4996,0xBC,0xCA,0x12,0x8B,0x7A,0xAA,0xBF,0x7A);


MIDL_DEFINE_GUID(CLSID, CLSID_NCFCollectionList,0x86F1F40D,0xCD16,0x4365,0x80,0xB9,0x24,0xBC,0x5F,0xE5,0xDC,0xF0);


MIDL_DEFINE_GUID(CLSID, CLSID_NCFCollectionMap,0x1A035331,0x2AD2,0x43AE,0xB9,0xD1,0xF9,0xE4,0xED,0x9B,0x15,0xC0);


MIDL_DEFINE_GUID(CLSID, CLSID_NCFCollectionPriorityQueue,0x70E377C2,0x08AC,0x4FD4,0x94,0x0B,0x5F,0x16,0xFD,0x13,0xE1,0xEB);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



