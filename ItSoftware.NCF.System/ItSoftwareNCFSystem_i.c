

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


MIDL_DEFINE_GUID(IID, IID_INCFString,0x3F2FC46F,0x4FDA,0x45BF,0x90,0xA5,0xCA,0x5E,0xB0,0x85,0x9E,0xF8);


MIDL_DEFINE_GUID(IID, IID_INCFRegistry,0xCEBF8F72,0x25BB,0x41BC,0xB9,0x18,0xF6,0x06,0x5A,0x35,0x20,0x50);


MIDL_DEFINE_GUID(IID, IID_INCFIniFile,0xCC2FE534,0xBB05,0x42B0,0xB5,0x81,0xF3,0x41,0x1C,0x35,0xD9,0x5E);


MIDL_DEFINE_GUID(IID, IID_INCFGuid,0x9FDA4821,0x618F,0x4FEB,0x9B,0x62,0x02,0xC3,0x6C,0x64,0x93,0xDD);


MIDL_DEFINE_GUID(IID, IID_INCFEventLog,0x56F2F97E,0x4B27,0x4F64,0xA0,0xD5,0x39,0x15,0x8E,0x53,0x5F,0xFB);


MIDL_DEFINE_GUID(IID, LIBID_ItSoftwareNCFSystemLib,0x0DC7FA68,0xF230,0x49FC,0x97,0xDD,0xD6,0xB0,0x9D,0x23,0x6C,0xC5);


MIDL_DEFINE_GUID(CLSID, CLSID_NCFString,0x0583A421,0x2CB6,0x4A9A,0xB8,0xB1,0x08,0x6C,0x42,0xF6,0xFD,0xC6);


MIDL_DEFINE_GUID(CLSID, CLSID_NCFRegistry,0xA23F8AAD,0xC135,0x4151,0x90,0xD1,0x71,0xC4,0xE0,0x23,0x2E,0x67);


MIDL_DEFINE_GUID(CLSID, CLSID_NCFIniFile,0x8C338C24,0x5C01,0x46EE,0x9B,0x2D,0xDE,0x58,0xD4,0x34,0x3E,0x7E);


MIDL_DEFINE_GUID(CLSID, CLSID_NCFGuid,0xE0C584DF,0xB183,0x452F,0xAA,0x84,0xBE,0x00,0xD2,0xA5,0x13,0x28);


MIDL_DEFINE_GUID(CLSID, CLSID_NCFEventLog,0x7519E65E,0x1D53,0x4852,0x81,0xEB,0x40,0x80,0x0C,0x11,0xFB,0xAB);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



