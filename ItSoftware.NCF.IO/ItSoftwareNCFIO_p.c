

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ItSoftwareNCFIO_i.h"

#define TYPE_FORMAT_STRING_SIZE   1337                              
#define PROC_FORMAT_STRING_SIZE   3089                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _ItSoftwareNCFIO_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ItSoftwareNCFIO_MIDL_TYPE_FORMAT_STRING;

typedef struct _ItSoftwareNCFIO_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ItSoftwareNCFIO_MIDL_PROC_FORMAT_STRING;

typedef struct _ItSoftwareNCFIO_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ItSoftwareNCFIO_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};



extern const ItSoftwareNCFIO_MIDL_TYPE_FORMAT_STRING ItSoftwareNCFIO__MIDL_TypeFormatString;
extern const ItSoftwareNCFIO_MIDL_PROC_FORMAT_STRING ItSoftwareNCFIO__MIDL_ProcFormatString;
extern const ItSoftwareNCFIO_MIDL_EXPR_FORMAT_STRING ItSoftwareNCFIO__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFCollectionList_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFCollectionList_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFStream_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFStream_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFPath_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFPath_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFUrl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFUrl_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFStringStream_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFStringStream_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFFileStream_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFFileStream_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFMemoryStream_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFMemoryStream_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFFile_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFFile_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFDirectory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFDirectory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFNetworkResource_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFNetworkResource_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFNetwork_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFNetwork_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFNetworkShare_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFNetworkShare_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const ItSoftwareNCFIO_MIDL_PROC_FORMAT_STRING ItSoftwareNCFIO__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure AddItemToBack */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vtItem */

/* 26 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddItemToFront */

/* 38 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 54 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x1 ),	/* 1 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vtItem */

/* 64 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 66 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 68 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveBackItem */

/* 76 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x9 ),	/* 9 */
/* 84 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 92 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveFrontItem */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0xa ),	/* 10 */
/* 116 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 124 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 136 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Size */

/* 140 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0xb ),	/* 11 */
/* 148 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x24 ),	/* 36 */
/* 154 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 156 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter plSize */

/* 166 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 168 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 172 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 174 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetItemByIndex */

/* 178 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0xc ),	/* 12 */
/* 186 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 192 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 194 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex */

/* 204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 206 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvtItem */

/* 210 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 212 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 214 */	NdrFcShort( 0x49c ),	/* Type Offset=1180 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetItemByIndex */

/* 222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0xd ),	/* 13 */
/* 230 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 236 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 238 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex */

/* 248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 250 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter vtItem */

/* 254 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 256 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 258 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Return value */

/* 260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 262 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveItemByIndex */

/* 266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0xe ),	/* 14 */
/* 274 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 280 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 282 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex */

/* 292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 294 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 300 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveItemsByValue */

/* 304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0xf ),	/* 15 */
/* 312 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 318 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 320 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x1 ),	/* 1 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vtItem */

/* 330 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 332 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 334 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Return value */

/* 336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 338 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clear */

/* 342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x10 ),	/* 16 */
/* 350 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 356 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 358 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 370 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Empty */

/* 374 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x11 ),	/* 17 */
/* 382 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x22 ),	/* 34 */
/* 388 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 390 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pvtbEmpty */

/* 400 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 402 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 404 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 408 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertItemBefore */

/* 412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0x12 ),	/* 18 */
/* 420 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 426 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 428 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex */

/* 438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 440 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter vtItem */

/* 444 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 446 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 448 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Return value */

/* 450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 452 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveItems */

/* 456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x13 ),	/* 19 */
/* 464 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 466 */	NdrFcShort( 0x10 ),	/* 16 */
/* 468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 470 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 472 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex1 */

/* 482 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 484 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lIndex2 */

/* 488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 490 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 496 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteFrom */

/* 500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x7 ),	/* 7 */
/* 508 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 510 */	NdrFcShort( 0x21 ),	/* 33 */
/* 512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 514 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 516 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */

/* 526 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 528 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 530 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter length */

/* 532 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 534 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 540 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteFromStream */

/* 544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 552 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 558 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 560 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pINCFStream */

/* 570 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 572 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 574 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Parameter length */

/* 576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 578 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 584 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadTo */

/* 588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x9 ),	/* 9 */
/* 596 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 598 */	NdrFcShort( 0x21 ),	/* 33 */
/* 600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 602 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 604 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */

/* 614 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 616 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 618 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter length */

/* 620 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 622 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 628 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadToStream */

/* 632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0xa ),	/* 10 */
/* 640 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 646 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 648 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pINCFStream */

/* 658 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 660 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 662 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Parameter length */

/* 664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 666 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 672 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DisplayType */


	/* Procedure put_CurrentReadPosition */


	/* Procedure put_CurrentReadPosition */

/* 676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 682 */	NdrFcShort( 0xb ),	/* 11 */
/* 684 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 690 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 692 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter displayType */


	/* Parameter position */


	/* Parameter position */

/* 702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 704 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 710 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DisplayType */


	/* Procedure get_CurrentReadPosition */


	/* Procedure get_CurrentReadPosition */

/* 714 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0xc ),	/* 12 */
/* 722 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x24 ),	/* 36 */
/* 728 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 730 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter displayType */


	/* Parameter position */


	/* Parameter position */

/* 740 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 742 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 746 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 748 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Permissions */


	/* Procedure put_Usage */


	/* Procedure put_CurrentWritePosition */


	/* Procedure put_CurrentWritePosition */

/* 752 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0xd ),	/* 13 */
/* 760 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 764 */	NdrFcShort( 0x8 ),	/* 8 */
/* 766 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 768 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter permissions */


	/* Parameter usage */


	/* Parameter position */


	/* Parameter position */

/* 778 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 780 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 786 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Permissions */


	/* Procedure get_Usage */


	/* Procedure get_CurrentWritePosition */


	/* Procedure get_CurrentWritePosition */

/* 790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0xe ),	/* 14 */
/* 798 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x24 ),	/* 36 */
/* 804 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 806 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter permissions */


	/* Parameter usage */


	/* Parameter position */


	/* Parameter position */

/* 816 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 818 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 824 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Close */


	/* Procedure Close */

/* 828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0xf ),	/* 15 */
/* 836 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 844 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 856 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MaxUses */


	/* Procedure get_Length */


	/* Procedure get_Length */

/* 860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x10 ),	/* 16 */
/* 868 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x24 ),	/* 36 */
/* 874 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 876 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxUses */


	/* Parameter length */


	/* Parameter length */

/* 886 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 888 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 894 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtractProtocol */


	/* Procedure NormalizePath */

/* 898 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x7 ),	/* 7 */
/* 906 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 912 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 914 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 916 */	NdrFcShort( 0x1 ),	/* 1 */
/* 918 */	NdrFcShort( 0x1 ),	/* 1 */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter url */


	/* Parameter path */

/* 924 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 926 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 928 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter protocol */


	/* Parameter new_path */

/* 930 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 932 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 934 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */


	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtractDomain */


	/* Procedure NormalizeExtension */

/* 942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 950 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 956 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 958 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 960 */	NdrFcShort( 0x1 ),	/* 1 */
/* 962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter url */


	/* Parameter extension */

/* 968 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 970 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 972 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter domain */


	/* Parameter new_extension */

/* 974 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 976 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 978 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */


	/* Return value */

/* 980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 982 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtractPort */


	/* Procedure ExtractPath */

/* 986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x9 ),	/* 9 */
/* 994 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1000 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1002 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter url */


	/* Parameter full_path */

/* 1012 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1014 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1016 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter port */


	/* Parameter path */

/* 1018 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1020 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1022 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */


	/* Return value */

/* 1024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1026 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtractPath */


	/* Procedure ExtractExtension */

/* 1030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0xa ),	/* 10 */
/* 1038 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1044 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1046 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1050 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter url */


	/* Parameter full_path */

/* 1056 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1058 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1060 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter path */


	/* Parameter extension */

/* 1062 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1064 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1066 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */


	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1070 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtractFilename */


	/* Procedure ExtractFilename */

/* 1074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0xb ),	/* 11 */
/* 1082 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1090 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1092 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter url */


	/* Parameter full_path */

/* 1100 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1102 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1104 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter filename */


	/* Parameter filename */

/* 1106 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1108 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1110 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */


	/* Return value */

/* 1112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1114 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtractBaseFilename */

/* 1118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0xc ),	/* 12 */
/* 1126 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1132 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1134 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1136 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter full_path */

/* 1144 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1148 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter base_filename */

/* 1150 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1154 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */

/* 1156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1158 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReplaceFilename */

/* 1162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0xd ),	/* 13 */
/* 1170 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1176 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1178 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1180 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter full_path */

/* 1188 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1190 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1192 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter new_file_name */

/* 1194 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1196 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1198 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter new_full_path */

/* 1200 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1202 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1204 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */

/* 1206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1208 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReplacePath */

/* 1212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0xe ),	/* 14 */
/* 1220 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1226 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1228 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1230 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1232 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter full_path */

/* 1238 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1240 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1242 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter new_path */

/* 1244 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1246 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1248 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter new_full_path */

/* 1250 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1252 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1254 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */

/* 1256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1258 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReplaceBaseFilename */

/* 1262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0xf ),	/* 15 */
/* 1270 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1276 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1278 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter full_path */

/* 1288 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1290 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1292 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter new_base_filename */

/* 1294 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1296 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1298 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter new_full_path */

/* 1300 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1302 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1304 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */

/* 1306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1308 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReplaceFileExtension */

/* 1312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1318 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1320 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1326 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1328 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1330 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter full_path */

/* 1338 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1340 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1342 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter new_file_extension */

/* 1344 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1346 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1348 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter new_full_path */

/* 1350 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1352 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1354 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */

/* 1356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1358 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReplaceVolume */

/* 1362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1370 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1376 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1378 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1380 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1382 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter full_path */

/* 1388 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1390 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1392 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter new_volume */

/* 1394 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1396 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1398 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter new_full_path */

/* 1400 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1402 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1404 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */

/* 1406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1408 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SplitFullPath */

/* 1412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1420 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1426 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1428 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1430 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter full_path */

/* 1438 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1440 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1442 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter volume */

/* 1444 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1446 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1448 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Parameter path */

/* 1450 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1452 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1454 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Parameter base_filename */

/* 1456 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1458 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1460 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Parameter file_extension */

/* 1462 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1464 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1466 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */

/* 1468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1470 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtractVolume */

/* 1474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1480 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1482 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1488 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1490 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1492 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter full_path */

/* 1500 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1502 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1504 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter volume */

/* 1506 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1508 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1510 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */

/* 1512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1514 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SplitURL */

/* 1518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0xc ),	/* 12 */
/* 1526 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1532 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1534 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1536 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1538 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter url */

/* 1544 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1546 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1548 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter protocol */

/* 1550 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1552 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1554 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Parameter domain */

/* 1556 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1558 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1560 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Parameter port */

/* 1562 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1564 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1566 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Parameter path */

/* 1568 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1570 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1572 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Parameter filename */

/* 1574 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1576 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1578 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */

/* 1580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1582 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Encode */

/* 1586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1592 */	NdrFcShort( 0xd ),	/* 13 */
/* 1594 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1600 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1602 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1604 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1606 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter url */

/* 1612 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1614 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1616 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter urlEncoded */

/* 1618 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1620 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1622 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */

/* 1624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1626 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTempFilename */


	/* Procedure Decode */

/* 1630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0xe ),	/* 14 */
/* 1638 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1644 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1646 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1648 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1650 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter extension */


	/* Parameter url */

/* 1656 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1658 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1660 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter filename */


	/* Parameter urlDecoded */

/* 1662 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1664 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1666 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */


	/* Return value */

/* 1668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1670 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_NetName */


	/* Procedure Create */


	/* Procedure WriteLine */

/* 1674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1680 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1682 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1688 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1690 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1694 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter netName */


	/* Parameter directory */


	/* Parameter text */

/* 1700 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1702 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1704 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1708 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Delete */


	/* Procedure WriteString */

/* 1712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1720 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1726 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1728 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1732 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1736 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter directory */


	/* Parameter text */

/* 1738 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1740 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1742 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */


	/* Return value */

/* 1744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1746 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadLine */

/* 1750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1756 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1758 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1764 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1766 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1774 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pText */

/* 1776 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1778 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1780 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */

/* 1782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1784 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadAllLines */

/* 1788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1794 */	NdrFcShort( 0xa ),	/* 10 */
/* 1796 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1802 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1804 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pINCFCollectionList */

/* 1814 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1816 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1818 */	NdrFcShort( 0x4e4 ),	/* Type Offset=1252 */

	/* Return value */

/* 1820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1822 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateOrOpen */

/* 1826 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1834 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1840 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1842 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 1852 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1854 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1856 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter ppINCFFileStream */

/* 1858 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1860 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1862 */	NdrFcShort( 0x4fa ),	/* Type Offset=1274 */

	/* Return value */

/* 1864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1866 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateOrOpenText */

/* 1870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1878 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1884 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1886 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 1896 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1898 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1900 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter ppINCFStringStream */

/* 1902 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1904 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1906 */	NdrFcShort( 0x510 ),	/* Type Offset=1296 */

	/* Return value */

/* 1908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1910 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateNew */

/* 1914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1920 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1922 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1928 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1930 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 1940 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1942 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1944 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter ppINCFFileStream */

/* 1946 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1948 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1950 */	NdrFcShort( 0x4fa ),	/* Type Offset=1274 */

	/* Return value */

/* 1952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1954 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateNewText */

/* 1958 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0xa ),	/* 10 */
/* 1966 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1970 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1972 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1974 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 1984 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1986 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1988 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter ppINCFStringStream */

/* 1990 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1992 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1994 */	NdrFcShort( 0x510 ),	/* Type Offset=1296 */

	/* Return value */

/* 1996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1998 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Exists */

/* 2002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2008 */	NdrFcShort( 0xb ),	/* 11 */
/* 2010 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2016 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2018 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 2028 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2030 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2032 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter status */

/* 2034 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2036 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2038 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2042 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Delete */

/* 2046 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0xc ),	/* 12 */
/* 2054 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2060 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2062 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2066 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 2072 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2074 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2076 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */

/* 2078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2080 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumerateFiles */

/* 2084 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2090 */	NdrFcShort( 0xd ),	/* 13 */
/* 2092 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2098 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2100 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2104 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2108 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter directory */

/* 2110 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2112 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2114 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter pattern */

/* 2116 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2118 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2120 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter ppINCFCollectionList */

/* 2122 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2124 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2126 */	NdrFcShort( 0x4e4 ),	/* Type Offset=1252 */

	/* Return value */

/* 2128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2130 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Exists */

/* 2134 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2140 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2142 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2146 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2148 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2150 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter directory */

/* 2160 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2162 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2164 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter status */

/* 2166 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2168 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2170 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2172 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2174 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumerateNetworkShares */


	/* Procedure EnumerateDirectories */

/* 2178 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0xa ),	/* 10 */
/* 2186 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2192 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2194 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteName */


	/* Parameter directory */

/* 2204 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2206 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2208 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter ppINCFCollectionList */


	/* Parameter ppINCFCollectionList */

/* 2210 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2212 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2214 */	NdrFcShort( 0x4e4 ),	/* Type Offset=1252 */

	/* Return value */


	/* Return value */

/* 2216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2218 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTempDirectory */

/* 2222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2228 */	NdrFcShort( 0xb ),	/* 11 */
/* 2230 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2236 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2238 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter directory */

/* 2248 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2250 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2252 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */

/* 2254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2256 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Remark */


	/* Procedure GetProgramDataDirectory */

/* 2260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2266 */	NdrFcShort( 0xc ),	/* 12 */
/* 2268 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2274 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2276 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remark */


	/* Parameter directory */

/* 2286 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2288 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2290 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */


	/* Return value */

/* 2292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2294 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Scope */

/* 2298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2306 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2312 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2314 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter scope */

/* 2324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2326 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2332 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Scope */

/* 2336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2344 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2348 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2350 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2352 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter scope */

/* 2362 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2364 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2370 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Type */


	/* Procedure put_Type */

/* 2374 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2380 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2382 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2388 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2390 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */


	/* Parameter type */

/* 2400 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2402 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2408 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Type */


	/* Procedure get_Type */

/* 2412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2418 */	NdrFcShort( 0xa ),	/* 10 */
/* 2420 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2426 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2428 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */


	/* Parameter type */

/* 2438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2440 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2446 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_LocalName */

/* 2450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2456 */	NdrFcShort( 0xf ),	/* 15 */
/* 2458 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2464 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2466 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2470 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter localName */

/* 2476 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2478 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2480 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */

/* 2482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2484 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LocalName */

/* 2488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2494 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2496 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2502 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2504 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter localName */

/* 2514 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2516 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2518 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */

/* 2520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2522 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RemoteName */

/* 2526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2532 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2534 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2540 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2542 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2546 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteName */

/* 2552 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2554 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2556 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */

/* 2558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2560 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RemoteName */

/* 2564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2570 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2572 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2578 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2580 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2582 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteName */

/* 2590 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2592 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2594 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */

/* 2596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2598 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Path */


	/* Procedure put_Comment */

/* 2602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2608 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2610 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2614 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2616 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2618 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */


	/* Parameter comment */

/* 2628 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2630 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2632 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */


	/* Return value */

/* 2634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2636 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Path */


	/* Procedure get_Comment */

/* 2640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2646 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2648 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2654 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2656 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2658 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */


	/* Parameter comment */

/* 2666 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2668 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2670 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */


	/* Return value */

/* 2672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2674 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Password */


	/* Procedure put_Provider */

/* 2678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2684 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2686 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2692 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2694 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2698 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter password */


	/* Parameter provider */

/* 2704 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2706 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2708 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */


	/* Return value */

/* 2710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2712 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Password */


	/* Procedure get_Provider */

/* 2716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2722 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2724 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2730 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2732 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2734 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2740 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter password */


	/* Parameter provider */

/* 2742 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2744 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2746 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */


	/* Return value */

/* 2748 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2750 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConnectUNC */

/* 2754 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2760 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2762 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2764 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2766 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2768 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2770 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2774 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteName */

/* 2780 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2782 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2784 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter username */

/* 2786 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2788 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2790 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter password */

/* 2792 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2794 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2796 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Parameter rememberOnLogin */

/* 2798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2800 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2802 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter status */

/* 2804 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2806 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2808 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2812 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumerateAllNetworkResources */

/* 2816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2824 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2830 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2832 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppINCFCollectionList */

/* 2842 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2844 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2846 */	NdrFcShort( 0x4e4 ),	/* Type Offset=1252 */

	/* Return value */

/* 2848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2850 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumerateNetworkResources */

/* 2854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2860 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2862 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2868 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2870 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pINCFNetworkResource */

/* 2880 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2882 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2884 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */

	/* Parameter ppINCFCollectionList */

/* 2886 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2888 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2890 */	NdrFcShort( 0x4e4 ),	/* Type Offset=1252 */

	/* Return value */

/* 2892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2894 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NetName */

/* 2898 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2906 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2912 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2914 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2916 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter netName */

/* 2924 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2926 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2928 */	NdrFcShort( 0x4d2 ),	/* Type Offset=1234 */

	/* Return value */

/* 2930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2932 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Remark */

/* 2936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2942 */	NdrFcShort( 0xb ),	/* 11 */
/* 2944 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2950 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2952 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2956 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remark */

/* 2962 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2964 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2966 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */

/* 2968 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2970 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MaxUses */

/* 2974 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2980 */	NdrFcShort( 0xf ),	/* 15 */
/* 2982 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2988 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2990 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxUses */

/* 3000 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3002 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3008 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CurrentUses */

/* 3012 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3018 */	NdrFcShort( 0x11 ),	/* 17 */
/* 3020 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3026 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3028 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter currentUses */

/* 3038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3040 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3046 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentUses */

/* 3050 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3056 */	NdrFcShort( 0x12 ),	/* 18 */
/* 3058 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3062 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3064 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3066 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter currentUses */

/* 3076 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3078 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3084 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ItSoftwareNCFIO_MIDL_TYPE_FORMAT_STRING ItSoftwareNCFIO__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x0,	/* FC_RP */
/*  4 */	NdrFcShort( 0x482 ),	/* Offset= 1154 (1158) */
/*  6 */	
			0x12, 0x0,	/* FC_UP */
/*  8 */	NdrFcShort( 0x46a ),	/* Offset= 1130 (1138) */
/* 10 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 12 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 14 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 16 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 18 */	0x0 , 
			0x0,		/* 0 */
/* 20 */	NdrFcLong( 0x0 ),	/* 0 */
/* 24 */	NdrFcLong( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x2 ),	/* Offset= 2 (30) */
/* 30 */	NdrFcShort( 0x10 ),	/* 16 */
/* 32 */	NdrFcShort( 0x2f ),	/* 47 */
/* 34 */	NdrFcLong( 0x14 ),	/* 20 */
/* 38 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 40 */	NdrFcLong( 0x3 ),	/* 3 */
/* 44 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 46 */	NdrFcLong( 0x11 ),	/* 17 */
/* 50 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 52 */	NdrFcLong( 0x2 ),	/* 2 */
/* 56 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 58 */	NdrFcLong( 0x4 ),	/* 4 */
/* 62 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 64 */	NdrFcLong( 0x5 ),	/* 5 */
/* 68 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 70 */	NdrFcLong( 0xb ),	/* 11 */
/* 74 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 76 */	NdrFcLong( 0xa ),	/* 10 */
/* 80 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 82 */	NdrFcLong( 0x6 ),	/* 6 */
/* 86 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (318) */
/* 88 */	NdrFcLong( 0x7 ),	/* 7 */
/* 92 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 94 */	NdrFcLong( 0x8 ),	/* 8 */
/* 98 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (324) */
/* 100 */	NdrFcLong( 0xd ),	/* 13 */
/* 104 */	NdrFcShort( 0x100 ),	/* Offset= 256 (360) */
/* 106 */	NdrFcLong( 0x9 ),	/* 9 */
/* 110 */	NdrFcShort( 0x10c ),	/* Offset= 268 (378) */
/* 112 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 116 */	NdrFcShort( 0x118 ),	/* Offset= 280 (396) */
/* 118 */	NdrFcLong( 0x24 ),	/* 36 */
/* 122 */	NdrFcShort( 0x3ae ),	/* Offset= 942 (1064) */
/* 124 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 128 */	NdrFcShort( 0x3a8 ),	/* Offset= 936 (1064) */
/* 130 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 134 */	NdrFcShort( 0x3a6 ),	/* Offset= 934 (1068) */
/* 136 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 140 */	NdrFcShort( 0x3a4 ),	/* Offset= 932 (1072) */
/* 142 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 146 */	NdrFcShort( 0x3a2 ),	/* Offset= 930 (1076) */
/* 148 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 152 */	NdrFcShort( 0x3a0 ),	/* Offset= 928 (1080) */
/* 154 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 158 */	NdrFcShort( 0x39e ),	/* Offset= 926 (1084) */
/* 160 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 164 */	NdrFcShort( 0x39c ),	/* Offset= 924 (1088) */
/* 166 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 170 */	NdrFcShort( 0x386 ),	/* Offset= 902 (1072) */
/* 172 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 176 */	NdrFcShort( 0x384 ),	/* Offset= 900 (1076) */
/* 178 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 182 */	NdrFcShort( 0x38e ),	/* Offset= 910 (1092) */
/* 184 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 188 */	NdrFcShort( 0x384 ),	/* Offset= 900 (1088) */
/* 190 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 194 */	NdrFcShort( 0x386 ),	/* Offset= 902 (1096) */
/* 196 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 200 */	NdrFcShort( 0x384 ),	/* Offset= 900 (1100) */
/* 202 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 206 */	NdrFcShort( 0x382 ),	/* Offset= 898 (1104) */
/* 208 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 212 */	NdrFcShort( 0x380 ),	/* Offset= 896 (1108) */
/* 214 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 218 */	NdrFcShort( 0x37e ),	/* Offset= 894 (1112) */
/* 220 */	NdrFcLong( 0x10 ),	/* 16 */
/* 224 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 226 */	NdrFcLong( 0x12 ),	/* 18 */
/* 230 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 232 */	NdrFcLong( 0x13 ),	/* 19 */
/* 236 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 238 */	NdrFcLong( 0x15 ),	/* 21 */
/* 242 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 244 */	NdrFcLong( 0x16 ),	/* 22 */
/* 248 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 250 */	NdrFcLong( 0x17 ),	/* 23 */
/* 254 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 256 */	NdrFcLong( 0xe ),	/* 14 */
/* 260 */	NdrFcShort( 0x35c ),	/* Offset= 860 (1120) */
/* 262 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 266 */	NdrFcShort( 0x360 ),	/* Offset= 864 (1130) */
/* 268 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 272 */	NdrFcShort( 0x35e ),	/* Offset= 862 (1134) */
/* 274 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 278 */	NdrFcShort( 0x31a ),	/* Offset= 794 (1072) */
/* 280 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 284 */	NdrFcShort( 0x318 ),	/* Offset= 792 (1076) */
/* 286 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 290 */	NdrFcShort( 0x316 ),	/* Offset= 790 (1080) */
/* 292 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 296 */	NdrFcShort( 0x30c ),	/* Offset= 780 (1076) */
/* 298 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 302 */	NdrFcShort( 0x306 ),	/* Offset= 774 (1076) */
/* 304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* Offset= 0 (308) */
/* 310 */	NdrFcLong( 0x1 ),	/* 1 */
/* 314 */	NdrFcShort( 0x0 ),	/* Offset= 0 (314) */
/* 316 */	NdrFcShort( 0xffff ),	/* Offset= -1 (315) */
/* 318 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 322 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 324 */	
			0x12, 0x0,	/* FC_UP */
/* 326 */	NdrFcShort( 0x18 ),	/* Offset= 24 (350) */
/* 328 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 330 */	NdrFcShort( 0x2 ),	/* 2 */
/* 332 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 334 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 336 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 338 */	0x0 , 
			0x0,		/* 0 */
/* 340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 350 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 354 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (328) */
/* 356 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 358 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 360 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 372 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 374 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 376 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 378 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 380 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 390 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 392 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 394 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 396 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 398 */	NdrFcShort( 0x2 ),	/* Offset= 2 (400) */
/* 400 */	
			0x12, 0x0,	/* FC_UP */
/* 402 */	NdrFcShort( 0x284 ),	/* Offset= 644 (1046) */
/* 404 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 406 */	NdrFcShort( 0x20 ),	/* 32 */
/* 408 */	NdrFcShort( 0xa ),	/* 10 */
/* 410 */	NdrFcLong( 0x8 ),	/* 8 */
/* 414 */	NdrFcShort( 0x64 ),	/* Offset= 100 (514) */
/* 416 */	NdrFcLong( 0xd ),	/* 13 */
/* 420 */	NdrFcShort( 0x98 ),	/* Offset= 152 (572) */
/* 422 */	NdrFcLong( 0x9 ),	/* 9 */
/* 426 */	NdrFcShort( 0xcc ),	/* Offset= 204 (630) */
/* 428 */	NdrFcLong( 0xc ),	/* 12 */
/* 432 */	NdrFcShort( 0x100 ),	/* Offset= 256 (688) */
/* 434 */	NdrFcLong( 0x24 ),	/* 36 */
/* 438 */	NdrFcShort( 0x170 ),	/* Offset= 368 (806) */
/* 440 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 444 */	NdrFcShort( 0x18c ),	/* Offset= 396 (840) */
/* 446 */	NdrFcLong( 0x10 ),	/* 16 */
/* 450 */	NdrFcShort( 0x1b0 ),	/* Offset= 432 (882) */
/* 452 */	NdrFcLong( 0x2 ),	/* 2 */
/* 456 */	NdrFcShort( 0x1d0 ),	/* Offset= 464 (920) */
/* 458 */	NdrFcLong( 0x3 ),	/* 3 */
/* 462 */	NdrFcShort( 0x1f0 ),	/* Offset= 496 (958) */
/* 464 */	NdrFcLong( 0x14 ),	/* 20 */
/* 468 */	NdrFcShort( 0x210 ),	/* Offset= 528 (996) */
/* 470 */	NdrFcShort( 0xffff ),	/* Offset= -1 (469) */
/* 472 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 482 */	0x0 , 
			0x0,		/* 0 */
/* 484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 496 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 498 */	0x0 , 
			0x0,		/* 0 */
/* 500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 508 */	
			0x12, 0x0,	/* FC_UP */
/* 510 */	NdrFcShort( 0xff60 ),	/* Offset= -160 (350) */
/* 512 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 514 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 516 */	NdrFcShort( 0x10 ),	/* 16 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x6 ),	/* Offset= 6 (526) */
/* 522 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 524 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 526 */	
			0x11, 0x0,	/* FC_RP */
/* 528 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (472) */
/* 530 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 540 */	0x0 , 
			0x0,		/* 0 */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 550 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 554 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 556 */	0x0 , 
			0x0,		/* 0 */
/* 558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 566 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 568 */	NdrFcShort( 0xff30 ),	/* Offset= -208 (360) */
/* 570 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 572 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 574 */	NdrFcShort( 0x10 ),	/* 16 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x6 ),	/* Offset= 6 (584) */
/* 580 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 582 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 584 */	
			0x11, 0x0,	/* FC_RP */
/* 586 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (530) */
/* 588 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 598 */	0x0 , 
			0x0,		/* 0 */
/* 600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 608 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 612 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 614 */	0x0 , 
			0x0,		/* 0 */
/* 616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 624 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 626 */	NdrFcShort( 0xff08 ),	/* Offset= -248 (378) */
/* 628 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 630 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 632 */	NdrFcShort( 0x10 ),	/* 16 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x6 ),	/* Offset= 6 (642) */
/* 638 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 640 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 642 */	
			0x11, 0x0,	/* FC_RP */
/* 644 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (588) */
/* 646 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 656 */	0x0 , 
			0x0,		/* 0 */
/* 658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 666 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 670 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 672 */	0x0 , 
			0x0,		/* 0 */
/* 674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 682 */	
			0x12, 0x0,	/* FC_UP */
/* 684 */	NdrFcShort( 0x1c6 ),	/* Offset= 454 (1138) */
/* 686 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 688 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 690 */	NdrFcShort( 0x10 ),	/* 16 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x6 ),	/* Offset= 6 (700) */
/* 696 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 698 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 700 */	
			0x11, 0x0,	/* FC_RP */
/* 702 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (646) */
/* 704 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 706 */	NdrFcLong( 0x2f ),	/* 47 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 716 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 718 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 720 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 722 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 726 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 728 */	NdrFcShort( 0x4 ),	/* 4 */
/* 730 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 732 */	0x0 , 
			0x0,		/* 0 */
/* 734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 742 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 744 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 746 */	NdrFcShort( 0x18 ),	/* 24 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0xa ),	/* Offset= 10 (760) */
/* 752 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 754 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 756 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (704) */
/* 758 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 760 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 762 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (722) */
/* 764 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 774 */	0x0 , 
			0x0,		/* 0 */
/* 776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 784 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 788 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 790 */	0x0 , 
			0x0,		/* 0 */
/* 792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 800 */	
			0x12, 0x0,	/* FC_UP */
/* 802 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (744) */
/* 804 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 806 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 808 */	NdrFcShort( 0x10 ),	/* 16 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x6 ),	/* Offset= 6 (818) */
/* 814 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 816 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 818 */	
			0x11, 0x0,	/* FC_RP */
/* 820 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (764) */
/* 822 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 826 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 828 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 830 */	NdrFcShort( 0x10 ),	/* 16 */
/* 832 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 834 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 836 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (822) */
			0x5b,		/* FC_END */
/* 840 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 842 */	NdrFcShort( 0x20 ),	/* 32 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0xa ),	/* Offset= 10 (856) */
/* 848 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 850 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 852 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (828) */
			0x5b,		/* FC_END */
/* 856 */	
			0x11, 0x0,	/* FC_RP */
/* 858 */	NdrFcShort( 0xfeb8 ),	/* Offset= -328 (530) */
/* 860 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 862 */	NdrFcShort( 0x1 ),	/* 1 */
/* 864 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 870 */	0x0 , 
			0x0,		/* 0 */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 880 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 882 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 884 */	NdrFcShort( 0x10 ),	/* 16 */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0x6 ),	/* Offset= 6 (894) */
/* 890 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 892 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 894 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 896 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (860) */
/* 898 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 900 */	NdrFcShort( 0x2 ),	/* 2 */
/* 902 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 908 */	0x0 , 
			0x0,		/* 0 */
/* 910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 918 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 920 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 922 */	NdrFcShort( 0x10 ),	/* 16 */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x6 ),	/* Offset= 6 (932) */
/* 928 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 930 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 932 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 934 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (898) */
/* 936 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 938 */	NdrFcShort( 0x4 ),	/* 4 */
/* 940 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 946 */	0x0 , 
			0x0,		/* 0 */
/* 948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 956 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 958 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 960 */	NdrFcShort( 0x10 ),	/* 16 */
/* 962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x6 ),	/* Offset= 6 (970) */
/* 966 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 968 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 970 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 972 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (936) */
/* 974 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 978 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 984 */	0x0 , 
			0x0,		/* 0 */
/* 986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 994 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 996 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 998 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1008) */
/* 1004 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1006 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1008 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1010 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (974) */
/* 1012 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1016 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1018 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1020 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1024 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1026 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 1028 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1030 */	0x0 , 
			0x0,		/* 0 */
/* 1032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1040 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1042 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1012) */
/* 1044 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1046 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1048 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1050 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1020) */
/* 1052 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1052) */
/* 1054 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1056 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1058 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1060 */	0x0,		/* 0 */
			NdrFcShort( 0xfd6f ),	/* Offset= -657 (404) */
			0x5b,		/* FC_END */
/* 1064 */	
			0x12, 0x0,	/* FC_UP */
/* 1066 */	NdrFcShort( 0xfebe ),	/* Offset= -322 (744) */
/* 1068 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1070 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1072 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1074 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1076 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1078 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1080 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1082 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1084 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1086 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1088 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1090 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1092 */	
			0x12, 0x0,	/* FC_UP */
/* 1094 */	NdrFcShort( 0xfcf8 ),	/* Offset= -776 (318) */
/* 1096 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1098 */	NdrFcShort( 0xfcfa ),	/* Offset= -774 (324) */
/* 1100 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1102 */	NdrFcShort( 0xfd1a ),	/* Offset= -742 (360) */
/* 1104 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1106 */	NdrFcShort( 0xfd28 ),	/* Offset= -728 (378) */
/* 1108 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1110 */	NdrFcShort( 0xfd36 ),	/* Offset= -714 (396) */
/* 1112 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1114 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1116) */
/* 1116 */	
			0x12, 0x0,	/* FC_UP */
/* 1118 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1138) */
/* 1120 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1122 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1124 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1126 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1128 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1130 */	
			0x12, 0x0,	/* FC_UP */
/* 1132 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1120) */
/* 1134 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1136 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1138 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1140 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1144) */
/* 1146 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1148 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1150 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1152 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1154 */	NdrFcShort( 0xfb88 ),	/* Offset= -1144 (10) */
/* 1156 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1158 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0xfb78 ),	/* Offset= -1160 (6) */
/* 1168 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1170 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1172 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1174 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1180) */
/* 1176 */	
			0x13, 0x0,	/* FC_OP */
/* 1178 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1138) */
/* 1180 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1184 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1176) */
/* 1190 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1192 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1194 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1196 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1198 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1200 */	NdrFcLong( 0x40ce1ccd ),	/* 1087249613 */
/* 1204 */	NdrFcShort( 0xa99c ),	/* -22116 */
/* 1206 */	NdrFcShort( 0x4a34 ),	/* 18996 */
/* 1208 */	0xb2,		/* 178 */
			0x85,		/* 133 */
/* 1210 */	0x4c,		/* 76 */
			0x12,		/* 18 */
/* 1212 */	0x2c,		/* 44 */
			0x8d,		/* 141 */
/* 1214 */	0x50,		/* 80 */
			0x18,		/* 24 */
/* 1216 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1218 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1220 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0xfc7c ),	/* Offset= -900 (324) */
/* 1226 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1228 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1234) */
/* 1230 */	
			0x13, 0x0,	/* FC_OP */
/* 1232 */	NdrFcShort( 0xfc8e ),	/* Offset= -882 (350) */
/* 1234 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1236 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1230) */
/* 1244 */	
			0x11, 0x0,	/* FC_RP */
/* 1246 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1234) */
/* 1248 */	
			0x11, 0x0,	/* FC_RP */
/* 1250 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1216) */
/* 1252 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1254 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1256) */
/* 1256 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1258 */	NdrFcLong( 0x493378e5 ),	/* 1228110053 */
/* 1262 */	NdrFcShort( 0x71c6 ),	/* 29126 */
/* 1264 */	NdrFcShort( 0x4aca ),	/* 19146 */
/* 1266 */	0xac,		/* 172 */
			0xb4,		/* 180 */
/* 1268 */	0xb2,		/* 178 */
			0x8d,		/* 141 */
/* 1270 */	0x26,		/* 38 */
			0x95,		/* 149 */
/* 1272 */	0xba,		/* 186 */
			0x33,		/* 51 */
/* 1274 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1276 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1278) */
/* 1278 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1280 */	NdrFcLong( 0x5968d6dd ),	/* 1500042973 */
/* 1284 */	NdrFcShort( 0x23f ),	/* 575 */
/* 1286 */	NdrFcShort( 0x4e7f ),	/* 20095 */
/* 1288 */	0xa0,		/* 160 */
			0x1,		/* 1 */
/* 1290 */	0x12,		/* 18 */
			0x42,		/* 66 */
/* 1292 */	0xa7,		/* 167 */
			0xad,		/* 173 */
/* 1294 */	0x86,		/* 134 */
			0x10,		/* 16 */
/* 1296 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1298 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1300) */
/* 1300 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1302 */	NdrFcLong( 0x364a7ee0 ),	/* 910851808 */
/* 1306 */	NdrFcShort( 0x8a6a ),	/* -30102 */
/* 1308 */	NdrFcShort( 0x47e5 ),	/* 18405 */
/* 1310 */	0x89,		/* 137 */
			0xe9,		/* 233 */
/* 1312 */	0x99,		/* 153 */
			0x79,		/* 121 */
/* 1314 */	0xa4,		/* 164 */
			0xe5,		/* 229 */
/* 1316 */	0xf,		/* 15 */
			0xc6,		/* 198 */
/* 1318 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1320 */	NdrFcLong( 0x75034b4 ),	/* 122696884 */
/* 1324 */	NdrFcShort( 0x2dec ),	/* 11756 */
/* 1326 */	NdrFcShort( 0x47c3 ),	/* 18371 */
/* 1328 */	0xbe,		/* 190 */
			0xc2,		/* 194 */
/* 1330 */	0xed,		/* 237 */
			0xfc,		/* 252 */
/* 1332 */	0x45,		/* 69 */
			0xf6,		/* 246 */
/* 1334 */	0x19,		/* 25 */
			0x50,		/* 80 */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            },
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: INCFCollectionList, ver. 0.0,
   GUID={0x493378E5,0x71C6,0x4ACA,{0xAC,0xB4,0xB2,0x8D,0x26,0x95,0xBA,0x33}} */

#pragma code_seg(".orpc")
static const unsigned short INCFCollectionList_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    38,
    76,
    108,
    140,
    178,
    222,
    266,
    304,
    342,
    374,
    412,
    456
    };



/* Object interface: INCFStream, ver. 0.0,
   GUID={0x40CE1CCD,0xA99C,0x4A34,{0xB2,0x85,0x4C,0x12,0x2C,0x8D,0x50,0x18}} */

#pragma code_seg(".orpc")
static const unsigned short INCFStream_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    500,
    544,
    588,
    632,
    676,
    714,
    752,
    790,
    828,
    860
    };



/* Object interface: INCFPath, ver. 0.0,
   GUID={0xA3713788,0x8456,0x4F2A,{0xA3,0x2A,0xC0,0x66,0x05,0x3F,0x3D,0x0E}} */

#pragma code_seg(".orpc")
static const unsigned short INCFPath_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    898,
    942,
    986,
    1030,
    1074,
    1118,
    1162,
    1212,
    1262,
    1312,
    1362,
    1412,
    1474
    };



/* Object interface: INCFUrl, ver. 0.0,
   GUID={0x6F8876A9,0xCED1,0x4AD3,{0xA3,0xDE,0x5A,0xCF,0x10,0x36,0xEA,0x85}} */

#pragma code_seg(".orpc")
static const unsigned short INCFUrl_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    898,
    942,
    986,
    1030,
    1074,
    1518,
    1586,
    1630
    };



/* Object interface: INCFStringStream, ver. 0.0,
   GUID={0x364A7EE0,0x8A6A,0x47E5,{0x89,0xE9,0x99,0x79,0xA4,0xE5,0x0F,0xC6}} */

#pragma code_seg(".orpc")
static const unsigned short INCFStringStream_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1674,
    1712,
    1750,
    1788,
    676,
    714,
    752,
    790,
    828,
    860
    };



/* Object interface: INCFFileStream, ver. 0.0,
   GUID={0x5968D6DD,0x023F,0x4E7F,{0xA0,0x01,0x12,0x42,0xA7,0xAD,0x86,0x10}} */

#pragma code_seg(".orpc")
static const unsigned short INCFFileStream_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    500,
    544,
    588,
    632,
    676,
    714,
    752,
    790,
    828,
    860,
    0
    };



/* Object interface: INCFMemoryStream, ver. 0.0,
   GUID={0x9545C638,0xEDE8,0x499F,{0xAE,0x37,0xEC,0xF2,0x31,0xC9,0xE1,0x11}} */

#pragma code_seg(".orpc")
static const unsigned short INCFMemoryStream_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    500,
    544,
    588,
    632,
    676,
    714,
    752,
    790,
    828,
    860,
    0
    };



/* Object interface: INCFFile, ver. 0.0,
   GUID={0x1B5CE1F3,0xD493,0x4715,{0x93,0x7D,0xD6,0x82,0xE1,0x04,0x0A,0x43}} */

#pragma code_seg(".orpc")
static const unsigned short INCFFile_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1826,
    1870,
    1914,
    1958,
    2002,
    2046,
    2084,
    1630
    };



/* Object interface: INCFDirectory, ver. 0.0,
   GUID={0xF9E1A9EF,0xFFB4,0x4AE7,{0x85,0xA2,0xA9,0xE1,0x68,0x96,0x83,0xA1}} */

#pragma code_seg(".orpc")
static const unsigned short INCFDirectory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1674,
    1712,
    2134,
    2178,
    2222,
    2260
    };



/* Object interface: INCFNetworkResource, ver. 0.0,
   GUID={0x075034B4,0x2DEC,0x47C3,{0xBE,0xC2,0xED,0xFC,0x45,0xF6,0x19,0x50}} */

#pragma code_seg(".orpc")
static const unsigned short INCFNetworkResource_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2298,
    2336,
    2374,
    2412,
    676,
    714,
    752,
    790,
    2450,
    2488,
    2526,
    2564,
    2602,
    2640,
    2678,
    2716
    };



/* Object interface: INCFNetwork, ver. 0.0,
   GUID={0x5181F2B6,0x7417,0x482A,{0xA9,0x07,0xC5,0x46,0x51,0x33,0xB2,0xC7}} */

#pragma code_seg(".orpc")
static const unsigned short INCFNetwork_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2754,
    2816,
    2854,
    2178
    };



/* Object interface: INCFNetworkShare, ver. 0.0,
   GUID={0xAFFFF835,0x169A,0x434B,{0xAD,0x2E,0x65,0xAB,0x75,0xB0,0x1D,0x0C}} */

#pragma code_seg(".orpc")
static const unsigned short INCFNetworkShare_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1674,
    2898,
    2374,
    2412,
    2936,
    2260,
    752,
    790,
    2974,
    860,
    3012,
    3050,
    2602,
    2640,
    2678,
    2716
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)



extern const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
NDR64_FORMAT_CHAR
__midl_frag698_t;
extern const __midl_frag698_t __midl_frag698;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag697_t;
extern const __midl_frag697_t __midl_frag697;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag696_t;
extern const __midl_frag696_t __midl_frag696;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag695_t;
extern const __midl_frag695_t __midl_frag695;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag694_t;
extern const __midl_frag694_t __midl_frag694;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag692_t;
extern const __midl_frag692_t __midl_frag692;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag691_t;
extern const __midl_frag691_t __midl_frag691;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag690_t;
extern const __midl_frag690_t __midl_frag690;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag678_t;
extern const __midl_frag678_t __midl_frag678;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag677_t;
extern const __midl_frag677_t __midl_frag677;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag674_t;
extern const __midl_frag674_t __midl_frag674;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag633_t;
extern const __midl_frag633_t __midl_frag633;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag632_t;
extern const __midl_frag632_t __midl_frag632;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag631_t;
extern const __midl_frag631_t __midl_frag631;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag628_t;
extern const __midl_frag628_t __midl_frag628;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag623_t;
extern const __midl_frag623_t __midl_frag623;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag622_t;
extern const __midl_frag622_t __midl_frag622;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag621_t;
extern const __midl_frag621_t __midl_frag621;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag616_t;
extern const __midl_frag616_t __midl_frag616;

typedef 
NDR64_FORMAT_CHAR
__midl_frag614_t;
extern const __midl_frag614_t __midl_frag614;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag613_t;
extern const __midl_frag613_t __midl_frag613;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag605_t;
extern const __midl_frag605_t __midl_frag605;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag518_t;
extern const __midl_frag518_t __midl_frag518;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag503_t;
extern const __midl_frag503_t __midl_frag503;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag494_t;
extern const __midl_frag494_t __midl_frag494;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag482_t;
extern const __midl_frag482_t __midl_frag482;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag481_t;
extern const __midl_frag481_t __midl_frag481;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag480_t;
extern const __midl_frag480_t __midl_frag480;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag477_t;
extern const __midl_frag477_t __midl_frag477;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag475_t;
extern const __midl_frag475_t __midl_frag475;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag474_t;
extern const __midl_frag474_t __midl_frag474;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag473_t;
extern const __midl_frag473_t __midl_frag473;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag470_t;
extern const __midl_frag470_t __midl_frag470;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
}
__midl_frag450_t;
extern const __midl_frag450_t __midl_frag450;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag427_t;
extern const __midl_frag427_t __midl_frag427;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag426_t;
extern const __midl_frag426_t __midl_frag426;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag397_t;
extern const __midl_frag397_t __midl_frag397;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag385_t;
extern const __midl_frag385_t __midl_frag385;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag327_t;
extern const __midl_frag327_t __midl_frag327;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag318_t;
extern const __midl_frag318_t __midl_frag318;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag217_t;
extern const __midl_frag217_t __midl_frag217;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag216_t;
extern const __midl_frag216_t __midl_frag216;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag215_t;
extern const __midl_frag215_t __midl_frag215;

typedef 
NDR64_FORMAT_CHAR
__midl_frag212_t;
extern const __midl_frag212_t __midl_frag212;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag211_t;
extern const __midl_frag211_t __midl_frag211;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag210_t;
extern const __midl_frag210_t __midl_frag210;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag196_t;
extern const __midl_frag196_t __midl_frag196;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag194_t;
extern const __midl_frag194_t __midl_frag194;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag193_t;
extern const __midl_frag193_t __midl_frag193;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag192_t;
extern const __midl_frag192_t __midl_frag192;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag190_t;
extern const __midl_frag190_t __midl_frag190;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag186_t;
extern const __midl_frag186_t __midl_frag186;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag179_t;
extern const __midl_frag179_t __midl_frag179;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag168_t;
extern const __midl_frag168_t __midl_frag168;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag167_t;
extern const __midl_frag167_t __midl_frag167;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag166_t;
extern const __midl_frag166_t __midl_frag166;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag164_t;
extern const __midl_frag164_t __midl_frag164;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag148_t;
extern const __midl_frag148_t __midl_frag148;

typedef 
NDR64_FORMAT_CHAR
__midl_frag145_t;
extern const __midl_frag145_t __midl_frag145;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag144_t;
extern const __midl_frag144_t __midl_frag144;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag140_t;
extern const __midl_frag140_t __midl_frag140;

typedef 
NDR64_FORMAT_CHAR
__midl_frag139_t;
extern const __midl_frag139_t __midl_frag139;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag138_t;
extern const __midl_frag138_t __midl_frag138;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag137_t;
extern const __midl_frag137_t __midl_frag137;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag136_t;
extern const __midl_frag136_t __midl_frag136;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag128_t;
extern const __midl_frag128_t __midl_frag128;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag127_t;
extern const __midl_frag127_t __midl_frag127;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag126_t;
extern const __midl_frag126_t __midl_frag126;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag125_t;
extern const __midl_frag125_t __midl_frag125;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag124_t;
extern const __midl_frag124_t __midl_frag124;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag123_t;
extern const __midl_frag123_t __midl_frag123;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag122_t;
extern const __midl_frag122_t __midl_frag122;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag121_t;
extern const __midl_frag121_t __midl_frag121;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag120_t;
extern const __midl_frag120_t __midl_frag120;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag119_t;
extern const __midl_frag119_t __midl_frag119;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag117_t;
extern const __midl_frag117_t __midl_frag117;

typedef 
NDR64_FORMAT_CHAR
__midl_frag116_t;
extern const __midl_frag116_t __midl_frag116;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag115_t;
extern const __midl_frag115_t __midl_frag115;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag114_t;
extern const __midl_frag114_t __midl_frag114;

typedef 
NDR64_FORMAT_CHAR
__midl_frag107_t;
extern const __midl_frag107_t __midl_frag107;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag106_t;
extern const __midl_frag106_t __midl_frag106;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag98_t;
extern const __midl_frag98_t __midl_frag98;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag97_t;
extern const __midl_frag97_t __midl_frag97;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag94_t;
extern const __midl_frag94_t __midl_frag94;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag93_t;
extern const __midl_frag93_t __midl_frag93;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag92_t;
extern const __midl_frag92_t __midl_frag92;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag91_t;
extern const __midl_frag91_t __midl_frag91;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag88_t;
extern const __midl_frag88_t __midl_frag88;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag87_t;
extern const __midl_frag87_t __midl_frag87;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag86_t;
extern const __midl_frag86_t __midl_frag86;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag83_t;
extern const __midl_frag83_t __midl_frag83;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag82_t;
extern const __midl_frag82_t __midl_frag82;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag81_t;
extern const __midl_frag81_t __midl_frag81;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag78_t;
extern const __midl_frag78_t __midl_frag78;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag77_t;
extern const __midl_frag77_t __midl_frag77;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag76_t;
extern const __midl_frag76_t __midl_frag76;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag75_t;
extern const __midl_frag75_t __midl_frag75;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag70_t;
extern const __midl_frag70_t __midl_frag70;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag69_t;
extern const __midl_frag69_t __midl_frag69;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag68_t;
extern const __midl_frag68_t __midl_frag68;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag65_t;
extern const __midl_frag65_t __midl_frag65;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag64_t;
extern const __midl_frag64_t __midl_frag64;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag63_t;
extern const __midl_frag63_t __midl_frag63;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag62_t;
extern const __midl_frag62_t __midl_frag62;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag60_t;
extern const __midl_frag60_t __midl_frag60;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag59_t;
extern const __midl_frag59_t __midl_frag59;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag58_t;
extern const __midl_frag58_t __midl_frag58;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag55_t;
extern const __midl_frag55_t __midl_frag55;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag54_t;
extern const __midl_frag54_t __midl_frag54;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag53_t;
extern const __midl_frag53_t __midl_frag53;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag48_t;
extern const __midl_frag48_t __midl_frag48;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag47_t;
extern const __midl_frag47_t __midl_frag47;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag40_t;
extern const __midl_frag40_t __midl_frag40;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag39_t;
extern const __midl_frag39_t __midl_frag39;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag36_t;
extern const __midl_frag36_t __midl_frag36;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag35_t;
extern const __midl_frag35_t __midl_frag35;

typedef 
struct 
{
    struct _NDR64_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    NDR64_UINT32 frag13;
}
__midl_frag34_t;
extern const __midl_frag34_t __midl_frag34;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag33_t;
extern const __midl_frag33_t __midl_frag33;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag32_t;
extern const __midl_frag32_t __midl_frag32;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag31_t;
extern const __midl_frag31_t __midl_frag31;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_REGION_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag30_t;
extern const __midl_frag30_t __midl_frag30;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag21_t;
extern const __midl_frag21_t __midl_frag21;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag20_t;
extern const __midl_frag20_t __midl_frag20;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag17_t;
extern const __midl_frag17_t __midl_frag17;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag8_t;
extern const __midl_frag8_t __midl_frag8;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    struct _NDR64_UNION_ARM frag13;
    struct _NDR64_UNION_ARM frag14;
    struct _NDR64_UNION_ARM frag15;
    struct _NDR64_UNION_ARM frag16;
    struct _NDR64_UNION_ARM frag17;
    struct _NDR64_UNION_ARM frag18;
    struct _NDR64_UNION_ARM frag19;
    struct _NDR64_UNION_ARM frag20;
    struct _NDR64_UNION_ARM frag21;
    struct _NDR64_UNION_ARM frag22;
    struct _NDR64_UNION_ARM frag23;
    struct _NDR64_UNION_ARM frag24;
    struct _NDR64_UNION_ARM frag25;
    struct _NDR64_UNION_ARM frag26;
    struct _NDR64_UNION_ARM frag27;
    struct _NDR64_UNION_ARM frag28;
    struct _NDR64_UNION_ARM frag29;
    struct _NDR64_UNION_ARM frag30;
    struct _NDR64_UNION_ARM frag31;
    struct _NDR64_UNION_ARM frag32;
    struct _NDR64_UNION_ARM frag33;
    struct _NDR64_UNION_ARM frag34;
    struct _NDR64_UNION_ARM frag35;
    struct _NDR64_UNION_ARM frag36;
    struct _NDR64_UNION_ARM frag37;
    struct _NDR64_UNION_ARM frag38;
    struct _NDR64_UNION_ARM frag39;
    struct _NDR64_UNION_ARM frag40;
    struct _NDR64_UNION_ARM frag41;
    struct _NDR64_UNION_ARM frag42;
    struct _NDR64_UNION_ARM frag43;
    struct _NDR64_UNION_ARM frag44;
    struct _NDR64_UNION_ARM frag45;
    struct _NDR64_UNION_ARM frag46;
    struct _NDR64_UNION_ARM frag47;
    struct _NDR64_UNION_ARM frag48;
    struct _NDR64_UNION_ARM frag49;
    NDR64_UINT32 frag50;
}
__midl_frag7_t;
extern const __midl_frag7_t __midl_frag7;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_REGION_FORMAT frag1;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    } frag2;
}
__midl_frag6_t;
extern const __midl_frag6_t __midl_frag6;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag698_t __midl_frag698 =
0x5    /* FC64_INT32 */;

static const __midl_frag697_t __midl_frag697 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag20
};

static const __midl_frag696_t __midl_frag696 =
{ 
/* wireBSTR */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 1 /* 0x1 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag697
};

static const __midl_frag695_t __midl_frag695 =
{ 
/* *wireBSTR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag696
};

static const __midl_frag694_t __midl_frag694 =
{ 
/* get_Password */
    { 
    /* get_Password */      /* procedure get_Password */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* password */      /* parameter password */
        &__midl_frag696,
        { 
        /* password */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag692_t __midl_frag692 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag20
};

static const __midl_frag691_t __midl_frag691 =
{ 
/* wireBSTR */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 1 /* 0x1 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag692
};

static const __midl_frag690_t __midl_frag690 =
{ 
/* put_Password */
    { 
    /* put_Password */      /* procedure put_Password */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* password */      /* parameter password */
        &__midl_frag691,
        { 
        /* password */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag678_t __midl_frag678 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag698
};

static const __midl_frag677_t __midl_frag677 =
{ 
/* get_CurrentUses */
    { 
    /* get_CurrentUses */      /* procedure get_CurrentUses */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* currentUses */      /* parameter currentUses */
        &__midl_frag698,
        { 
        /* currentUses */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag674_t __midl_frag674 =
{ 
/* put_CurrentUses */
    { 
    /* put_CurrentUses */      /* procedure put_CurrentUses */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* currentUses */      /* parameter currentUses */
        &__midl_frag698,
        { 
        /* currentUses */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag633_t __midl_frag633 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x493378e5,
        0x71c6,
        0x4aca,
        {0xac, 0xb4, 0xb2, 0x8d, 0x26, 0x95, 0xba, 0x33}
    }
};

static const __midl_frag632_t __midl_frag632 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag633
};

static const __midl_frag631_t __midl_frag631 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag632
};

static const __midl_frag628_t __midl_frag628 =
{ 
/* EnumerateNetworkShares */
    { 
    /* EnumerateNetworkShares */      /* procedure EnumerateNetworkShares */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* remoteName */      /* parameter remoteName */
        &__midl_frag691,
        { 
        /* remoteName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppINCFCollectionList */      /* parameter ppINCFCollectionList */
        &__midl_frag631,
        { 
        /* ppINCFCollectionList */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag623_t __midl_frag623 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x075034b4,
        0x2dec,
        0x47c3,
        {0xbe, 0xc2, 0xed, 0xfc, 0x45, 0xf6, 0x19, 0x50}
    }
};

static const __midl_frag622_t __midl_frag622 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag623
};

static const __midl_frag621_t __midl_frag621 =
{ 
/* EnumerateNetworkResources */
    { 
    /* EnumerateNetworkResources */      /* procedure EnumerateNetworkResources */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pINCFNetworkResource */      /* parameter pINCFNetworkResource */
        &__midl_frag622,
        { 
        /* pINCFNetworkResource */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppINCFCollectionList */      /* parameter ppINCFCollectionList */
        &__midl_frag631,
        { 
        /* ppINCFCollectionList */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag616_t __midl_frag616 =
{ 
/* EnumerateAllNetworkResources */
    { 
    /* EnumerateAllNetworkResources */      /* procedure EnumerateAllNetworkResources */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ppINCFCollectionList */      /* parameter ppINCFCollectionList */
        &__midl_frag631,
        { 
        /* ppINCFCollectionList */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag614_t __midl_frag614 =
0x4    /* FC64_INT16 */;

static const __midl_frag613_t __midl_frag613 =
{ 
/* *VARIANT_BOOL */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag614
};

static const __midl_frag605_t __midl_frag605 =
{ 
/* ConnectUNC */
    { 
    /* ConnectUNC */      /* procedure ConnectUNC */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 38 /* 0x26 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* remoteName */      /* parameter remoteName */
        &__midl_frag691,
        { 
        /* remoteName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* username */      /* parameter username */
        &__midl_frag691,
        { 
        /* username */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* password */      /* parameter password */
        &__midl_frag691,
        { 
        /* password */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* rememberOnLogin */      /* parameter rememberOnLogin */
        &__midl_frag614,
        { 
        /* rememberOnLogin */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* status */      /* parameter status */
        &__midl_frag614,
        { 
        /* status */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag518_t __midl_frag518 =
{ 
/* Exists */
    { 
    /* Exists */      /* procedure Exists */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 38 /* 0x26 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* directory */      /* parameter directory */
        &__midl_frag691,
        { 
        /* directory */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* status */      /* parameter status */
        &__midl_frag614,
        { 
        /* status */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag503_t __midl_frag503 =
{ 
/* GetTempFilename */
    { 
    /* GetTempFilename */      /* procedure GetTempFilename */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* extension */      /* parameter extension */
        &__midl_frag691,
        { 
        /* extension */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* filename */      /* parameter filename */
        &__midl_frag696,
        { 
        /* filename */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag494_t __midl_frag494 =
{ 
/* EnumerateFiles */
    { 
    /* EnumerateFiles */      /* procedure EnumerateFiles */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* directory */      /* parameter directory */
        &__midl_frag691,
        { 
        /* directory */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pattern */      /* parameter pattern */
        &__midl_frag691,
        { 
        /* pattern */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ppINCFCollectionList */      /* parameter ppINCFCollectionList */
        &__midl_frag631,
        { 
        /* ppINCFCollectionList */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag482_t __midl_frag482 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x364a7ee0,
        0x8a6a,
        0x47e5,
        {0x89, 0xe9, 0x99, 0x79, 0xa4, 0xe5, 0x0f, 0xc6}
    }
};

static const __midl_frag481_t __midl_frag481 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag482
};

static const __midl_frag480_t __midl_frag480 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag481
};

static const __midl_frag477_t __midl_frag477 =
{ 
/* CreateNewText */
    { 
    /* CreateNewText */      /* procedure CreateNewText */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* filename */      /* parameter filename */
        &__midl_frag691,
        { 
        /* filename */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppINCFStringStream */      /* parameter ppINCFStringStream */
        &__midl_frag480,
        { 
        /* ppINCFStringStream */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag475_t __midl_frag475 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x5968d6dd,
        0x023f,
        0x4e7f,
        {0xa0, 0x01, 0x12, 0x42, 0xa7, 0xad, 0x86, 0x10}
    }
};

static const __midl_frag474_t __midl_frag474 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag475
};

static const __midl_frag473_t __midl_frag473 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag474
};

static const __midl_frag470_t __midl_frag470 =
{ 
/* CreateNew */
    { 
    /* CreateNew */      /* procedure CreateNew */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* filename */      /* parameter filename */
        &__midl_frag691,
        { 
        /* filename */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppINCFFileStream */      /* parameter ppINCFFileStream */
        &__midl_frag473,
        { 
        /* ppINCFFileStream */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag450_t __midl_frag450 =
{ 
/* Close */
    { 
    /* Close */      /* procedure Close */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag427_t __midl_frag427 =
{ 
/* *wireBSTR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag691
};

static const __midl_frag426_t __midl_frag426 =
{ 
/* ReadLine */
    { 
    /* ReadLine */      /* procedure ReadLine */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pText */      /* parameter pText */
        &__midl_frag691,
        { 
        /* pText */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag397_t __midl_frag397 =
{ 
/* *wireBSTR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag696
};

static const __midl_frag385_t __midl_frag385 =
{ 
/* SplitURL */
    { 
    /* SplitURL */      /* procedure SplitURL */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* url */      /* parameter url */
        &__midl_frag691,
        { 
        /* url */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* protocol */      /* parameter protocol */
        &__midl_frag696,
        { 
        /* protocol */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* domain */      /* parameter domain */
        &__midl_frag696,
        { 
        /* domain */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* port */      /* parameter port */
        &__midl_frag696,
        { 
        /* port */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* path */      /* parameter path */
        &__midl_frag696,
        { 
        /* path */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* filename */      /* parameter filename */
        &__midl_frag696,
        { 
        /* filename */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag327_t __midl_frag327 =
{ 
/* SplitFullPath */
    { 
    /* SplitFullPath */      /* procedure SplitFullPath */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* full_path */      /* parameter full_path */
        &__midl_frag691,
        { 
        /* full_path */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* volume */      /* parameter volume */
        &__midl_frag696,
        { 
        /* volume */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* path */      /* parameter path */
        &__midl_frag696,
        { 
        /* path */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* base_filename */      /* parameter base_filename */
        &__midl_frag696,
        { 
        /* base_filename */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* file_extension */      /* parameter file_extension */
        &__midl_frag696,
        { 
        /* file_extension */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag318_t __midl_frag318 =
{ 
/* ReplaceVolume */
    { 
    /* ReplaceVolume */      /* procedure ReplaceVolume */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* full_path */      /* parameter full_path */
        &__midl_frag691,
        { 
        /* full_path */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* new_volume */      /* parameter new_volume */
        &__midl_frag691,
        { 
        /* new_volume */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* new_full_path */      /* parameter new_full_path */
        &__midl_frag696,
        { 
        /* new_full_path */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag217_t __midl_frag217 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x40ce1ccd,
        0xa99c,
        0x4a34,
        {0xb2, 0x85, 0x4c, 0x12, 0x2c, 0x8d, 0x50, 0x18}
    }
};

static const __midl_frag216_t __midl_frag216 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag217
};

static const __midl_frag215_t __midl_frag215 =
{ 
/* ReadToStream */
    { 
    /* ReadToStream */      /* procedure ReadToStream */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pINCFStream */      /* parameter pINCFStream */
        &__midl_frag216,
        { 
        /* pINCFStream */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* length */      /* parameter length */
        &__midl_frag698,
        { 
        /* length */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag212_t __midl_frag212 =
0x2    /* FC64_INT8 */;

static const __midl_frag211_t __midl_frag211 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag212
};

static const __midl_frag210_t __midl_frag210 =
{ 
/* ReadTo */
    { 
    /* ReadTo */      /* procedure ReadTo */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 37 /* 0x25 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pData */      /* parameter pData */
        &__midl_frag212,
        { 
        /* pData */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* length */      /* parameter length */
        &__midl_frag698,
        { 
        /* length */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag196_t __midl_frag196 =
{ 
/* RemoveItems */
    { 
    /* RemoveItems */      /* procedure RemoveItems */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* lIndex1 */      /* parameter lIndex1 */
        &__midl_frag698,
        { 
        /* lIndex1 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* lIndex2 */      /* parameter lIndex2 */
        &__midl_frag698,
        { 
        /* lIndex2 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag194_t __midl_frag194 =
{ 
/* *_wireVARIANT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag6
};

static const __midl_frag193_t __midl_frag193 =
{ 
/* wireVARIANT */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 24 /* 0x18 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag194
};

static const __midl_frag192_t __midl_frag192 =
{ 
/* *wireVARIANT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag193
};

static const __midl_frag190_t __midl_frag190 =
{ 
/* InsertItemBefore */
    { 
    /* InsertItemBefore */      /* procedure InsertItemBefore */
        (NDR64_UINT32) 36438339 /* 0x22c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* lIndex */      /* parameter lIndex */
        &__midl_frag698,
        { 
        /* lIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* vtItem */      /* parameter vtItem */
        &__midl_frag193,
        { 
        /* vtItem */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag186_t __midl_frag186 =
{ 
/* get_Empty */
    { 
    /* get_Empty */      /* procedure get_Empty */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 38 /* 0x26 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pvtbEmpty */      /* parameter pvtbEmpty */
        &__midl_frag614,
        { 
        /* pvtbEmpty */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag179_t __midl_frag179 =
{ 
/* RemoveItemsByValue */
    { 
    /* RemoveItemsByValue */      /* procedure RemoveItemsByValue */
        (NDR64_UINT32) 36438339 /* 0x22c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation, actual guaranteed */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* vtItem */      /* parameter vtItem */
        &__midl_frag193,
        { 
        /* vtItem */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag168_t __midl_frag168 =
{ 
/* *_wireVARIANT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag6
};

static const __midl_frag167_t __midl_frag167 =
{ 
/* wireVARIANT */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 24 /* 0x18 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag168
};

static const __midl_frag166_t __midl_frag166 =
{ 
/* *wireVARIANT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag167
};

static const __midl_frag164_t __midl_frag164 =
{ 
/* GetItemByIndex */
    { 
    /* GetItemByIndex */      /* procedure GetItemByIndex */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* lIndex */      /* parameter lIndex */
        &__midl_frag698,
        { 
        /* lIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pvtItem */      /* parameter pvtItem */
        &__midl_frag167,
        { 
        /* pvtItem */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag698,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag148_t __midl_frag148 =
{ 
/* *UINT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag698
};

static const __midl_frag145_t __midl_frag145 =
0x7    /* FC64_INT64 */;

static const __midl_frag144_t __midl_frag144 =
{ 
/* *ULONGLONG */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag145
};

static const __midl_frag140_t __midl_frag140 =
{ 
/* *USHORT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag614
};

static const __midl_frag139_t __midl_frag139 =
0x10    /* FC64_CHAR */;

static const __midl_frag138_t __midl_frag138 =
{ 
/* *CHAR */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag139
};

static const __midl_frag137_t __midl_frag137 =
{ 
/* *DECIMAL */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag136
};

static const __midl_frag136_t __midl_frag136 =
{ 
/* DECIMAL */
    { 
    /* DECIMAL */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DECIMAL */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag128_t __midl_frag128 =
{ 
/* **_wireVARIANT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag194
};

static const __midl_frag127_t __midl_frag127 =
{ 
/* *_wireSAFEARRAY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag30
};

static const __midl_frag126_t __midl_frag126 =
{ 
/* **_wireSAFEARRAY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag127
};

static const __midl_frag125_t __midl_frag125 =
{ 
/* ***_wireSAFEARRAY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag126
};

static const __midl_frag124_t __midl_frag124 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x00020400,
        0x0000,
        0x0000,
        {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}
    }
};

static const __midl_frag123_t __midl_frag123 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag124
};

static const __midl_frag122_t __midl_frag122 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag123
};

static const __midl_frag121_t __midl_frag121 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x00000000,
        0x0000,
        0x0000,
        {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}
    }
};

static const __midl_frag120_t __midl_frag120 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag121
};

static const __midl_frag119_t __midl_frag119 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag120
};

static const __midl_frag117_t __midl_frag117 =
{ 
/* **FLAGGED_WORD_BLOB */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag692
};

static const __midl_frag116_t __midl_frag116 =
0xc    /* FC64_FLOAT64 */;

static const __midl_frag115_t __midl_frag115 =
{ 
/* *DATE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag116
};

static const __midl_frag114_t __midl_frag114 =
{ 
/* *CY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag17
};

static const __midl_frag107_t __midl_frag107 =
0xb    /* FC64_FLOAT32 */;

static const __midl_frag106_t __midl_frag106 =
{ 
/* *FLOAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag107
};

static const __midl_frag98_t __midl_frag98 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag212
};

static const __midl_frag97_t __midl_frag97 =
{ 
/* *_wireBRECORD */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag62
};

static const __midl_frag96_t __midl_frag96 =
{ 
/*  */
    { 
    /* *hyper */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag93
    }
};

static const __midl_frag94_t __midl_frag94 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag93_t __midl_frag93 =
{ 
/* *hyper */
    { 
    /* *hyper */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *hyper */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag94
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag145
    }
};

static const __midl_frag92_t __midl_frag92 =
{ 
/* HYPER_SIZEDARR */
    { 
    /* HYPER_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* HYPER_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag96,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag91_t __midl_frag91 =
{ 
/*  */
    { 
    /* *ULONG */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag88
    }
};

static const __midl_frag88_t __midl_frag88 =
{ 
/* *ULONG */
    { 
    /* *ULONG */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* *ULONG */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag94
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag698
    }
};

static const __midl_frag87_t __midl_frag87 =
{ 
/* DWORD_SIZEDARR */
    { 
    /* DWORD_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DWORD_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag91,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag86_t __midl_frag86 =
{ 
/*  */
    { 
    /* *short */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag83
    }
};

static const __midl_frag83_t __midl_frag83 =
{ 
/* *short */
    { 
    /* *short */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *short */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag94
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag614
    }
};

static const __midl_frag82_t __midl_frag82 =
{ 
/* WORD_SIZEDARR */
    { 
    /* WORD_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* WORD_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag86,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag81_t __midl_frag81 =
{ 
/*  */
    { 
    /* *byte */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag78
    }
};

static const __midl_frag78_t __midl_frag78 =
{ 
/* *byte */
    { 
    /* *byte */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *byte */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag94
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag212
    }
};

static const __midl_frag77_t __midl_frag77 =
{ 
/* BYTE_SIZEDARR */
    { 
    /* BYTE_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* BYTE_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag81,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag76_t __midl_frag76 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag75_t __midl_frag75 =
{ 
/*  */
    { 
    /* **struct _NDR64_POINTER_FORMAT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag70
    }
};

static const __midl_frag70_t __midl_frag70 =
{ 
/* ** */
    { 
    /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag94
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag121
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag120
    }
};

static const __midl_frag69_t __midl_frag69 =
{ 
/* SAFEARR_HAVEIID */
    { 
    /* SAFEARR_HAVEIID */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_HAVEIID */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag75,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag76
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag68_t __midl_frag68 =
{ 
/*  */
    { 
    /* **_wireBRECORD */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag60
    }
};

static const __midl_frag65_t __midl_frag65 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag64_t __midl_frag64 =
{ 
/* *byte */
    { 
    /* *byte */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *byte */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag65
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag212
    }
};

static const __midl_frag63_t __midl_frag63 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x0000002f,
        0x0000,
        0x0000,
        {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}
    }
};

static const __midl_frag62_t __midl_frag62 =
{ 
/* _wireBRECORD */
    { 
    /* _wireBRECORD */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _wireBRECORD */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *struct _NDR64_POINTER_FORMAT */
            0x24,    /* FC64_IP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag63
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *byte */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag64
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag60_t __midl_frag60 =
{ 
/* **_wireBRECORD */
    { 
    /* **_wireBRECORD */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **_wireBRECORD */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag94
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *_wireBRECORD */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag62
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag97
    }
};

static const __midl_frag59_t __midl_frag59 =
{ 
/* SAFEARR_BRECORD */
    { 
    /* SAFEARR_BRECORD */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_BRECORD */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag68,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag58_t __midl_frag58 =
{ 
/*  */
    { 
    /* **_wireVARIANT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag55
    }
};

static const __midl_frag55_t __midl_frag55 =
{ 
/* **_wireVARIANT */
    { 
    /* **_wireVARIANT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **_wireVARIANT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag94
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *_wireVARIANT */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag6
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag194
    }
};

static const __midl_frag54_t __midl_frag54 =
{ 
/* SAFEARR_VARIANT */
    { 
    /* SAFEARR_VARIANT */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_VARIANT */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag58,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag53_t __midl_frag53 =
{ 
/*  */
    { 
    /* **struct _NDR64_POINTER_FORMAT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag48
    }
};

static const __midl_frag48_t __midl_frag48 =
{ 
/* ** */
    { 
    /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag94
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag124
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag123
    }
};

static const __midl_frag47_t __midl_frag47 =
{ 
/* SAFEARR_DISPATCH */
    { 
    /* SAFEARR_DISPATCH */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_DISPATCH */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag53,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag40_t __midl_frag40 =
{ 
/* SAFEARR_UNKNOWN */
    { 
    /* SAFEARR_UNKNOWN */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_UNKNOWN */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag75,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag39_t __midl_frag39 =
{ 
/*  */
    { 
    /* **FLAGGED_WORD_BLOB */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag36
    }
};

static const __midl_frag36_t __midl_frag36 =
{ 
/* **FLAGGED_WORD_BLOB */
    { 
    /* **FLAGGED_WORD_BLOB */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **FLAGGED_WORD_BLOB */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag94
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *FLAGGED_WORD_BLOB */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag20
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag692
    }
};

static const __midl_frag35_t __midl_frag35 =
{ 
/* SAFEARR_BSTR */
    { 
    /* SAFEARR_BSTR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_BSTR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag39,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag34_t __midl_frag34 =
{ 
/* SAFEARRAYUNION */
    { 
    /* SAFEARRAYUNION */
        0x50,    /* FC64_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 10 /* 0xa */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag35,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 13 /* 0xd */,
        &__midl_frag40,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag47,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 12 /* 0xc */,
        &__midl_frag54,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 36 /* 0x24 */,
        &__midl_frag59,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 32781 /* 0x800d */,
        &__midl_frag69,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16 /* 0x10 */,
        &__midl_frag77,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag82,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag87,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 20 /* 0x14 */,
        &__midl_frag92,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag33_t __midl_frag33 =
{ 
/* SAFEARRAYBOUND */
    { 
    /* SAFEARRAYBOUND */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* SAFEARRAYBOUND */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag32_t __midl_frag32 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag31_t __midl_frag31 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag32
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag33
    }
};

static const __midl_frag30_t __midl_frag30 =
{ 
/* _wireSAFEARRAY */
    { 
    /* _wireSAFEARRAY */
        0x36,    /* FC64_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _wireSAFEARRAY */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 56 /* 0x38 */,
        0,
        0,
        0,
        &__midl_frag31,
    },
    { 
    /*  */
        { 
        /* _wireSAFEARRAY */
            0x30,    /* FC64_STRUCT */
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT16) 12 /* 0xc */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag34
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag21_t __midl_frag21 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag65
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag614
    }
};

static const __midl_frag20_t __midl_frag20 =
{ 
/* FLAGGED_WORD_BLOB */
    { 
    /* FLAGGED_WORD_BLOB */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* FLAGGED_WORD_BLOB */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag21
    }
};

static const __midl_frag17_t __midl_frag17 =
{ 
/* CY */
    { 
    /* CY */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* CY */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag8_t __midl_frag8 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag7_t __midl_frag7 =
{ 
/* __MIDL_IOleAutomationTypes_0004 */
    { 
    /* __MIDL_IOleAutomationTypes_0004 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag8,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 47 /* 0x2f */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 20 /* 0x14 */,
        &__midl_frag145,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag698,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 17 /* 0x11 */,
        &__midl_frag212,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag614,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag107,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag116,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 11 /* 0xb */,
        &__midl_frag614,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 10 /* 0xa */,
        &__midl_frag698,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag17,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag116,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag692,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 13 /* 0xd */,
        &__midl_frag120,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag123,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8192 /* 0x2000 */,
        &__midl_frag126,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 36 /* 0x24 */,
        &__midl_frag97,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16420 /* 0x4024 */,
        &__midl_frag97,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16401 /* 0x4011 */,
        &__midl_frag98,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16386 /* 0x4002 */,
        &__midl_frag140,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16387 /* 0x4003 */,
        &__midl_frag148,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16404 /* 0x4014 */,
        &__midl_frag144,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16388 /* 0x4004 */,
        &__midl_frag106,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16389 /* 0x4005 */,
        &__midl_frag115,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16395 /* 0x400b */,
        &__midl_frag140,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16394 /* 0x400a */,
        &__midl_frag148,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16390 /* 0x4006 */,
        &__midl_frag114,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16391 /* 0x4007 */,
        &__midl_frag115,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16392 /* 0x4008 */,
        &__midl_frag117,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16397 /* 0x400d */,
        &__midl_frag119,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16393 /* 0x4009 */,
        &__midl_frag122,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 24576 /* 0x6000 */,
        &__midl_frag125,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16396 /* 0x400c */,
        &__midl_frag128,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16 /* 0x10 */,
        &__midl_frag139,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 18 /* 0x12 */,
        &__midl_frag614,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 19 /* 0x13 */,
        &__midl_frag698,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 21 /* 0x15 */,
        &__midl_frag145,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 22 /* 0x16 */,
        &__midl_frag698,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 23 /* 0x17 */,
        &__midl_frag698,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 14 /* 0xe */,
        &__midl_frag136,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16398 /* 0x400e */,
        &__midl_frag137,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16400 /* 0x4010 */,
        &__midl_frag138,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16402 /* 0x4012 */,
        &__midl_frag140,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16403 /* 0x4013 */,
        &__midl_frag148,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16405 /* 0x4015 */,
        &__midl_frag144,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16406 /* 0x4016 */,
        &__midl_frag148,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16407 /* 0x4017 */,
        &__midl_frag148,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 0 /* 0x0 */,
        0,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        0,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag6_t __midl_frag6 =
{ 
/* _wireVARIANT */
    { 
    /* _wireVARIANT */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _wireVARIANT */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* _wireVARIANT */
            0x30,    /* FC64_STRUCT */
            (NDR64_UINT8) 3 /* 0x3 */,
            (NDR64_UINT16) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag7
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"


static const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            VARIANT_UserSize64
            ,VARIANT_UserMarshal64
            ,VARIANT_UserUnmarshal64
            ,VARIANT_UserFree64
            },
            {
            BSTR_UserSize64
            ,BSTR_UserMarshal64
            ,BSTR_UserUnmarshal64
            ,BSTR_UserFree64
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: INCFCollectionList, ver. 0.0,
   GUID={0x493378E5,0x71C6,0x4ACA,{0xAC,0xB4,0xB2,0x8D,0x26,0x95,0xBA,0x33}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFCollectionList_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag179,
    &__midl_frag179,
    &__midl_frag450,
    &__midl_frag450,
    &__midl_frag677,
    &__midl_frag164,
    &__midl_frag190,
    &__midl_frag674,
    &__midl_frag179,
    &__midl_frag450,
    &__midl_frag186,
    &__midl_frag190,
    &__midl_frag196
    };


static const MIDL_SYNTAX_INFO INCFCollectionList_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFCollectionList_FormatStringOffsetTable[-3],
    ItSoftwareNCFIO__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFCollectionList_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFCollectionList_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFCollectionList_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFCollectionList_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFCollectionList_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFCollectionList_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFCollectionList_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(20) _INCFCollectionListProxyVtbl = 
{
    &INCFCollectionList_ProxyInfo,
    &IID_INCFCollectionList,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionList::AddItemToBack */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionList::AddItemToFront */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionList::RemoveBackItem */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionList::RemoveFrontItem */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionList::get_Size */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionList::GetItemByIndex */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionList::SetItemByIndex */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionList::RemoveItemByIndex */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionList::RemoveItemsByValue */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionList::Clear */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionList::get_Empty */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionList::InsertItemBefore */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionList::RemoveItems */
};


static const PRPC_STUB_FUNCTION INCFCollectionList_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFCollectionListStubVtbl =
{
    &IID_INCFCollectionList,
    &INCFCollectionList_ServerInfo,
    20,
    &INCFCollectionList_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFStream, ver. 0.0,
   GUID={0x40CE1CCD,0xA99C,0x4A34,{0xB2,0x85,0x4C,0x12,0x2C,0x8D,0x50,0x18}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFStream_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag210,
    &__midl_frag215,
    &__midl_frag210,
    &__midl_frag215,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag450,
    &__midl_frag677
    };


static const MIDL_SYNTAX_INFO INCFStream_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFStream_FormatStringOffsetTable[-3],
    ItSoftwareNCFIO__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFStream_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFStream_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFStream_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFStream_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFStream_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFStream_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFStream_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(17) _INCFStreamProxyVtbl = 
{
    &INCFStream_ProxyInfo,
    &IID_INCFStream,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFStream::WriteFrom */ ,
    (void *) (INT_PTR) -1 /* INCFStream::WriteFromStream */ ,
    (void *) (INT_PTR) -1 /* INCFStream::ReadTo */ ,
    (void *) (INT_PTR) -1 /* INCFStream::ReadToStream */ ,
    (void *) (INT_PTR) -1 /* INCFStream::put_CurrentReadPosition */ ,
    (void *) (INT_PTR) -1 /* INCFStream::get_CurrentReadPosition */ ,
    (void *) (INT_PTR) -1 /* INCFStream::put_CurrentWritePosition */ ,
    (void *) (INT_PTR) -1 /* INCFStream::get_CurrentWritePosition */ ,
    (void *) (INT_PTR) -1 /* INCFStream::Close */ ,
    (void *) (INT_PTR) -1 /* INCFStream::get_Length */
};


static const PRPC_STUB_FUNCTION INCFStream_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFStreamStubVtbl =
{
    &IID_INCFStream,
    &INCFStream_ServerInfo,
    17,
    &INCFStream_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFPath, ver. 0.0,
   GUID={0xA3713788,0x8456,0x4F2A,{0xA3,0x2A,0xC0,0x66,0x05,0x3F,0x3D,0x0E}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFPath_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag503,
    &__midl_frag503,
    &__midl_frag503,
    &__midl_frag503,
    &__midl_frag503,
    &__midl_frag503,
    &__midl_frag318,
    &__midl_frag318,
    &__midl_frag318,
    &__midl_frag318,
    &__midl_frag318,
    &__midl_frag327,
    &__midl_frag503
    };


static const MIDL_SYNTAX_INFO INCFPath_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFPath_FormatStringOffsetTable[-3],
    ItSoftwareNCFIO__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFPath_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFPath_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFPath_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFPath_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFPath_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFPath_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFPath_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(20) _INCFPathProxyVtbl = 
{
    &INCFPath_ProxyInfo,
    &IID_INCFPath,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFPath::NormalizePath */ ,
    (void *) (INT_PTR) -1 /* INCFPath::NormalizeExtension */ ,
    (void *) (INT_PTR) -1 /* INCFPath::ExtractPath */ ,
    (void *) (INT_PTR) -1 /* INCFPath::ExtractExtension */ ,
    (void *) (INT_PTR) -1 /* INCFPath::ExtractFilename */ ,
    (void *) (INT_PTR) -1 /* INCFPath::ExtractBaseFilename */ ,
    (void *) (INT_PTR) -1 /* INCFPath::ReplaceFilename */ ,
    (void *) (INT_PTR) -1 /* INCFPath::ReplacePath */ ,
    (void *) (INT_PTR) -1 /* INCFPath::ReplaceBaseFilename */ ,
    (void *) (INT_PTR) -1 /* INCFPath::ReplaceFileExtension */ ,
    (void *) (INT_PTR) -1 /* INCFPath::ReplaceVolume */ ,
    (void *) (INT_PTR) -1 /* INCFPath::SplitFullPath */ ,
    (void *) (INT_PTR) -1 /* INCFPath::ExtractVolume */
};


static const PRPC_STUB_FUNCTION INCFPath_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFPathStubVtbl =
{
    &IID_INCFPath,
    &INCFPath_ServerInfo,
    20,
    &INCFPath_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFUrl, ver. 0.0,
   GUID={0x6F8876A9,0xCED1,0x4AD3,{0xA3,0xDE,0x5A,0xCF,0x10,0x36,0xEA,0x85}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFUrl_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag503,
    &__midl_frag503,
    &__midl_frag503,
    &__midl_frag503,
    &__midl_frag503,
    &__midl_frag385,
    &__midl_frag503,
    &__midl_frag503
    };


static const MIDL_SYNTAX_INFO INCFUrl_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFUrl_FormatStringOffsetTable[-3],
    ItSoftwareNCFIO__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFUrl_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFUrl_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFUrl_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFUrl_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFUrl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFUrl_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFUrl_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(15) _INCFUrlProxyVtbl = 
{
    &INCFUrl_ProxyInfo,
    &IID_INCFUrl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFUrl::ExtractProtocol */ ,
    (void *) (INT_PTR) -1 /* INCFUrl::ExtractDomain */ ,
    (void *) (INT_PTR) -1 /* INCFUrl::ExtractPort */ ,
    (void *) (INT_PTR) -1 /* INCFUrl::ExtractPath */ ,
    (void *) (INT_PTR) -1 /* INCFUrl::ExtractFilename */ ,
    (void *) (INT_PTR) -1 /* INCFUrl::SplitURL */ ,
    (void *) (INT_PTR) -1 /* INCFUrl::Encode */ ,
    (void *) (INT_PTR) -1 /* INCFUrl::Decode */
};


static const PRPC_STUB_FUNCTION INCFUrl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFUrlStubVtbl =
{
    &IID_INCFUrl,
    &INCFUrl_ServerInfo,
    15,
    &INCFUrl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFStringStream, ver. 0.0,
   GUID={0x364A7EE0,0x8A6A,0x47E5,{0x89,0xE9,0x99,0x79,0xA4,0xE5,0x0F,0xC6}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFStringStream_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag690,
    &__midl_frag690,
    &__midl_frag426,
    &__midl_frag616,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag450,
    &__midl_frag677
    };


static const MIDL_SYNTAX_INFO INCFStringStream_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFStringStream_FormatStringOffsetTable[-3],
    ItSoftwareNCFIO__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFStringStream_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFStringStream_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFStringStream_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFStringStream_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFStringStream_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFStringStream_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFStringStream_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(17) _INCFStringStreamProxyVtbl = 
{
    &INCFStringStream_ProxyInfo,
    &IID_INCFStringStream,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFStringStream::WriteLine */ ,
    (void *) (INT_PTR) -1 /* INCFStringStream::WriteString */ ,
    (void *) (INT_PTR) -1 /* INCFStringStream::ReadLine */ ,
    (void *) (INT_PTR) -1 /* INCFStringStream::ReadAllLines */ ,
    (void *) (INT_PTR) -1 /* INCFStringStream::put_CurrentReadPosition */ ,
    (void *) (INT_PTR) -1 /* INCFStringStream::get_CurrentReadPosition */ ,
    (void *) (INT_PTR) -1 /* INCFStringStream::put_CurrentWritePosition */ ,
    (void *) (INT_PTR) -1 /* INCFStringStream::get_CurrentWritePosition */ ,
    (void *) (INT_PTR) -1 /* INCFStringStream::Close */ ,
    (void *) (INT_PTR) -1 /* INCFStringStream::get_Length */
};


static const PRPC_STUB_FUNCTION INCFStringStream_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFStringStreamStubVtbl =
{
    &IID_INCFStringStream,
    &INCFStringStream_ServerInfo,
    17,
    &INCFStringStream_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFFileStream, ver. 0.0,
   GUID={0x5968D6DD,0x023F,0x4E7F,{0xA0,0x01,0x12,0x42,0xA7,0xAD,0x86,0x10}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFFileStream_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag210,
    &__midl_frag215,
    &__midl_frag210,
    &__midl_frag215,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag450,
    &__midl_frag677,
    0
    };


static const MIDL_SYNTAX_INFO INCFFileStream_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFFileStream_FormatStringOffsetTable[-3],
    ItSoftwareNCFIO__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFFileStream_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFFileStream_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFFileStream_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFFileStream_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFFileStream_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFFileStream_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFFileStream_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(17) _INCFFileStreamProxyVtbl = 
{
    0,
    &IID_INCFFileStream,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation INCFStream::WriteFrom */ ,
    0 /* forced delegation INCFStream::WriteFromStream */ ,
    0 /* forced delegation INCFStream::ReadTo */ ,
    0 /* forced delegation INCFStream::ReadToStream */ ,
    0 /* forced delegation INCFStream::put_CurrentReadPosition */ ,
    0 /* forced delegation INCFStream::get_CurrentReadPosition */ ,
    0 /* forced delegation INCFStream::put_CurrentWritePosition */ ,
    0 /* forced delegation INCFStream::get_CurrentWritePosition */ ,
    0 /* forced delegation INCFStream::Close */ ,
    0 /* forced delegation INCFStream::get_Length */
};


static const PRPC_STUB_FUNCTION INCFFileStream_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFFileStreamStubVtbl =
{
    &IID_INCFFileStream,
    &INCFFileStream_ServerInfo,
    17,
    &INCFFileStream_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFMemoryStream, ver. 0.0,
   GUID={0x9545C638,0xEDE8,0x499F,{0xAE,0x37,0xEC,0xF2,0x31,0xC9,0xE1,0x11}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFMemoryStream_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag210,
    &__midl_frag215,
    &__midl_frag210,
    &__midl_frag215,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag450,
    &__midl_frag677,
    0
    };


static const MIDL_SYNTAX_INFO INCFMemoryStream_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFMemoryStream_FormatStringOffsetTable[-3],
    ItSoftwareNCFIO__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFMemoryStream_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFMemoryStream_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFMemoryStream_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFMemoryStream_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFMemoryStream_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFMemoryStream_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFMemoryStream_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(17) _INCFMemoryStreamProxyVtbl = 
{
    0,
    &IID_INCFMemoryStream,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation INCFStream::WriteFrom */ ,
    0 /* forced delegation INCFStream::WriteFromStream */ ,
    0 /* forced delegation INCFStream::ReadTo */ ,
    0 /* forced delegation INCFStream::ReadToStream */ ,
    0 /* forced delegation INCFStream::put_CurrentReadPosition */ ,
    0 /* forced delegation INCFStream::get_CurrentReadPosition */ ,
    0 /* forced delegation INCFStream::put_CurrentWritePosition */ ,
    0 /* forced delegation INCFStream::get_CurrentWritePosition */ ,
    0 /* forced delegation INCFStream::Close */ ,
    0 /* forced delegation INCFStream::get_Length */
};


static const PRPC_STUB_FUNCTION INCFMemoryStream_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFMemoryStreamStubVtbl =
{
    &IID_INCFMemoryStream,
    &INCFMemoryStream_ServerInfo,
    17,
    &INCFMemoryStream_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFFile, ver. 0.0,
   GUID={0x1B5CE1F3,0xD493,0x4715,{0x93,0x7D,0xD6,0x82,0xE1,0x04,0x0A,0x43}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFFile_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag470,
    &__midl_frag477,
    &__midl_frag470,
    &__midl_frag477,
    &__midl_frag518,
    &__midl_frag690,
    &__midl_frag494,
    &__midl_frag503
    };


static const MIDL_SYNTAX_INFO INCFFile_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFFile_FormatStringOffsetTable[-3],
    ItSoftwareNCFIO__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFFile_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFFile_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFFile_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFFile_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFFile_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFFile_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFFile_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(15) _INCFFileProxyVtbl = 
{
    &INCFFile_ProxyInfo,
    &IID_INCFFile,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFFile::CreateOrOpen */ ,
    (void *) (INT_PTR) -1 /* INCFFile::CreateOrOpenText */ ,
    (void *) (INT_PTR) -1 /* INCFFile::CreateNew */ ,
    (void *) (INT_PTR) -1 /* INCFFile::CreateNewText */ ,
    (void *) (INT_PTR) -1 /* INCFFile::Exists */ ,
    (void *) (INT_PTR) -1 /* INCFFile::Delete */ ,
    (void *) (INT_PTR) -1 /* INCFFile::EnumerateFiles */ ,
    (void *) (INT_PTR) -1 /* INCFFile::GetTempFilename */
};


static const PRPC_STUB_FUNCTION INCFFile_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFFileStubVtbl =
{
    &IID_INCFFile,
    &INCFFile_ServerInfo,
    15,
    &INCFFile_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFDirectory, ver. 0.0,
   GUID={0xF9E1A9EF,0xFFB4,0x4AE7,{0x85,0xA2,0xA9,0xE1,0x68,0x96,0x83,0xA1}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFDirectory_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag690,
    &__midl_frag690,
    &__midl_frag518,
    &__midl_frag628,
    &__midl_frag694,
    &__midl_frag694
    };


static const MIDL_SYNTAX_INFO INCFDirectory_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFDirectory_FormatStringOffsetTable[-3],
    ItSoftwareNCFIO__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFDirectory_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFDirectory_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFDirectory_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFDirectory_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFDirectory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFDirectory_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFDirectory_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(13) _INCFDirectoryProxyVtbl = 
{
    &INCFDirectory_ProxyInfo,
    &IID_INCFDirectory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFDirectory::Create */ ,
    (void *) (INT_PTR) -1 /* INCFDirectory::Delete */ ,
    (void *) (INT_PTR) -1 /* INCFDirectory::Exists */ ,
    (void *) (INT_PTR) -1 /* INCFDirectory::EnumerateDirectories */ ,
    (void *) (INT_PTR) -1 /* INCFDirectory::GetTempDirectory */ ,
    (void *) (INT_PTR) -1 /* INCFDirectory::GetProgramDataDirectory */
};


static const PRPC_STUB_FUNCTION INCFDirectory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFDirectoryStubVtbl =
{
    &IID_INCFDirectory,
    &INCFDirectory_ServerInfo,
    13,
    &INCFDirectory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFNetworkResource, ver. 0.0,
   GUID={0x075034B4,0x2DEC,0x47C3,{0xBE,0xC2,0xED,0xFC,0x45,0xF6,0x19,0x50}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFNetworkResource_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag690,
    &__midl_frag694,
    &__midl_frag690,
    &__midl_frag694,
    &__midl_frag690,
    &__midl_frag694,
    &__midl_frag690,
    &__midl_frag694
    };


static const MIDL_SYNTAX_INFO INCFNetworkResource_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFNetworkResource_FormatStringOffsetTable[-3],
    ItSoftwareNCFIO__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFNetworkResource_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFNetworkResource_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFNetworkResource_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFNetworkResource_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFNetworkResource_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFNetworkResource_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFNetworkResource_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(23) _INCFNetworkResourceProxyVtbl = 
{
    &INCFNetworkResource_ProxyInfo,
    &IID_INCFNetworkResource,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::put_Scope */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::get_Scope */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::put_Type */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::get_Type */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::put_DisplayType */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::get_DisplayType */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::put_Usage */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::get_Usage */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::put_LocalName */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::get_LocalName */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::put_RemoteName */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::get_RemoteName */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::put_Comment */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::get_Comment */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::put_Provider */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkResource::get_Provider */
};


static const PRPC_STUB_FUNCTION INCFNetworkResource_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFNetworkResourceStubVtbl =
{
    &IID_INCFNetworkResource,
    &INCFNetworkResource_ServerInfo,
    23,
    &INCFNetworkResource_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFNetwork, ver. 0.0,
   GUID={0x5181F2B6,0x7417,0x482A,{0xA9,0x07,0xC5,0x46,0x51,0x33,0xB2,0xC7}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFNetwork_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag605,
    &__midl_frag616,
    &__midl_frag621,
    &__midl_frag628
    };


static const MIDL_SYNTAX_INFO INCFNetwork_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFNetwork_FormatStringOffsetTable[-3],
    ItSoftwareNCFIO__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFNetwork_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFNetwork_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFNetwork_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFNetwork_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFNetwork_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFNetwork_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFNetwork_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(11) _INCFNetworkProxyVtbl = 
{
    &INCFNetwork_ProxyInfo,
    &IID_INCFNetwork,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFNetwork::ConnectUNC */ ,
    (void *) (INT_PTR) -1 /* INCFNetwork::EnumerateAllNetworkResources */ ,
    (void *) (INT_PTR) -1 /* INCFNetwork::EnumerateNetworkResources */ ,
    (void *) (INT_PTR) -1 /* INCFNetwork::EnumerateNetworkShares */
};


static const PRPC_STUB_FUNCTION INCFNetwork_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFNetworkStubVtbl =
{
    &IID_INCFNetwork,
    &INCFNetwork_ServerInfo,
    11,
    &INCFNetwork_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFNetworkShare, ver. 0.0,
   GUID={0xAFFFF835,0x169A,0x434B,{0xAD,0x2E,0x65,0xAB,0x75,0xB0,0x1D,0x0C}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFNetworkShare_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag690,
    &__midl_frag694,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag690,
    &__midl_frag694,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag674,
    &__midl_frag677,
    &__midl_frag690,
    &__midl_frag694,
    &__midl_frag690,
    &__midl_frag694
    };


static const MIDL_SYNTAX_INFO INCFNetworkShare_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFNetworkShare_FormatStringOffsetTable[-3],
    ItSoftwareNCFIO__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFNetworkShare_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFNetworkShare_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    &INCFNetworkShare_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFNetworkShare_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFNetworkShare_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFIO__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFNetworkShare_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFNetworkShare_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(23) _INCFNetworkShareProxyVtbl = 
{
    &INCFNetworkShare_ProxyInfo,
    &IID_INCFNetworkShare,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::put_NetName */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::get_NetName */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::put_Type */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::get_Type */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::put_Remark */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::get_Remark */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::put_Permissions */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::get_Permissions */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::put_MaxUses */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::get_MaxUses */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::put_CurrentUses */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::get_CurrentUses */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::put_Path */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::get_Path */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::put_Password */ ,
    (void *) (INT_PTR) -1 /* INCFNetworkShare::get_Password */
};


static const PRPC_STUB_FUNCTION INCFNetworkShare_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFNetworkShareStubVtbl =
{
    &IID_INCFNetworkShare,
    &INCFNetworkShare_ServerInfo,
    23,
    &INCFNetworkShare_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    ItSoftwareNCFIO__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026c, /* MIDL Version 8.1.620 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _ItSoftwareNCFIO_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_INCFNetworkShareProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFMemoryStreamProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFPathProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFUrlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFNetworkResourceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFNetworkProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFStreamProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFFileStreamProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFStringStreamProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFCollectionListProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFDirectoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFFileProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ItSoftwareNCFIO_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_INCFNetworkShareStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFMemoryStreamStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFPathStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFUrlStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFNetworkResourceStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFNetworkStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFStreamStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFFileStreamStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFStringStreamStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFCollectionListStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFDirectoryStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFFileStubVtbl,
    0
};

PCInterfaceName const _ItSoftwareNCFIO_InterfaceNamesList[] = 
{
    "INCFNetworkShare",
    "INCFMemoryStream",
    "INCFPath",
    "INCFUrl",
    "INCFNetworkResource",
    "INCFNetwork",
    "INCFStream",
    "INCFFileStream",
    "INCFStringStream",
    "INCFCollectionList",
    "INCFDirectory",
    "INCFFile",
    0
};

const IID *  const _ItSoftwareNCFIO_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _ItSoftwareNCFIO_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ItSoftwareNCFIO, pIID, n)

int __stdcall _ItSoftwareNCFIO_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ItSoftwareNCFIO, 12, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _ItSoftwareNCFIO, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _ItSoftwareNCFIO, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _ItSoftwareNCFIO, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ItSoftwareNCFIO, 12, *pIndex )
    
}

const ExtendedProxyFileInfo ItSoftwareNCFIO_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ItSoftwareNCFIO_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ItSoftwareNCFIO_StubVtblList,
    (const PCInterfaceName * ) & _ItSoftwareNCFIO_InterfaceNamesList,
    (const IID ** ) & _ItSoftwareNCFIO_BaseIIDList,
    & _ItSoftwareNCFIO_IID_Lookup, 
    12,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

