

/* this ALWAYS GENERATED file contains the proxy stub code */


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


#include "ItSoftwareNCFSystem_i.h"

#define TYPE_FORMAT_STRING_SIZE   1271                              
#define PROC_FORMAT_STRING_SIZE   5867                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _ItSoftwareNCFSystem_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ItSoftwareNCFSystem_MIDL_TYPE_FORMAT_STRING;

typedef struct _ItSoftwareNCFSystem_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ItSoftwareNCFSystem_MIDL_PROC_FORMAT_STRING;

typedef struct _ItSoftwareNCFSystem_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ItSoftwareNCFSystem_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};



extern const ItSoftwareNCFSystem_MIDL_TYPE_FORMAT_STRING ItSoftwareNCFSystem__MIDL_TypeFormatString;
extern const ItSoftwareNCFSystem_MIDL_PROC_FORMAT_STRING ItSoftwareNCFSystem__MIDL_ProcFormatString;
extern const ItSoftwareNCFSystem_MIDL_EXPR_FORMAT_STRING ItSoftwareNCFSystem__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFCollectionList_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFCollectionList_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFCollectionMap_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFCollectionMap_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFString_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFString_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFRegistry_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFRegistry_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFIniFile_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFIniFile_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFGuid_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFGuid_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFEventLog_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFEventLog_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const ItSoftwareNCFSystem_MIDL_PROC_FORMAT_STRING ItSoftwareNCFSystem__MIDL_ProcFormatString =
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

	/* Procedure Clear */


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

	/* Procedure get_Empty */

/* 500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x7 ),	/* 7 */
/* 508 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x22 ),	/* 34 */
/* 514 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 516 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pvtbEmpty */

/* 526 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 528 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 530 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 534 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Size */

/* 538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 546 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x24 ),	/* 36 */
/* 552 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 554 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter plSize */

/* 564 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 566 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddItem */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0xa ),	/* 10 */
/* 584 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 592 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x1 ),	/* 1 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 602 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 604 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 606 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter vtValue */

/* 608 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 610 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 612 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Return value */

/* 614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 616 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveItemByKey */

/* 620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0xb ),	/* 11 */
/* 628 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 634 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 636 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x1 ),	/* 1 */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 646 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 648 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 650 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 654 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveItemByIndex */

/* 658 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0xc ),	/* 12 */
/* 666 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 672 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 674 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex */

/* 684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 686 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 692 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UpdateValueByKey */

/* 696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0xd ),	/* 13 */
/* 704 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 710 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 712 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 722 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 724 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 726 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter vtValue */

/* 728 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 730 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 732 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Return value */

/* 734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 736 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UpdateValueByIndex */

/* 740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0xe ),	/* 14 */
/* 748 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 754 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 756 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x1 ),	/* 1 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex */

/* 766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 768 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter vtValue */

/* 772 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 774 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 776 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Return value */

/* 778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 780 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetValueByKey */

/* 784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0xf ),	/* 15 */
/* 792 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 798 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 800 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 804 */	NdrFcShort( 0x1 ),	/* 1 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 810 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 812 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 814 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter pvtValue */

/* 816 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 818 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 820 */	NdrFcShort( 0x49c ),	/* Type Offset=1180 */

	/* Return value */

/* 822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 824 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetValueByIndex */

/* 828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x10 ),	/* 16 */
/* 836 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 844 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex */

/* 854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 856 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvtValue */

/* 860 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 862 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 864 */	NdrFcShort( 0x49c ),	/* Type Offset=1180 */

	/* Return value */

/* 866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 868 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetKeyByIndex */

/* 872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x11 ),	/* 17 */
/* 880 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 886 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 888 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex */

/* 898 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 900 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrKey */

/* 904 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 906 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 908 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 912 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Sort */

/* 916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x12 ),	/* 18 */
/* 924 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 930 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 932 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 944 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetItemByIndex */

/* 948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x13 ),	/* 19 */
/* 956 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 962 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 964 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 966 */	NdrFcShort( 0x1 ),	/* 1 */
/* 968 */	NdrFcShort( 0x1 ),	/* 1 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex */

/* 974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 976 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrKey */

/* 980 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 982 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 984 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Parameter pvtValue */

/* 986 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 988 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 990 */	NdrFcShort( 0x49c ),	/* Type Offset=1180 */

	/* Return value */

/* 992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 994 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CutLeft */

/* 998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1006 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1012 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1014 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1018 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1024 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1026 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1028 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter length */

/* 1030 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1032 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter result_string */

/* 1036 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1038 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1040 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1044 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CutMid */

/* 1048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1056 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1058 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1062 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1064 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1066 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1068 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1074 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1076 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1078 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter start_index */

/* 1080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1082 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter length */

/* 1086 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1088 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter result_string */

/* 1092 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1094 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1096 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1100 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CutRight */

/* 1104 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1112 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1118 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1120 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1124 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1130 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1132 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1134 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter length */

/* 1136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1138 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter result_string */

/* 1142 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1144 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1146 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1150 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Left */

/* 1154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0xa ),	/* 10 */
/* 1162 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1168 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1170 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1174 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1180 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1182 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1184 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter length */

/* 1186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1188 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter result_string */

/* 1192 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1194 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1196 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1200 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Mid */

/* 1204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1210 */	NdrFcShort( 0xb ),	/* 11 */
/* 1212 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1214 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1218 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1220 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1222 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1230 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1232 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1234 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter start_index */

/* 1236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1238 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter length */

/* 1242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1244 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter result_string */

/* 1248 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1250 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1252 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1256 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Right */

/* 1260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0xc ),	/* 12 */
/* 1268 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1274 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1276 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1286 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1288 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1290 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter length */

/* 1292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1294 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter result_string */

/* 1298 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1300 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1302 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1306 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SpanIncluding */

/* 1310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0xd ),	/* 13 */
/* 1318 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1324 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1326 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1328 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1330 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1336 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1338 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1340 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter char_set */

/* 1342 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1344 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1346 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 1348 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1350 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1352 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1356 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SpanExcluding */

/* 1360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0xe ),	/* 14 */
/* 1368 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1374 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1376 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1378 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1380 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1386 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1388 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1390 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter char_set */

/* 1392 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1394 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1396 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 1398 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1400 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1402 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1406 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ToUpperCase */

/* 1410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0xf ),	/* 15 */
/* 1418 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1424 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1426 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1430 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1436 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1438 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1440 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 1442 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1444 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1446 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1450 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ToLowerCase */

/* 1454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1462 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1468 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1470 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1472 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1474 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1480 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1482 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1484 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 1486 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1488 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1490 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1494 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reverse */

/* 1498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1504 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1506 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1512 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1514 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1516 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1524 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1526 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1528 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 1530 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1532 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1534 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1536 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1538 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Replace */

/* 1542 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1550 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1556 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1558 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1562 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1568 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1570 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1572 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter replace_string */

/* 1574 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1576 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1578 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter replacement_string */

/* 1580 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1582 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1584 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 1586 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1588 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1590 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1594 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReplaceSection */

/* 1598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1604 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1606 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1608 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1612 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1614 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1624 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1626 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1628 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter start_index */

/* 1630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1632 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter length */

/* 1636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1638 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter replacement_string */

/* 1642 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1644 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1646 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 1648 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1650 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1652 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1656 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Insert */

/* 1660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1666 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1668 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1674 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1676 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1678 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1680 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1686 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1688 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1690 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter insert_string */

/* 1692 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1694 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1696 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter index */

/* 1698 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1700 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter result_string */

/* 1704 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1706 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1708 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1712 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ToString */

/* 1716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1722 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1724 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1730 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1732 */	0xa,		/* 10 */
			0xc7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance has big byval param */
/* 1734 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1736 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1742 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1744 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1746 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Parameter result_string */

/* 1748 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1750 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1752 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1756 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLength */

/* 1760 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1766 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1768 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1772 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1774 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1776 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1780 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1786 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1788 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1790 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 1792 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1794 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1800 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringBetweenStrings */

/* 1804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1812 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1818 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1820 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1824 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1830 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1832 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1834 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter string1 */

/* 1836 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1838 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1840 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter string2 */

/* 1842 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1844 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1846 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 1848 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1850 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1852 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1856 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringBetweenStringsEx */

/* 1860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1868 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1874 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1876 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1880 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1886 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1888 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1890 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter string1 */

/* 1892 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1894 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1896 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter string2 */

/* 1898 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1900 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1902 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter string_pair_number */

/* 1904 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1906 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter result_value */

/* 1910 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1912 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1914 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1916 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1918 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringBeforeString */

/* 1922 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1928 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1930 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1936 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1938 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1940 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1942 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1946 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1948 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1950 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1952 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter search_string */

/* 1954 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1956 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1958 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 1960 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1962 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1964 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1968 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringAfterString */

/* 1972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1980 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1986 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1988 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 1998 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2000 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2002 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter search_string */

/* 2004 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2006 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2008 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 2010 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2012 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2014 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2018 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Append */

/* 2022 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2028 */	NdrFcShort( 0x1b ),	/* 27 */
/* 2030 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2036 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2038 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2042 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2048 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2050 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2052 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter append_string */

/* 2054 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2056 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2058 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 2060 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2062 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2064 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2068 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Compare */

/* 2072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2078 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2080 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2082 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2084 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2086 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2088 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2092 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string1 */

/* 2098 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2100 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2102 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter source_string2 */

/* 2104 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2106 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2108 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter case_sensitive */

/* 2110 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2112 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2114 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter result_value */

/* 2116 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2118 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2124 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Copy */

/* 2128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2134 */	NdrFcShort( 0x1d ),	/* 29 */
/* 2136 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2142 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2144 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2154 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2156 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2158 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 2160 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2162 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2164 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2168 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Trim */

/* 2172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x1e ),	/* 30 */
/* 2180 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2186 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2188 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2192 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2198 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2200 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2202 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 2204 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2206 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2208 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2212 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TrimLeft */

/* 2216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2222 */	NdrFcShort( 0x1f ),	/* 31 */
/* 2224 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2230 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2232 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2236 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2242 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2244 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2246 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 2248 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2250 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2252 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2256 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TrimRight */

/* 2260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2266 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2268 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2274 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2276 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2286 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2288 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2290 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 2292 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2294 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2296 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2300 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TrimEx */

/* 2304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2310 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2312 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2318 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2320 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2322 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2324 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2330 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2332 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2334 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter trim_characters */

/* 2336 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2338 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2340 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 2342 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2344 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2346 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2350 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TrimLeftEx */

/* 2354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2360 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2362 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2368 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2370 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2372 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2374 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2380 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2382 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2384 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter trim_characters */

/* 2386 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2388 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2390 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 2392 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2394 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2396 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2400 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TrimRightEx */

/* 2404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2410 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2412 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2418 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2420 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2422 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2430 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2432 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2434 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter trim_characters */

/* 2436 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2438 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2440 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 2442 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2444 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2446 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2450 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSubstringCount */

/* 2454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2460 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2462 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2466 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2468 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2470 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2474 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2480 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2482 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2484 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter substring */

/* 2486 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2488 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2490 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 2492 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2494 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2500 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Split */

/* 2504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2510 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2512 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2518 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2520 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2522 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2528 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2530 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2532 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2534 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter delimiter_string */

/* 2536 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2538 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2540 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter remainder_string */

/* 2542 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2544 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2546 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Parameter result_string */

/* 2548 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2550 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2552 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2556 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ToFixedLength */

/* 2560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2566 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2568 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2574 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2576 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2578 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2580 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2584 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2586 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2588 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2590 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter length */

/* 2592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2594 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fill_string */

/* 2598 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2600 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2602 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter output */

/* 2604 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2606 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2608 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2612 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Find */

/* 2616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2622 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2624 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2628 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2630 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2632 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2642 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2644 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2646 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter substr */

/* 2648 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2650 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2652 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_index */

/* 2654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2656 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2662 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindNext */

/* 2666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2672 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2674 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2678 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2680 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2682 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2686 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2692 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2694 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2696 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter substr */

/* 2698 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2700 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2702 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter last_found_index */

/* 2704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2706 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter result_index */

/* 2710 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2712 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2718 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindReverse */

/* 2722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2728 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2730 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2734 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2736 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2738 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2748 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2750 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2752 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter substr */

/* 2754 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2756 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2758 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_index */

/* 2760 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2762 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2768 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindReverseNext */

/* 2772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2780 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2784 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2786 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2788 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2792 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2798 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2800 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2802 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter substr */

/* 2804 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2806 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2808 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter last_found_index */

/* 2810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2812 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter result_index */

/* 2816 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2818 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2824 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindFirstOf */

/* 2828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2834 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2836 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2842 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2844 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2854 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2856 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2858 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter substr */

/* 2860 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2862 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2864 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_index */

/* 2866 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2868 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2874 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindFirstNotOf */

/* 2878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2884 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2886 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2890 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2892 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2894 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2898 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2904 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2906 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2908 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter substr */

/* 2910 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2912 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2914 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_index */

/* 2916 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2918 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2922 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2924 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindLastOf */

/* 2928 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2934 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2936 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2940 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2942 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2944 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2948 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 2954 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2956 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2958 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter substr */

/* 2960 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2962 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2964 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_index */

/* 2966 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2968 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2974 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindLastNotOf */

/* 2978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2984 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2986 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2990 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2992 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2994 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3004 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3006 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3008 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter substr */

/* 3010 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3012 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3014 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_index */

/* 3016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3018 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3024 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateUniform */

/* 3028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3034 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3036 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3042 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3044 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter length */

/* 3054 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3056 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fill_string */

/* 3060 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3062 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3064 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 3066 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3068 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3070 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 3072 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3074 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLocalNumberFormat */

/* 3078 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3084 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3086 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3092 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3094 */	0xa,		/* 10 */
			0xc7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance has big byval param */
/* 3096 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3098 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 3104 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3106 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3108 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Parameter result_string */

/* 3110 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3112 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3114 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 3116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3118 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumberFormat */

/* 3122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3128 */	NdrFcShort( 0x31 ),	/* 49 */
/* 3130 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 3132 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3136 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 3138 */	0xa,		/* 10 */
			0xc7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance has big byval param */
/* 3140 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3142 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 3148 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3150 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3152 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Parameter num_digits */

/* 3154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3156 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter grouping */

/* 3160 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3162 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter decimal_sep */

/* 3166 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3168 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3170 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter thousand_sep */

/* 3172 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3174 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3176 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter negative_number_format */

/* 3178 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3180 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3182 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter result_string */

/* 3184 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3186 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3188 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 3190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3192 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 3194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLocalCurrencyFormat */

/* 3196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3202 */	NdrFcShort( 0x32 ),	/* 50 */
/* 3204 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3210 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3212 */	0xa,		/* 10 */
			0xc7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance has big byval param */
/* 3214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3216 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 3222 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3224 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3226 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Parameter result_string */

/* 3228 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3230 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3232 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 3234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3236 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrencyFormat */

/* 3240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3246 */	NdrFcShort( 0x33 ),	/* 51 */
/* 3248 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 3250 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3254 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 3256 */	0xa,		/* 10 */
			0xc7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance has big byval param */
/* 3258 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3260 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 3266 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3268 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3270 */	NdrFcShort( 0x486 ),	/* Type Offset=1158 */

	/* Parameter num_digits */

/* 3272 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3274 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter grouping */

/* 3278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3280 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter decimal_sep */

/* 3284 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3286 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3288 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter thousand_sep */

/* 3290 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3292 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3294 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter negative_currency_format */

/* 3296 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3298 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3300 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter positive_currency_format */

/* 3302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3304 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3306 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter currency_symbol */

/* 3308 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3310 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 3312 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 3314 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3316 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 3318 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 3320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3322 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 3324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExpandEnvironmentString */

/* 3326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3332 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3334 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3340 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3342 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3344 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3346 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter environment_string */

/* 3352 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3354 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3356 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 3358 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3360 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3362 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 3364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3366 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HasAlpha */

/* 3370 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3376 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3378 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3382 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3384 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3386 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3396 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3398 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3400 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 3402 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3404 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3406 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3410 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HasAlphaNumeric */

/* 3414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3420 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3422 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3428 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3430 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3434 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3440 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3442 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3444 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 3446 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3448 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3450 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3452 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3454 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HasUpperCase */

/* 3458 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3464 */	NdrFcShort( 0x37 ),	/* 55 */
/* 3466 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3470 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3472 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3474 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3478 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3484 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3486 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3488 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 3490 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3492 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3494 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3498 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HasLowerCase */

/* 3502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3508 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3510 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3514 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3516 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3518 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3522 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3528 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3530 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3532 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 3534 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3536 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3538 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3542 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HasDigit */

/* 3546 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3552 */	NdrFcShort( 0x39 ),	/* 57 */
/* 3554 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3558 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3560 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3562 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3566 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3572 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3574 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3576 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 3578 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3580 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3582 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3586 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HasHexDigit */

/* 3590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3596 */	NdrFcShort( 0x3a ),	/* 58 */
/* 3598 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3602 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3604 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3606 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3610 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3616 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3618 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3620 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 3622 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3624 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3626 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3630 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HasSpace */

/* 3634 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3640 */	NdrFcShort( 0x3b ),	/* 59 */
/* 3642 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3646 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3648 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3650 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3660 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3662 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3664 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 3666 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3668 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3670 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3674 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HasPunct */

/* 3678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3684 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3686 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3690 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3692 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3694 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3698 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3704 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3706 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3708 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 3710 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3712 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3714 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3718 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HasPrint */

/* 3722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3728 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3730 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3734 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3736 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3738 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3742 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3748 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3750 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3752 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 3754 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3756 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3758 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3762 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HasGraph */

/* 3766 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3772 */	NdrFcShort( 0x3e ),	/* 62 */
/* 3774 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3778 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3780 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3782 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3786 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3792 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3794 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3796 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 3798 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3800 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3802 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3806 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HasASCII */

/* 3810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3816 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3818 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3822 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3824 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3826 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3830 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3836 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3838 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3840 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 3842 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3844 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3846 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3850 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HasControl */

/* 3854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3860 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3862 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3866 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3868 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3870 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3874 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3880 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3882 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3884 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 3886 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3888 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3890 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3894 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsAlpha */

/* 3898 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3904 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3906 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3910 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3912 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3914 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3918 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3924 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3926 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3928 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 3930 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3932 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3934 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3938 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsAlphaNumeric */

/* 3942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3948 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3950 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3954 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3956 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3958 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 3968 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3970 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3972 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 3974 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3976 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3978 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3982 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsUpperCase */

/* 3986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3992 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3994 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3998 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4000 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4002 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 4012 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4014 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4016 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 4018 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4020 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4022 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4026 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsLowerCase */

/* 4030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4036 */	NdrFcShort( 0x44 ),	/* 68 */
/* 4038 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4042 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4044 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4046 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4050 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 4056 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4058 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4060 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 4062 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4064 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4066 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4070 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsDigit */

/* 4074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4080 */	NdrFcShort( 0x45 ),	/* 69 */
/* 4082 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4088 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4090 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 4100 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4102 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4104 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 4106 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4108 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4110 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4114 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsHexDigit */

/* 4118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4124 */	NdrFcShort( 0x46 ),	/* 70 */
/* 4126 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4130 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4132 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4134 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 4144 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4148 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 4150 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4154 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4158 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSpace */

/* 4162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4168 */	NdrFcShort( 0x47 ),	/* 71 */
/* 4170 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4174 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4176 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4178 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 4188 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4190 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4192 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 4194 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4196 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4198 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4202 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsPunct */

/* 4206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4212 */	NdrFcShort( 0x48 ),	/* 72 */
/* 4214 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4218 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4220 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4222 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4226 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 4232 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4234 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4236 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 4238 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4240 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4242 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4246 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsPrint */

/* 4250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4256 */	NdrFcShort( 0x49 ),	/* 73 */
/* 4258 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4262 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4264 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4266 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4270 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 4276 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4280 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 4282 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4284 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4286 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4290 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsGraph */

/* 4294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4300 */	NdrFcShort( 0x4a ),	/* 74 */
/* 4302 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4306 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4308 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4310 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4314 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 4320 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4322 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4324 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 4326 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4328 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4330 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4334 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsASCII */

/* 4338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4344 */	NdrFcShort( 0x4b ),	/* 75 */
/* 4346 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4350 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4352 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4354 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 4364 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4366 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4368 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 4370 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4372 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4374 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4378 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsControl */

/* 4382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4388 */	NdrFcShort( 0x4c ),	/* 76 */
/* 4390 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4394 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4396 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4398 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4402 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 4408 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4410 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4412 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_value */

/* 4414 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4416 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4418 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4422 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SplitToCollection */

/* 4426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4432 */	NdrFcShort( 0x4d ),	/* 77 */
/* 4434 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4440 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4442 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 4452 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4454 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4456 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter delimiter_string */

/* 4458 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4460 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4462 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter ppINCFCollectionList */

/* 4464 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4466 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4468 */	NdrFcShort( 0x4ca ),	/* Type Offset=1226 */

	/* Return value */

/* 4470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4472 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LineSplit */

/* 4476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4482 */	NdrFcShort( 0x4e ),	/* 78 */
/* 4484 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4490 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4492 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4500 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 4502 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4504 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4506 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter remainder_string */

/* 4508 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 4510 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4512 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Parameter result_string */

/* 4514 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4516 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4518 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 4520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4522 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LineSplitToCollection */

/* 4526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4532 */	NdrFcShort( 0x4f ),	/* 79 */
/* 4534 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4540 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4542 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4546 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 4552 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4554 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4556 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter ppINCFCollectionList */

/* 4558 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4560 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4562 */	NdrFcShort( 0x4ca ),	/* Type Offset=1226 */

	/* Return value */

/* 4564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4566 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StringBetweenStringsInOrder */

/* 4570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4576 */	NdrFcShort( 0x50 ),	/* 80 */
/* 4578 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4584 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4586 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4588 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4590 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source_string */

/* 4596 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4598 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4600 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter string1 */

/* 4602 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4604 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4606 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter string2 */

/* 4608 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4610 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4612 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter result_string */

/* 4614 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4616 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4618 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 4620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4622 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TimeToString */

/* 4626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4632 */	NdrFcShort( 0x51 ),	/* 81 */
/* 4634 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4640 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4642 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter format */

/* 4652 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4654 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4656 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter timeMilliseconds */

/* 4658 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4660 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter result_string */

/* 4664 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4666 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4668 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 4670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4672 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteKey */

/* 4676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4682 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4684 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4690 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4692 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4696 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eregclass */

/* 4702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4704 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4706 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter path */

/* 4708 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4710 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4712 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter key */

/* 4714 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4716 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4718 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 4720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4722 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateKey */

/* 4726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4734 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4740 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4742 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4746 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eregclass */

/* 4752 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4754 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4756 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter path */

/* 4758 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4760 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4762 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter key */

/* 4764 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4766 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4768 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter default_data */

/* 4770 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4772 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4774 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 4776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4778 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddValue */

/* 4782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4788 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4790 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4796 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4798 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eregclass */

/* 4808 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4812 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter path */

/* 4814 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4816 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4818 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter key */

/* 4820 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4822 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4824 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter value */

/* 4826 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4828 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4830 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter data */

/* 4832 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4834 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4836 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 4838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4840 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteValue */

/* 4844 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4850 */	NdrFcShort( 0xa ),	/* 10 */
/* 4852 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4858 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4860 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4864 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eregclass */

/* 4870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4872 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4874 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter path */

/* 4876 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4878 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4880 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter key */

/* 4882 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4884 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4886 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter value */

/* 4888 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4890 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4892 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 4894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4896 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadValue */

/* 4900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4906 */	NdrFcShort( 0xb ),	/* 11 */
/* 4908 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4914 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4916 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4918 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4920 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eregclass */

/* 4926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4928 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4930 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter path */

/* 4932 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4934 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4936 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter key */

/* 4938 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4940 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4942 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter value */

/* 4944 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4946 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4948 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter data */

/* 4950 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4952 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4954 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 4956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4958 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumerateKeys */

/* 4962 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4968 */	NdrFcShort( 0xc ),	/* 12 */
/* 4970 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4976 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4978 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4982 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4986 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eregclass */

/* 4988 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4990 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4992 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter path */

/* 4994 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4996 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4998 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter ppINCFCollectionList */

/* 5000 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5002 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5004 */	NdrFcShort( 0x4ca ),	/* Type Offset=1226 */

	/* Return value */

/* 5006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5008 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumerateValues */

/* 5012 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5018 */	NdrFcShort( 0xd ),	/* 13 */
/* 5020 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5026 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5028 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5032 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eregclass */

/* 5038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5040 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5042 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter path */

/* 5044 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5046 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5048 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter key */

/* 5050 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5052 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5054 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter ppINCFCollectionList */

/* 5056 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5058 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5060 */	NdrFcShort( 0x4ca ),	/* Type Offset=1226 */

	/* Return value */

/* 5062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5064 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumerateStringValues */

/* 5068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5074 */	NdrFcShort( 0xe ),	/* 14 */
/* 5076 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5082 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5084 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5088 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eregclass */

/* 5094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5096 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5098 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter path */

/* 5100 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5102 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5104 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter key */

/* 5106 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5108 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5110 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter ppINCFCollectionMap */

/* 5112 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5114 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5116 */	NdrFcShort( 0x4e0 ),	/* Type Offset=1248 */

	/* Return value */

/* 5118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5120 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StoreCollection */

/* 5124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5130 */	NdrFcShort( 0xf ),	/* 15 */
/* 5132 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5138 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5140 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eregclass */

/* 5150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5152 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5154 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter path */

/* 5156 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5158 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5160 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter key */

/* 5162 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5164 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5166 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter pINCFCollectionMap */

/* 5168 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5170 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5172 */	NdrFcShort( 0x4e4 ),	/* Type Offset=1252 */

	/* Return value */

/* 5174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5176 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateKey */

/* 5180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5186 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5188 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5190 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5194 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5196 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5204 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 5206 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5208 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5210 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter sectionname */

/* 5212 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5214 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5216 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter keyname */

/* 5218 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5220 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5222 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter value */

/* 5224 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5226 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5228 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter overwriteifexist */

/* 5230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5232 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5234 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5238 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteKey */

/* 5242 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5250 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5256 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5258 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5262 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 5268 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5270 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5272 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter sectionname */

/* 5274 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5276 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5278 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter keyname */

/* 5280 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5282 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5284 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 5286 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5288 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadValue */

/* 5292 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5298 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5300 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5306 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5308 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5312 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 5318 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5320 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5322 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter sectionname */

/* 5324 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5326 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5328 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter keyname */

/* 5330 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5332 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5334 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter value */

/* 5336 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5338 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5340 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 5342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5344 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetValue */

/* 5348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5354 */	NdrFcShort( 0xa ),	/* 10 */
/* 5356 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5362 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5364 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 5374 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5376 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5378 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter sectionname */

/* 5380 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5382 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5384 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter keyname */

/* 5386 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5388 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5390 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter value */

/* 5392 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5394 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5396 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 5398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5400 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateSection */

/* 5404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5410 */	NdrFcShort( 0xb ),	/* 11 */
/* 5412 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5418 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5420 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 5430 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5432 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5434 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter sectionname */

/* 5436 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5438 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5440 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 5442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5444 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteSection */

/* 5448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5454 */	NdrFcShort( 0xc ),	/* 12 */
/* 5456 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5462 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5464 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 5474 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5476 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5478 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter sectionname */

/* 5480 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5482 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5484 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 5486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5488 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StoreCollection */

/* 5492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5498 */	NdrFcShort( 0xd ),	/* 13 */
/* 5500 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5502 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5506 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5508 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5512 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 5518 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5520 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5522 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter sectionname */

/* 5524 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5526 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5528 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter pINCFCollectionMap */

/* 5530 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5532 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5534 */	NdrFcShort( 0x4e4 ),	/* Type Offset=1252 */

	/* Parameter overwriteifexist */

/* 5536 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5538 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5540 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5544 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumerateKeys */

/* 5548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5554 */	NdrFcShort( 0xe ),	/* 14 */
/* 5556 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5562 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5564 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5568 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 5574 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5576 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5578 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter sectionname */

/* 5580 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5582 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5584 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter ppINCFCollectionMap */

/* 5586 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5588 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5590 */	NdrFcShort( 0x4e0 ),	/* Type Offset=1248 */

	/* Return value */

/* 5592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5594 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumerateSections */

/* 5598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5604 */	NdrFcShort( 0xf ),	/* 15 */
/* 5606 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5612 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5614 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 5624 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5626 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5628 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter ppINCFCollectionList */

/* 5630 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5632 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5634 */	NdrFcShort( 0x4ca ),	/* Type Offset=1226 */

	/* Return value */

/* 5636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5638 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateGuidType */

/* 5642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5648 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5650 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5656 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5658 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 5660 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__INCFGuid0000 */

/* 5668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5670 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5672 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter pbstrGUID */

/* 5674 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5676 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5678 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 5680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5682 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateGuid */

/* 5686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5694 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5700 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5702 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 5704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstrGUID */

/* 5712 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5714 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5716 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 5718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5720 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReportEvent */

/* 5724 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5730 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5732 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 5734 */	NdrFcShort( 0x1c ),	/* 28 */
/* 5736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5738 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 5740 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sourcename */

/* 5750 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5752 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5754 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter eeventlogtype */

/* 5756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5758 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5760 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter category */

/* 5762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5764 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5766 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter eventid */

/* 5768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5770 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter numberofstrings */

/* 5774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5776 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5778 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter description */

/* 5780 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5782 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5784 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 5786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5788 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReportEventEx */

/* 5792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5800 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 5802 */	NdrFcShort( 0x1c ),	/* 28 */
/* 5804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5806 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 5808 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5812 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uncservername */

/* 5818 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5820 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5822 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter sourcename */

/* 5824 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5826 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5828 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter eeventlogtype */

/* 5830 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5832 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5834 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter category */

/* 5836 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5838 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5840 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter eventid */

/* 5842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5844 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter numberofstrings */

/* 5848 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5850 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5852 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter description */

/* 5854 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5856 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5858 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 5860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5862 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 5864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ItSoftwareNCFSystem_MIDL_TYPE_FORMAT_STRING ItSoftwareNCFSystem__MIDL_TypeFormatString =
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
/* 1194 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0xfc92 ),	/* Offset= -878 (324) */
/* 1204 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1206 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1212) */
/* 1208 */	
			0x13, 0x0,	/* FC_OP */
/* 1210 */	NdrFcShort( 0xfca4 ),	/* Offset= -860 (350) */
/* 1212 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1208) */
/* 1222 */	
			0x11, 0x0,	/* FC_RP */
/* 1224 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1212) */
/* 1226 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1228 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1230) */
/* 1230 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1232 */	NdrFcLong( 0x493378e5 ),	/* 1228110053 */
/* 1236 */	NdrFcShort( 0x71c6 ),	/* 29126 */
/* 1238 */	NdrFcShort( 0x4aca ),	/* 19146 */
/* 1240 */	0xac,		/* 172 */
			0xb4,		/* 180 */
/* 1242 */	0xb2,		/* 178 */
			0x8d,		/* 141 */
/* 1244 */	0x26,		/* 38 */
			0x95,		/* 149 */
/* 1246 */	0xba,		/* 186 */
			0x33,		/* 51 */
/* 1248 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1250 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1252) */
/* 1252 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1254 */	NdrFcLong( 0x302930a6 ),	/* 808005798 */
/* 1258 */	NdrFcShort( 0x6e9b ),	/* 28315 */
/* 1260 */	NdrFcShort( 0x4040 ),	/* 16448 */
/* 1262 */	0xb1,		/* 177 */
			0x10,		/* 16 */
/* 1264 */	0x80,		/* 128 */
			0xd8,		/* 216 */
/* 1266 */	0x2e,		/* 46 */
			0xb2,		/* 178 */
/* 1268 */	0x2,		/* 2 */
			0x9a,		/* 154 */

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



/* Object interface: INCFCollectionMap, ver. 0.0,
   GUID={0x302930A6,0x6E9B,0x4040,{0xB1,0x10,0x80,0xD8,0x2E,0xB2,0x02,0x9A}} */

#pragma code_seg(".orpc")
static const unsigned short INCFCollectionMap_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    500,
    538,
    76,
    576,
    620,
    658,
    696,
    740,
    784,
    828,
    872,
    916,
    948
    };



/* Standard interface: __MIDL_itf_ItSoftwareNCFSystem_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: INCFString, ver. 0.0,
   GUID={0x3F2FC46F,0x4FDA,0x45BF,{0x90,0xA5,0xCA,0x5E,0xB0,0x85,0x9E,0xF8}} */

#pragma code_seg(".orpc")
static const unsigned short INCFString_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    998,
    1048,
    1104,
    1154,
    1204,
    1260,
    1310,
    1360,
    1410,
    1454,
    1498,
    1542,
    1598,
    1660,
    1716,
    1760,
    1804,
    1860,
    1922,
    1972,
    2022,
    2072,
    2128,
    2172,
    2216,
    2260,
    2304,
    2354,
    2404,
    2454,
    2504,
    2560,
    2616,
    2666,
    2722,
    2772,
    2828,
    2878,
    2928,
    2978,
    3028,
    3078,
    3122,
    3196,
    3240,
    3326,
    3370,
    3414,
    3458,
    3502,
    3546,
    3590,
    3634,
    3678,
    3722,
    3766,
    3810,
    3854,
    3898,
    3942,
    3986,
    4030,
    4074,
    4118,
    4162,
    4206,
    4250,
    4294,
    4338,
    4382,
    4426,
    4476,
    4526,
    4570,
    4626
    };



/* Standard interface: __MIDL_itf_ItSoftwareNCFSystem_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: INCFRegistry, ver. 0.0,
   GUID={0xCEBF8F72,0x25BB,0x41BC,{0xB9,0x18,0xF6,0x06,0x5A,0x35,0x20,0x50}} */

#pragma code_seg(".orpc")
static const unsigned short INCFRegistry_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4676,
    4726,
    4782,
    4844,
    4900,
    4962,
    5012,
    5068,
    5124
    };



/* Object interface: INCFIniFile, ver. 0.0,
   GUID={0xCC2FE534,0xBB05,0x42B0,{0xB5,0x81,0xF3,0x41,0x1C,0x35,0xD9,0x5E}} */

#pragma code_seg(".orpc")
static const unsigned short INCFIniFile_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5180,
    5242,
    5292,
    5348,
    5404,
    5448,
    5492,
    5548,
    5598
    };



/* Standard interface: __MIDL_itf_ItSoftwareNCFSystem_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: INCFGuid, ver. 0.0,
   GUID={0x9FDA4821,0x618F,0x4FEB,{0x9B,0x62,0x02,0xC3,0x6C,0x64,0x93,0xDD}} */

#pragma code_seg(".orpc")
static const unsigned short INCFGuid_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5642,
    5686
    };



/* Standard interface: __MIDL_itf_ItSoftwareNCFSystem_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: INCFEventLog, ver. 0.0,
   GUID={0x56F2F97E,0x4B27,0x4F64,{0xA0,0xD5,0x39,0x15,0x8E,0x53,0x5F,0xFB}} */

#pragma code_seg(".orpc")
static const unsigned short INCFEventLog_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5724,
    5792
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


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
__midl_frag1059_t;
extern const __midl_frag1059_t __midl_frag1059;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1058_t;
extern const __midl_frag1058_t __midl_frag1058;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag1057_t;
extern const __midl_frag1057_t __midl_frag1057;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1056_t;
extern const __midl_frag1056_t __midl_frag1056;

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
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag1048_t;
extern const __midl_frag1048_t __midl_frag1048;

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
__midl_frag1038_t;
extern const __midl_frag1038_t __midl_frag1038;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1036_t;
extern const __midl_frag1036_t __midl_frag1036;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag1035_t;
extern const __midl_frag1035_t __midl_frag1035;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1034_t;
extern const __midl_frag1034_t __midl_frag1034;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1033_t;
extern const __midl_frag1033_t __midl_frag1033;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1027_t;
extern const __midl_frag1027_t __midl_frag1027;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1025_t;
extern const __midl_frag1025_t __midl_frag1025;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1024_t;
extern const __midl_frag1024_t __midl_frag1024;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1023_t;
extern const __midl_frag1023_t __midl_frag1023;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1020_t;
extern const __midl_frag1020_t __midl_frag1020;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1018_t;
extern const __midl_frag1018_t __midl_frag1018;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1017_t;
extern const __midl_frag1017_t __midl_frag1017;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1016_t;
extern const __midl_frag1016_t __midl_frag1016;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1011_t;
extern const __midl_frag1011_t __midl_frag1011;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag1002_t;
extern const __midl_frag1002_t __midl_frag1002;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag996_t;
extern const __midl_frag996_t __midl_frag996;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag980_t;
extern const __midl_frag980_t __midl_frag980;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag969_t;
extern const __midl_frag969_t __midl_frag969;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag961_t;
extern const __midl_frag961_t __midl_frag961;

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
__midl_frag950_t;
extern const __midl_frag950_t __midl_frag950;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag941_t;
extern const __midl_frag941_t __midl_frag941;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag931_t;
extern const __midl_frag931_t __midl_frag931;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag921_t;
extern const __midl_frag921_t __midl_frag921;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag913_t;
extern const __midl_frag913_t __midl_frag913;

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
__midl_frag901_t;
extern const __midl_frag901_t __midl_frag901;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag892_t;
extern const __midl_frag892_t __midl_frag892;

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
__midl_frag881_t;
extern const __midl_frag881_t __midl_frag881;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag865_t;
extern const __midl_frag865_t __midl_frag865;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag857_t;
extern const __midl_frag857_t __midl_frag857;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag832_t;
extern const __midl_frag832_t __midl_frag832;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag829_t;
extern const __midl_frag829_t __midl_frag829;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag820_t;
extern const __midl_frag820_t __midl_frag820;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag817_t;
extern const __midl_frag817_t __midl_frag817;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag814_t;
extern const __midl_frag814_t __midl_frag814;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag669_t;
extern const __midl_frag669_t __midl_frag669;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag654_t;
extern const __midl_frag654_t __midl_frag654;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag653_t;
extern const __midl_frag653_t __midl_frag653;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag652_t;
extern const __midl_frag652_t __midl_frag652;

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
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
}
__midl_frag651_t;
extern const __midl_frag651_t __midl_frag651;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag643_t;
extern const __midl_frag643_t __midl_frag643;

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
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag628_t;
extern const __midl_frag628_t __midl_frag628;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag612_t;
extern const __midl_frag612_t __midl_frag612;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag609_t;
extern const __midl_frag609_t __midl_frag609;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag604_t;
extern const __midl_frag604_t __midl_frag604;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag571_t;
extern const __midl_frag571_t __midl_frag571;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag536_t;
extern const __midl_frag536_t __midl_frag536;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag524_t;
extern const __midl_frag524_t __midl_frag524;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag507_t;
extern const __midl_frag507_t __midl_frag507;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag452_t;
extern const __midl_frag452_t __midl_frag452;

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
__midl_frag413_t;
extern const __midl_frag413_t __midl_frag413;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag396_t;
extern const __midl_frag396_t __midl_frag396;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag378_t;
extern const __midl_frag378_t __midl_frag378;

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
__midl_frag367_t;
extern const __midl_frag367_t __midl_frag367;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag300_t;
extern const __midl_frag300_t __midl_frag300;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag265_t;
extern const __midl_frag265_t __midl_frag265;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag264_t;
extern const __midl_frag264_t __midl_frag264;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag263_t;
extern const __midl_frag263_t __midl_frag263;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag258_t;
extern const __midl_frag258_t __midl_frag258;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
}
__midl_frag256_t;
extern const __midl_frag256_t __midl_frag256;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag244_t;
extern const __midl_frag244_t __midl_frag244;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag237_t;
extern const __midl_frag237_t __midl_frag237;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag231_t;
extern const __midl_frag231_t __midl_frag231;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag224_t;
extern const __midl_frag224_t __midl_frag224;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag221_t;
extern const __midl_frag221_t __midl_frag221;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag217_t;
extern const __midl_frag217_t __midl_frag217;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag204_t;
extern const __midl_frag204_t __midl_frag204;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag200_t;
extern const __midl_frag200_t __midl_frag200;

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
NDR64_FORMAT_CHAR
__midl_frag99_t;
extern const __midl_frag99_t __midl_frag99;

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

static const __midl_frag1059_t __midl_frag1059 =
0x5    /* FC64_INT32 */;

static const __midl_frag1058_t __midl_frag1058 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag20
};

static const __midl_frag1057_t __midl_frag1057 =
{ 
/* wireBSTR */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 1 /* 0x1 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag1058
};

static const __midl_frag1056_t __midl_frag1056 =
0x4    /* FC64_INT16 */;

static const __midl_frag1048_t __midl_frag1048 =
{ 
/* ReportEventEx */
    { 
    /* ReportEventEx */      /* procedure ReportEventEx */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 28 /* 0x1c */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* uncservername */      /* parameter uncservername */
        &__midl_frag1057,
        { 
        /* uncservername */
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
    /* sourcename */      /* parameter sourcename */
        &__midl_frag1057,
        { 
        /* sourcename */
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
    /* eeventlogtype */      /* parameter eeventlogtype */
        &__midl_frag1059,
        { 
        /* eeventlogtype */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* category */      /* parameter category */
        &__midl_frag1056,
        { 
        /* category */
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
    /* eventid */      /* parameter eventid */
        &__midl_frag1059,
        { 
        /* eventid */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* numberofstrings */      /* parameter numberofstrings */
        &__midl_frag1056,
        { 
        /* numberofstrings */
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* description */      /* parameter description */
        &__midl_frag1057,
        { 
        /* description */
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
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag1038_t __midl_frag1038 =
{ 
/* ReportEvent */
    { 
    /* ReportEvent */      /* procedure ReportEvent */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 28 /* 0x1c */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* sourcename */      /* parameter sourcename */
        &__midl_frag1057,
        { 
        /* sourcename */
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
    /* eeventlogtype */      /* parameter eeventlogtype */
        &__midl_frag1059,
        { 
        /* eeventlogtype */
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
    /* category */      /* parameter category */
        &__midl_frag1056,
        { 
        /* category */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* eventid */      /* parameter eventid */
        &__midl_frag1059,
        { 
        /* eventid */
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
    /* numberofstrings */      /* parameter numberofstrings */
        &__midl_frag1056,
        { 
        /* numberofstrings */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* description */      /* parameter description */
        &__midl_frag1057,
        { 
        /* description */
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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

static const __midl_frag1036_t __midl_frag1036 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag20
};

static const __midl_frag1035_t __midl_frag1035 =
{ 
/* wireBSTR */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 1 /* 0x1 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag1036
};

static const __midl_frag1034_t __midl_frag1034 =
{ 
/* *wireBSTR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1035
};

static const __midl_frag1033_t __midl_frag1033 =
{ 
/* CreateGuid */
    { 
    /* CreateGuid */      /* procedure CreateGuid */
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
    /* pbstrGUID */      /* parameter pbstrGUID */
        &__midl_frag1035,
        { 
        /* pbstrGUID */
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
        &__midl_frag1059,
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

static const __midl_frag1027_t __midl_frag1027 =
{ 
/* CreateGuidType */
    { 
    /* CreateGuidType */      /* procedure CreateGuidType */
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
    /* __MIDL__INCFGuid0000 */      /* parameter __MIDL__INCFGuid0000 */
        &__midl_frag1059,
        { 
        /* __MIDL__INCFGuid0000 */
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
    /* pbstrGUID */      /* parameter pbstrGUID */
        &__midl_frag1035,
        { 
        /* pbstrGUID */
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
        &__midl_frag1059,
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

static const __midl_frag1025_t __midl_frag1025 =
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

static const __midl_frag1024_t __midl_frag1024 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1025
};

static const __midl_frag1023_t __midl_frag1023 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1024
};

static const __midl_frag1020_t __midl_frag1020 =
{ 
/* EnumerateSections */
    { 
    /* EnumerateSections */      /* procedure EnumerateSections */
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
        &__midl_frag1057,
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
    /* ppINCFCollectionList */      /* parameter ppINCFCollectionList */
        &__midl_frag1023,
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
        &__midl_frag1059,
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

static const __midl_frag1018_t __midl_frag1018 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x302930a6,
        0x6e9b,
        0x4040,
        {0xb1, 0x10, 0x80, 0xd8, 0x2e, 0xb2, 0x02, 0x9a}
    }
};

static const __midl_frag1017_t __midl_frag1017 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1018
};

static const __midl_frag1016_t __midl_frag1016 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1017
};

static const __midl_frag1011_t __midl_frag1011 =
{ 
/* EnumerateKeys */
    { 
    /* EnumerateKeys */      /* procedure EnumerateKeys */
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
    /* filename */      /* parameter filename */
        &__midl_frag1057,
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
    /* sectionname */      /* parameter sectionname */
        &__midl_frag1057,
        { 
        /* sectionname */
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
    /* ppINCFCollectionMap */      /* parameter ppINCFCollectionMap */
        &__midl_frag1016,
        { 
        /* ppINCFCollectionMap */
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
        &__midl_frag1059,
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

static const __midl_frag1002_t __midl_frag1002 =
{ 
/* StoreCollection */
    { 
    /* StoreCollection */      /* procedure StoreCollection */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* filename */      /* parameter filename */
        &__midl_frag1057,
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
    /* sectionname */      /* parameter sectionname */
        &__midl_frag1057,
        { 
        /* sectionname */
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
    /* pINCFCollectionMap */      /* parameter pINCFCollectionMap */
        &__midl_frag1017,
        { 
        /* pINCFCollectionMap */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* overwriteifexist */      /* parameter overwriteifexist */
        &__midl_frag1056,
        { 
        /* overwriteifexist */
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
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag996_t __midl_frag996 =
{ 
/* DeleteSection */
    { 
    /* DeleteSection */      /* procedure DeleteSection */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
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
        &__midl_frag1057,
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
    /* sectionname */      /* parameter sectionname */
        &__midl_frag1057,
        { 
        /* sectionname */
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
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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

static const __midl_frag980_t __midl_frag980 =
{ 
/* SetValue */
    { 
    /* SetValue */      /* procedure SetValue */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* filename */      /* parameter filename */
        &__midl_frag1057,
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
    /* sectionname */      /* parameter sectionname */
        &__midl_frag1057,
        { 
        /* sectionname */
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
    /* keyname */      /* parameter keyname */
        &__midl_frag1057,
        { 
        /* keyname */
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
    /* value */      /* parameter value */
        &__midl_frag1057,
        { 
        /* value */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag969_t __midl_frag969 =
{ 
/* ReadValue */
    { 
    /* ReadValue */      /* procedure ReadValue */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* filename */      /* parameter filename */
        &__midl_frag1057,
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
    /* sectionname */      /* parameter sectionname */
        &__midl_frag1057,
        { 
        /* sectionname */
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
    /* keyname */      /* parameter keyname */
        &__midl_frag1057,
        { 
        /* keyname */
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
    /* value */      /* parameter value */
        &__midl_frag1035,
        { 
        /* value */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag961_t __midl_frag961 =
{ 
/* DeleteKey */
    { 
    /* DeleteKey */      /* procedure DeleteKey */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* filename */      /* parameter filename */
        &__midl_frag1057,
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
    /* sectionname */      /* parameter sectionname */
        &__midl_frag1057,
        { 
        /* sectionname */
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
    /* keyname */      /* parameter keyname */
        &__midl_frag1057,
        { 
        /* keyname */
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
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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

static const __midl_frag950_t __midl_frag950 =
{ 
/* CreateKey */
    { 
    /* CreateKey */      /* procedure CreateKey */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* filename */      /* parameter filename */
        &__midl_frag1057,
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
    /* sectionname */      /* parameter sectionname */
        &__midl_frag1057,
        { 
        /* sectionname */
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
    /* keyname */      /* parameter keyname */
        &__midl_frag1057,
        { 
        /* keyname */
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
    /* value */      /* parameter value */
        &__midl_frag1057,
        { 
        /* value */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* overwriteifexist */      /* parameter overwriteifexist */
        &__midl_frag1056,
        { 
        /* overwriteifexist */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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

static const __midl_frag941_t __midl_frag941 =
{ 
/* StoreCollection */
    { 
    /* StoreCollection */      /* procedure StoreCollection */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* eregclass */      /* parameter eregclass */
        &__midl_frag1059,
        { 
        /* eregclass */
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
    /* path */      /* parameter path */
        &__midl_frag1057,
        { 
        /* path */
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
    /* key */      /* parameter key */
        &__midl_frag1057,
        { 
        /* key */
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
    /* pINCFCollectionMap */      /* parameter pINCFCollectionMap */
        &__midl_frag1017,
        { 
        /* pINCFCollectionMap */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag931_t __midl_frag931 =
{ 
/* EnumerateStringValues */
    { 
    /* EnumerateStringValues */      /* procedure EnumerateStringValues */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* eregclass */      /* parameter eregclass */
        &__midl_frag1059,
        { 
        /* eregclass */
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
    /* path */      /* parameter path */
        &__midl_frag1057,
        { 
        /* path */
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
    /* key */      /* parameter key */
        &__midl_frag1057,
        { 
        /* key */
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
    /* ppINCFCollectionMap */      /* parameter ppINCFCollectionMap */
        &__midl_frag1016,
        { 
        /* ppINCFCollectionMap */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag921_t __midl_frag921 =
{ 
/* EnumerateValues */
    { 
    /* EnumerateValues */      /* procedure EnumerateValues */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* eregclass */      /* parameter eregclass */
        &__midl_frag1059,
        { 
        /* eregclass */
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
    /* path */      /* parameter path */
        &__midl_frag1057,
        { 
        /* path */
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
    /* key */      /* parameter key */
        &__midl_frag1057,
        { 
        /* key */
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
    /* ppINCFCollectionList */      /* parameter ppINCFCollectionList */
        &__midl_frag1023,
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag913_t __midl_frag913 =
{ 
/* EnumerateKeys */
    { 
    /* EnumerateKeys */      /* procedure EnumerateKeys */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* eregclass */      /* parameter eregclass */
        &__midl_frag1059,
        { 
        /* eregclass */
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
    /* path */      /* parameter path */
        &__midl_frag1057,
        { 
        /* path */
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
        &__midl_frag1023,
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
        &__midl_frag1059,
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

static const __midl_frag901_t __midl_frag901 =
{ 
/* ReadValue */
    { 
    /* ReadValue */      /* procedure ReadValue */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* eregclass */      /* parameter eregclass */
        &__midl_frag1059,
        { 
        /* eregclass */
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
    /* path */      /* parameter path */
        &__midl_frag1057,
        { 
        /* path */
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
    /* key */      /* parameter key */
        &__midl_frag1057,
        { 
        /* key */
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
    /* value */      /* parameter value */
        &__midl_frag1057,
        { 
        /* value */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* data */      /* parameter data */
        &__midl_frag1035,
        { 
        /* data */
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
        &__midl_frag1059,
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

static const __midl_frag892_t __midl_frag892 =
{ 
/* DeleteValue */
    { 
    /* DeleteValue */      /* procedure DeleteValue */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* eregclass */      /* parameter eregclass */
        &__midl_frag1059,
        { 
        /* eregclass */
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
    /* path */      /* parameter path */
        &__midl_frag1057,
        { 
        /* path */
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
    /* key */      /* parameter key */
        &__midl_frag1057,
        { 
        /* key */
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
    /* value */      /* parameter value */
        &__midl_frag1057,
        { 
        /* value */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag881_t __midl_frag881 =
{ 
/* AddValue */
    { 
    /* AddValue */      /* procedure AddValue */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* eregclass */      /* parameter eregclass */
        &__midl_frag1059,
        { 
        /* eregclass */
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
    /* path */      /* parameter path */
        &__midl_frag1057,
        { 
        /* path */
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
    /* key */      /* parameter key */
        &__midl_frag1057,
        { 
        /* key */
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
    /* value */      /* parameter value */
        &__midl_frag1057,
        { 
        /* value */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* data */      /* parameter data */
        &__midl_frag1057,
        { 
        /* data */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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

static const __midl_frag865_t __midl_frag865 =
{ 
/* DeleteKey */
    { 
    /* DeleteKey */      /* procedure DeleteKey */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* eregclass */      /* parameter eregclass */
        &__midl_frag1059,
        { 
        /* eregclass */
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
    /* path */      /* parameter path */
        &__midl_frag1057,
        { 
        /* path */
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
    /* key */      /* parameter key */
        &__midl_frag1057,
        { 
        /* key */
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
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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

static const __midl_frag857_t __midl_frag857 =
{ 
/* TimeToString */
    { 
    /* TimeToString */      /* procedure TimeToString */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* format */      /* parameter format */
        &__midl_frag1057,
        { 
        /* format */
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
    /* timeMilliseconds */      /* parameter timeMilliseconds */
        &__midl_frag1059,
        { 
        /* timeMilliseconds */
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
    /* result_string */      /* parameter result_string */
        &__midl_frag1035,
        { 
        /* result_string */
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
        &__midl_frag1059,
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

static const __midl_frag832_t __midl_frag832 =
{ 
/* *wireBSTR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1035
};

static const __midl_frag829_t __midl_frag829 =
{ 
/* LineSplit */
    { 
    /* LineSplit */      /* procedure LineSplit */
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
    /* source_string */      /* parameter source_string */
        &__midl_frag1057,
        { 
        /* source_string */
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
    /* remainder_string */      /* parameter remainder_string */
        &__midl_frag1035,
        { 
        /* remainder_string */
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
    /* result_string */      /* parameter result_string */
        &__midl_frag1035,
        { 
        /* result_string */
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
        &__midl_frag1059,
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

static const __midl_frag820_t __midl_frag820 =
{ 
/* SplitToCollection */
    { 
    /* SplitToCollection */      /* procedure SplitToCollection */
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
    /* source_string */      /* parameter source_string */
        &__midl_frag1057,
        { 
        /* source_string */
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
    /* delimiter_string */      /* parameter delimiter_string */
        &__midl_frag1057,
        { 
        /* delimiter_string */
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
        &__midl_frag1023,
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
        &__midl_frag1059,
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

static const __midl_frag817_t __midl_frag817 =
{ 
/* *VARIANT_BOOL */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1056
};

static const __midl_frag814_t __midl_frag814 =
{ 
/* IsControl */
    { 
    /* IsControl */      /* procedure IsControl */
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
    /* source_string */      /* parameter source_string */
        &__midl_frag1057,
        { 
        /* source_string */
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
    /* result_value */      /* parameter result_value */
        &__midl_frag1056,
        { 
        /* result_value */
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
        &__midl_frag1059,
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

static const __midl_frag669_t __midl_frag669 =
{ 
/* ExpandEnvironmentString */
    { 
    /* ExpandEnvironmentString */      /* procedure ExpandEnvironmentString */
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
    /* environment_string */      /* parameter environment_string */
        &__midl_frag1057,
        { 
        /* environment_string */
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
    /* result_string */      /* parameter result_string */
        &__midl_frag1035,
        { 
        /* result_string */
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
        &__midl_frag1059,
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

static const __midl_frag654_t __midl_frag654 =
{ 
/* *_wireVARIANT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag6
};

static const __midl_frag653_t __midl_frag653 =
{ 
/* wireVARIANT */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 24 /* 0x18 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag654
};

static const __midl_frag652_t __midl_frag652 =
{ 
/* *wireVARIANT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag653
};

static const __midl_frag651_t __midl_frag651 =
{ 
/* GetCurrencyFormat */
    { 
    /* GetCurrencyFormat */      /* procedure GetCurrencyFormat */
        (NDR64_UINT32) 40763715 /* 0x26e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, actual guaranteed */
        (NDR64_UINT32) 88 /* 0x58 */ ,  /* Stack size */
        (NDR64_UINT32) 32 /* 0x20 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 10 /* 0xa */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag653,
        { 
        /* value */
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
    /* num_digits */      /* parameter num_digits */
        &__midl_frag1059,
        { 
        /* num_digits */
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
    /* grouping */      /* parameter grouping */
        &__midl_frag1059,
        { 
        /* grouping */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* decimal_sep */      /* parameter decimal_sep */
        &__midl_frag1057,
        { 
        /* decimal_sep */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* thousand_sep */      /* parameter thousand_sep */
        &__midl_frag1057,
        { 
        /* thousand_sep */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* negative_currency_format */      /* parameter negative_currency_format */
        &__midl_frag1059,
        { 
        /* negative_currency_format */
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* positive_currency_format */      /* parameter positive_currency_format */
        &__midl_frag1059,
        { 
        /* positive_currency_format */
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
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* currency_symbol */      /* parameter currency_symbol */
        &__midl_frag1057,
        { 
        /* currency_symbol */
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
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* result_string */      /* parameter result_string */
        &__midl_frag1035,
        { 
        /* result_string */
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
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        80 /* 0x50 */,   /* Stack offset */
    }
};

static const __midl_frag643_t __midl_frag643 =
{ 
/* GetLocalCurrencyFormat */
    { 
    /* GetLocalCurrencyFormat */      /* procedure GetLocalCurrencyFormat */
        (NDR64_UINT32) 40763715 /* 0x26e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag653,
        { 
        /* value */
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
    /* result_string */      /* parameter result_string */
        &__midl_frag1035,
        { 
        /* result_string */
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
        &__midl_frag1059,
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

static const __midl_frag628_t __midl_frag628 =
{ 
/* GetNumberFormat */
    { 
    /* GetNumberFormat */      /* procedure GetNumberFormat */
        (NDR64_UINT32) 40763715 /* 0x26e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, actual guaranteed */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 24 /* 0x18 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag653,
        { 
        /* value */
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
    /* num_digits */      /* parameter num_digits */
        &__midl_frag1059,
        { 
        /* num_digits */
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
    /* grouping */      /* parameter grouping */
        &__midl_frag1059,
        { 
        /* grouping */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* decimal_sep */      /* parameter decimal_sep */
        &__midl_frag1057,
        { 
        /* decimal_sep */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* thousand_sep */      /* parameter thousand_sep */
        &__midl_frag1057,
        { 
        /* thousand_sep */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* negative_number_format */      /* parameter negative_number_format */
        &__midl_frag1059,
        { 
        /* negative_number_format */
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* result_string */      /* parameter result_string */
        &__midl_frag1035,
        { 
        /* result_string */
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
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag612_t __midl_frag612 =
{ 
/* CreateUniform */
    { 
    /* CreateUniform */      /* procedure CreateUniform */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* length */      /* parameter length */
        &__midl_frag1059,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* fill_string */      /* parameter fill_string */
        &__midl_frag1057,
        { 
        /* fill_string */
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
    /* result_string */      /* parameter result_string */
        &__midl_frag1035,
        { 
        /* result_string */
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
        &__midl_frag1059,
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

static const __midl_frag609_t __midl_frag609 =
{ 
/* *long */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1059
};

static const __midl_frag604_t __midl_frag604 =
{ 
/* FindLastNotOf */
    { 
    /* FindLastNotOf */      /* procedure FindLastNotOf */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* source_string */      /* parameter source_string */
        &__midl_frag1057,
        { 
        /* source_string */
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
    /* substr */      /* parameter substr */
        &__midl_frag1057,
        { 
        /* substr */
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
    /* result_index */      /* parameter result_index */
        &__midl_frag1059,
        { 
        /* result_index */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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

static const __midl_frag571_t __midl_frag571 =
{ 
/* FindReverseNext */
    { 
    /* FindReverseNext */      /* procedure FindReverseNext */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* source_string */      /* parameter source_string */
        &__midl_frag1057,
        { 
        /* source_string */
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
    /* substr */      /* parameter substr */
        &__midl_frag1057,
        { 
        /* substr */
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
    /* last_found_index */      /* parameter last_found_index */
        &__midl_frag1059,
        { 
        /* last_found_index */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* result_index */      /* parameter result_index */
        &__midl_frag1059,
        { 
        /* result_index */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag536_t __midl_frag536 =
{ 
/* ToFixedLength */
    { 
    /* ToFixedLength */      /* procedure ToFixedLength */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* source_string */      /* parameter source_string */
        &__midl_frag1057,
        { 
        /* source_string */
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
    /* length */      /* parameter length */
        &__midl_frag1059,
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
    /* fill_string */      /* parameter fill_string */
        &__midl_frag1057,
        { 
        /* fill_string */
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
    /* output */      /* parameter output */
        &__midl_frag1035,
        { 
        /* output */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag524_t __midl_frag524 =
{ 
/* Split */
    { 
    /* Split */      /* procedure Split */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* source_string */      /* parameter source_string */
        &__midl_frag1057,
        { 
        /* source_string */
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
    /* delimiter_string */      /* parameter delimiter_string */
        &__midl_frag1057,
        { 
        /* delimiter_string */
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
    /* remainder_string */      /* parameter remainder_string */
        &__midl_frag1035,
        { 
        /* remainder_string */
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
    /* result_string */      /* parameter result_string */
        &__midl_frag1035,
        { 
        /* result_string */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag507_t __midl_frag507 =
{ 
/* TrimRightEx */
    { 
    /* TrimRightEx */      /* procedure TrimRightEx */
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
    /* source_string */      /* parameter source_string */
        &__midl_frag1057,
        { 
        /* source_string */
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
    /* trim_characters */      /* parameter trim_characters */
        &__midl_frag1057,
        { 
        /* trim_characters */
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
    /* result_string */      /* parameter result_string */
        &__midl_frag1035,
        { 
        /* result_string */
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
        &__midl_frag1059,
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

static const __midl_frag452_t __midl_frag452 =
{ 
/* Compare */
    { 
    /* Compare */      /* procedure Compare */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* source_string1 */      /* parameter source_string1 */
        &__midl_frag1057,
        { 
        /* source_string1 */
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
    /* source_string2 */      /* parameter source_string2 */
        &__midl_frag1057,
        { 
        /* source_string2 */
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
    /* case_sensitive */      /* parameter case_sensitive */
        &__midl_frag1056,
        { 
        /* case_sensitive */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* result_value */      /* parameter result_value */
        &__midl_frag1059,
        { 
        /* result_value */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag413_t __midl_frag413 =
{ 
/* StringBetweenStringsEx */
    { 
    /* StringBetweenStringsEx */      /* procedure StringBetweenStringsEx */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* source_string */      /* parameter source_string */
        &__midl_frag1057,
        { 
        /* source_string */
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
    /* string1 */      /* parameter string1 */
        &__midl_frag1057,
        { 
        /* string1 */
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
    /* string2 */      /* parameter string2 */
        &__midl_frag1057,
        { 
        /* string2 */
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
    /* string_pair_number */      /* parameter string_pair_number */
        &__midl_frag1059,
        { 
        /* string_pair_number */
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
    /* result_value */      /* parameter result_value */
        &__midl_frag1035,
        { 
        /* result_value */
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
        &__midl_frag1059,
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

static const __midl_frag396_t __midl_frag396 =
{ 
/* GetLength */
    { 
    /* GetLength */      /* procedure GetLength */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* source_string */      /* parameter source_string */
        &__midl_frag1057,
        { 
        /* source_string */
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
    /* result_value */      /* parameter result_value */
        &__midl_frag1059,
        { 
        /* result_value */
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
        &__midl_frag1059,
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

static const __midl_frag378_t __midl_frag378 =
{ 
/* Insert */
    { 
    /* Insert */      /* procedure Insert */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* source_string */      /* parameter source_string */
        &__midl_frag1057,
        { 
        /* source_string */
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
    /* insert_string */      /* parameter insert_string */
        &__midl_frag1057,
        { 
        /* insert_string */
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
    /* index */      /* parameter index */
        &__midl_frag1059,
        { 
        /* index */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* result_string */      /* parameter result_string */
        &__midl_frag1035,
        { 
        /* result_string */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag367_t __midl_frag367 =
{ 
/* ReplaceSection */
    { 
    /* ReplaceSection */      /* procedure ReplaceSection */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* source_string */      /* parameter source_string */
        &__midl_frag1057,
        { 
        /* source_string */
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
    /* start_index */      /* parameter start_index */
        &__midl_frag1059,
        { 
        /* start_index */
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
    /* length */      /* parameter length */
        &__midl_frag1059,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* replacement_string */      /* parameter replacement_string */
        &__midl_frag1057,
        { 
        /* replacement_string */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* result_string */      /* parameter result_string */
        &__midl_frag1035,
        { 
        /* result_string */
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
        &__midl_frag1059,
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

static const __midl_frag300_t __midl_frag300 =
{ 
/* Mid */
    { 
    /* Mid */      /* procedure Mid */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* source_string */      /* parameter source_string */
        &__midl_frag1057,
        { 
        /* source_string */
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
    /* start_index */      /* parameter start_index */
        &__midl_frag1059,
        { 
        /* start_index */
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
    /* length */      /* parameter length */
        &__midl_frag1059,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* result_string */      /* parameter result_string */
        &__midl_frag1035,
        { 
        /* result_string */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag265_t __midl_frag265 =
{ 
/* *_wireVARIANT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag6
};

static const __midl_frag264_t __midl_frag264 =
{ 
/* wireVARIANT */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 24 /* 0x18 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag265
};

static const __midl_frag263_t __midl_frag263 =
{ 
/* *wireVARIANT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag264
};

static const __midl_frag258_t __midl_frag258 =
{ 
/* GetItemByIndex */
    { 
    /* GetItemByIndex */      /* procedure GetItemByIndex */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* lIndex */      /* parameter lIndex */
        &__midl_frag1059,
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
    /* pbstrKey */      /* parameter pbstrKey */
        &__midl_frag1035,
        { 
        /* pbstrKey */
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
    /* pvtValue */      /* parameter pvtValue */
        &__midl_frag264,
        { 
        /* pvtValue */
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
        &__midl_frag1059,
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

static const __midl_frag256_t __midl_frag256 =
{ 
/* Sort */
    { 
    /* Sort */      /* procedure Sort */
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
        &__midl_frag1059,
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

static const __midl_frag244_t __midl_frag244 =
{ 
/* GetValueByIndex */
    { 
    /* GetValueByIndex */      /* procedure GetValueByIndex */
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
        &__midl_frag1059,
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
    /* pvtValue */      /* parameter pvtValue */
        &__midl_frag264,
        { 
        /* pvtValue */
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
        &__midl_frag1059,
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

static const __midl_frag237_t __midl_frag237 =
{ 
/* GetValueByKey */
    { 
    /* GetValueByKey */      /* procedure GetValueByKey */
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
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1057,
        { 
        /* bstrKey */
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
    /* pvtValue */      /* parameter pvtValue */
        &__midl_frag264,
        { 
        /* pvtValue */
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
        &__midl_frag1059,
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

static const __midl_frag231_t __midl_frag231 =
{ 
/* UpdateValueByIndex */
    { 
    /* UpdateValueByIndex */      /* procedure UpdateValueByIndex */
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
        &__midl_frag1059,
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
    /* vtValue */      /* parameter vtValue */
        &__midl_frag653,
        { 
        /* vtValue */
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
        &__midl_frag1059,
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

static const __midl_frag224_t __midl_frag224 =
{ 
/* UpdateValueByKey */
    { 
    /* UpdateValueByKey */      /* procedure UpdateValueByKey */
        (NDR64_UINT32) 36438339 /* 0x22c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1057,
        { 
        /* bstrKey */
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
    /* vtValue */      /* parameter vtValue */
        &__midl_frag653,
        { 
        /* vtValue */
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
        &__midl_frag1059,
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

static const __midl_frag221_t __midl_frag221 =
{ 
/* RemoveItemByIndex */
    { 
    /* RemoveItemByIndex */      /* procedure RemoveItemByIndex */
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
    /* lIndex */      /* parameter lIndex */
        &__midl_frag1059,
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
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1059,
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

static const __midl_frag217_t __midl_frag217 =
{ 
/* RemoveItemByKey */
    { 
    /* RemoveItemByKey */      /* procedure RemoveItemByKey */
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
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1057,
        { 
        /* bstrKey */
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
        &__midl_frag1059,
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

static const __midl_frag204_t __midl_frag204 =
{ 
/* get_Size */
    { 
    /* get_Size */      /* procedure get_Size */
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
    /* plSize */      /* parameter plSize */
        &__midl_frag1059,
        { 
        /* plSize */
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
        &__midl_frag1059,
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

static const __midl_frag200_t __midl_frag200 =
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
        &__midl_frag1056,
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
        &__midl_frag1059,
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
        &__midl_frag1059,
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
        &__midl_frag1059,
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
        &__midl_frag1059,
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
        &__midl_frag653,
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
        &__midl_frag1059,
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

static const __midl_frag148_t __midl_frag148 =
{ 
/* *UINT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1059
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
    &__midl_frag1056
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
    &__midl_frag654
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
    &__midl_frag1058
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

static const __midl_frag99_t __midl_frag99 =
0x2    /* FC64_INT8 */;

static const __midl_frag98_t __midl_frag98 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag99
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
        &__midl_frag1059
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
        &__midl_frag1056
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
        &__midl_frag99
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
        &__midl_frag99
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
        &__midl_frag654
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
        &__midl_frag1058
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
        &__midl_frag1056
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
        &__midl_frag1059,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 17 /* 0x11 */,
        &__midl_frag99,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag1056,
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
        &__midl_frag1056,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 10 /* 0xa */,
        &__midl_frag1059,
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
        &__midl_frag1058,
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
        &__midl_frag1056,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 19 /* 0x13 */,
        &__midl_frag1059,
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
        &__midl_frag1059,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 23 /* 0x17 */,
        &__midl_frag1059,
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
    &__midl_frag256,
    &__midl_frag256,
    &__midl_frag204,
    &__midl_frag244,
    &__midl_frag231,
    &__midl_frag221,
    &__midl_frag179,
    &__midl_frag256,
    &__midl_frag200,
    &__midl_frag231,
    &__midl_frag196
    };


static const MIDL_SYNTAX_INFO INCFCollectionList_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    &INCFCollectionList_FormatStringOffsetTable[-3],
    ItSoftwareNCFSystem__MIDL_TypeFormatString.Format,
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
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    &INCFCollectionList_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFCollectionList_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFCollectionList_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
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


/* Object interface: INCFCollectionMap, ver. 0.0,
   GUID={0x302930A6,0x6E9B,0x4040,{0xB1,0x10,0x80,0xD8,0x2E,0xB2,0x02,0x9A}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFCollectionMap_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag200,
    &__midl_frag204,
    &__midl_frag256,
    &__midl_frag224,
    &__midl_frag217,
    &__midl_frag221,
    &__midl_frag224,
    &__midl_frag231,
    &__midl_frag237,
    &__midl_frag244,
    &__midl_frag1027,
    &__midl_frag256,
    &__midl_frag258
    };


static const MIDL_SYNTAX_INFO INCFCollectionMap_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    &INCFCollectionMap_FormatStringOffsetTable[-3],
    ItSoftwareNCFSystem__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFCollectionMap_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFCollectionMap_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    &INCFCollectionMap_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFCollectionMap_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFCollectionMap_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFCollectionMap_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFCollectionMap_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(20) _INCFCollectionMapProxyVtbl = 
{
    &INCFCollectionMap_ProxyInfo,
    &IID_INCFCollectionMap,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionMap::get_Empty */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionMap::get_Size */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionMap::Clear */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionMap::AddItem */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionMap::RemoveItemByKey */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionMap::RemoveItemByIndex */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionMap::UpdateValueByKey */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionMap::UpdateValueByIndex */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionMap::GetValueByKey */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionMap::GetValueByIndex */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionMap::GetKeyByIndex */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionMap::Sort */ ,
    (void *) (INT_PTR) -1 /* INCFCollectionMap::GetItemByIndex */
};


static const PRPC_STUB_FUNCTION INCFCollectionMap_table[] =
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

CInterfaceStubVtbl _INCFCollectionMapStubVtbl =
{
    &IID_INCFCollectionMap,
    &INCFCollectionMap_ServerInfo,
    20,
    &INCFCollectionMap_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_ItSoftwareNCFSystem_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: INCFString, ver. 0.0,
   GUID={0x3F2FC46F,0x4FDA,0x45BF,{0x90,0xA5,0xCA,0x5E,0xB0,0x85,0x9E,0xF8}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFString_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag857,
    &__midl_frag300,
    &__midl_frag857,
    &__midl_frag857,
    &__midl_frag300,
    &__midl_frag857,
    &__midl_frag507,
    &__midl_frag507,
    &__midl_frag669,
    &__midl_frag669,
    &__midl_frag669,
    &__midl_frag969,
    &__midl_frag367,
    &__midl_frag378,
    &__midl_frag643,
    &__midl_frag396,
    &__midl_frag969,
    &__midl_frag413,
    &__midl_frag507,
    &__midl_frag507,
    &__midl_frag507,
    &__midl_frag452,
    &__midl_frag669,
    &__midl_frag669,
    &__midl_frag669,
    &__midl_frag669,
    &__midl_frag507,
    &__midl_frag507,
    &__midl_frag507,
    &__midl_frag604,
    &__midl_frag524,
    &__midl_frag536,
    &__midl_frag604,
    &__midl_frag571,
    &__midl_frag604,
    &__midl_frag571,
    &__midl_frag604,
    &__midl_frag604,
    &__midl_frag604,
    &__midl_frag604,
    &__midl_frag612,
    &__midl_frag643,
    &__midl_frag628,
    &__midl_frag643,
    &__midl_frag651,
    &__midl_frag669,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag814,
    &__midl_frag820,
    &__midl_frag829,
    &__midl_frag1020,
    &__midl_frag969,
    &__midl_frag857
    };


static const MIDL_SYNTAX_INFO INCFString_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    &INCFString_FormatStringOffsetTable[-3],
    ItSoftwareNCFSystem__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFString_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFString_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    &INCFString_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFString_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFString_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFString_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFString_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(82) _INCFStringProxyVtbl = 
{
    &INCFString_ProxyInfo,
    &IID_INCFString,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFString::CutLeft */ ,
    (void *) (INT_PTR) -1 /* INCFString::CutMid */ ,
    (void *) (INT_PTR) -1 /* INCFString::CutRight */ ,
    (void *) (INT_PTR) -1 /* INCFString::Left */ ,
    (void *) (INT_PTR) -1 /* INCFString::Mid */ ,
    (void *) (INT_PTR) -1 /* INCFString::Right */ ,
    (void *) (INT_PTR) -1 /* INCFString::SpanIncluding */ ,
    (void *) (INT_PTR) -1 /* INCFString::SpanExcluding */ ,
    (void *) (INT_PTR) -1 /* INCFString::ToUpperCase */ ,
    (void *) (INT_PTR) -1 /* INCFString::ToLowerCase */ ,
    (void *) (INT_PTR) -1 /* INCFString::Reverse */ ,
    (void *) (INT_PTR) -1 /* INCFString::Replace */ ,
    (void *) (INT_PTR) -1 /* INCFString::ReplaceSection */ ,
    (void *) (INT_PTR) -1 /* INCFString::Insert */ ,
    (void *) (INT_PTR) -1 /* INCFString::ToString */ ,
    (void *) (INT_PTR) -1 /* INCFString::GetLength */ ,
    (void *) (INT_PTR) -1 /* INCFString::StringBetweenStrings */ ,
    (void *) (INT_PTR) -1 /* INCFString::StringBetweenStringsEx */ ,
    (void *) (INT_PTR) -1 /* INCFString::StringBeforeString */ ,
    (void *) (INT_PTR) -1 /* INCFString::StringAfterString */ ,
    (void *) (INT_PTR) -1 /* INCFString::Append */ ,
    (void *) (INT_PTR) -1 /* INCFString::Compare */ ,
    (void *) (INT_PTR) -1 /* INCFString::Copy */ ,
    (void *) (INT_PTR) -1 /* INCFString::Trim */ ,
    (void *) (INT_PTR) -1 /* INCFString::TrimLeft */ ,
    (void *) (INT_PTR) -1 /* INCFString::TrimRight */ ,
    (void *) (INT_PTR) -1 /* INCFString::TrimEx */ ,
    (void *) (INT_PTR) -1 /* INCFString::TrimLeftEx */ ,
    (void *) (INT_PTR) -1 /* INCFString::TrimRightEx */ ,
    (void *) (INT_PTR) -1 /* INCFString::GetSubstringCount */ ,
    (void *) (INT_PTR) -1 /* INCFString::Split */ ,
    (void *) (INT_PTR) -1 /* INCFString::ToFixedLength */ ,
    (void *) (INT_PTR) -1 /* INCFString::Find */ ,
    (void *) (INT_PTR) -1 /* INCFString::FindNext */ ,
    (void *) (INT_PTR) -1 /* INCFString::FindReverse */ ,
    (void *) (INT_PTR) -1 /* INCFString::FindReverseNext */ ,
    (void *) (INT_PTR) -1 /* INCFString::FindFirstOf */ ,
    (void *) (INT_PTR) -1 /* INCFString::FindFirstNotOf */ ,
    (void *) (INT_PTR) -1 /* INCFString::FindLastOf */ ,
    (void *) (INT_PTR) -1 /* INCFString::FindLastNotOf */ ,
    (void *) (INT_PTR) -1 /* INCFString::CreateUniform */ ,
    (void *) (INT_PTR) -1 /* INCFString::GetLocalNumberFormat */ ,
    (void *) (INT_PTR) -1 /* INCFString::GetNumberFormat */ ,
    (void *) (INT_PTR) -1 /* INCFString::GetLocalCurrencyFormat */ ,
    (void *) (INT_PTR) -1 /* INCFString::GetCurrencyFormat */ ,
    (void *) (INT_PTR) -1 /* INCFString::ExpandEnvironmentString */ ,
    (void *) (INT_PTR) -1 /* INCFString::HasAlpha */ ,
    (void *) (INT_PTR) -1 /* INCFString::HasAlphaNumeric */ ,
    (void *) (INT_PTR) -1 /* INCFString::HasUpperCase */ ,
    (void *) (INT_PTR) -1 /* INCFString::HasLowerCase */ ,
    (void *) (INT_PTR) -1 /* INCFString::HasDigit */ ,
    (void *) (INT_PTR) -1 /* INCFString::HasHexDigit */ ,
    (void *) (INT_PTR) -1 /* INCFString::HasSpace */ ,
    (void *) (INT_PTR) -1 /* INCFString::HasPunct */ ,
    (void *) (INT_PTR) -1 /* INCFString::HasPrint */ ,
    (void *) (INT_PTR) -1 /* INCFString::HasGraph */ ,
    (void *) (INT_PTR) -1 /* INCFString::HasASCII */ ,
    (void *) (INT_PTR) -1 /* INCFString::HasControl */ ,
    (void *) (INT_PTR) -1 /* INCFString::IsAlpha */ ,
    (void *) (INT_PTR) -1 /* INCFString::IsAlphaNumeric */ ,
    (void *) (INT_PTR) -1 /* INCFString::IsUpperCase */ ,
    (void *) (INT_PTR) -1 /* INCFString::IsLowerCase */ ,
    (void *) (INT_PTR) -1 /* INCFString::IsDigit */ ,
    (void *) (INT_PTR) -1 /* INCFString::IsHexDigit */ ,
    (void *) (INT_PTR) -1 /* INCFString::IsSpace */ ,
    (void *) (INT_PTR) -1 /* INCFString::IsPunct */ ,
    (void *) (INT_PTR) -1 /* INCFString::IsPrint */ ,
    (void *) (INT_PTR) -1 /* INCFString::IsGraph */ ,
    (void *) (INT_PTR) -1 /* INCFString::IsASCII */ ,
    (void *) (INT_PTR) -1 /* INCFString::IsControl */ ,
    (void *) (INT_PTR) -1 /* INCFString::SplitToCollection */ ,
    (void *) (INT_PTR) -1 /* INCFString::LineSplit */ ,
    (void *) (INT_PTR) -1 /* INCFString::LineSplitToCollection */ ,
    (void *) (INT_PTR) -1 /* INCFString::StringBetweenStringsInOrder */ ,
    (void *) (INT_PTR) -1 /* INCFString::TimeToString */
};


static const PRPC_STUB_FUNCTION INCFString_table[] =
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

CInterfaceStubVtbl _INCFStringStubVtbl =
{
    &IID_INCFString,
    &INCFString_ServerInfo,
    82,
    &INCFString_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_ItSoftwareNCFSystem_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: INCFRegistry, ver. 0.0,
   GUID={0xCEBF8F72,0x25BB,0x41BC,{0xB9,0x18,0xF6,0x06,0x5A,0x35,0x20,0x50}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFRegistry_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag865,
    &__midl_frag892,
    &__midl_frag881,
    &__midl_frag892,
    &__midl_frag901,
    &__midl_frag913,
    &__midl_frag921,
    &__midl_frag931,
    &__midl_frag941
    };


static const MIDL_SYNTAX_INFO INCFRegistry_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    &INCFRegistry_FormatStringOffsetTable[-3],
    ItSoftwareNCFSystem__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFRegistry_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFRegistry_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    &INCFRegistry_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFRegistry_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFRegistry_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFRegistry_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFRegistry_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(16) _INCFRegistryProxyVtbl = 
{
    &INCFRegistry_ProxyInfo,
    &IID_INCFRegistry,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFRegistry::DeleteKey */ ,
    (void *) (INT_PTR) -1 /* INCFRegistry::CreateKey */ ,
    (void *) (INT_PTR) -1 /* INCFRegistry::AddValue */ ,
    (void *) (INT_PTR) -1 /* INCFRegistry::DeleteValue */ ,
    (void *) (INT_PTR) -1 /* INCFRegistry::ReadValue */ ,
    (void *) (INT_PTR) -1 /* INCFRegistry::EnumerateKeys */ ,
    (void *) (INT_PTR) -1 /* INCFRegistry::EnumerateValues */ ,
    (void *) (INT_PTR) -1 /* INCFRegistry::EnumerateStringValues */ ,
    (void *) (INT_PTR) -1 /* INCFRegistry::StoreCollection */
};


static const PRPC_STUB_FUNCTION INCFRegistry_table[] =
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
    NdrStubCall3
};

CInterfaceStubVtbl _INCFRegistryStubVtbl =
{
    &IID_INCFRegistry,
    &INCFRegistry_ServerInfo,
    16,
    &INCFRegistry_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFIniFile, ver. 0.0,
   GUID={0xCC2FE534,0xBB05,0x42B0,{0xB5,0x81,0xF3,0x41,0x1C,0x35,0xD9,0x5E}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFIniFile_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag950,
    &__midl_frag961,
    &__midl_frag969,
    &__midl_frag980,
    &__midl_frag996,
    &__midl_frag996,
    &__midl_frag1002,
    &__midl_frag1011,
    &__midl_frag1020
    };


static const MIDL_SYNTAX_INFO INCFIniFile_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    &INCFIniFile_FormatStringOffsetTable[-3],
    ItSoftwareNCFSystem__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFIniFile_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFIniFile_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    &INCFIniFile_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFIniFile_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFIniFile_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFIniFile_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFIniFile_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(16) _INCFIniFileProxyVtbl = 
{
    &INCFIniFile_ProxyInfo,
    &IID_INCFIniFile,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFIniFile::CreateKey */ ,
    (void *) (INT_PTR) -1 /* INCFIniFile::DeleteKey */ ,
    (void *) (INT_PTR) -1 /* INCFIniFile::ReadValue */ ,
    (void *) (INT_PTR) -1 /* INCFIniFile::SetValue */ ,
    (void *) (INT_PTR) -1 /* INCFIniFile::CreateSection */ ,
    (void *) (INT_PTR) -1 /* INCFIniFile::DeleteSection */ ,
    (void *) (INT_PTR) -1 /* INCFIniFile::StoreCollection */ ,
    (void *) (INT_PTR) -1 /* INCFIniFile::EnumerateKeys */ ,
    (void *) (INT_PTR) -1 /* INCFIniFile::EnumerateSections */
};


static const PRPC_STUB_FUNCTION INCFIniFile_table[] =
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
    NdrStubCall3
};

CInterfaceStubVtbl _INCFIniFileStubVtbl =
{
    &IID_INCFIniFile,
    &INCFIniFile_ServerInfo,
    16,
    &INCFIniFile_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_ItSoftwareNCFSystem_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: INCFGuid, ver. 0.0,
   GUID={0x9FDA4821,0x618F,0x4FEB,{0x9B,0x62,0x02,0xC3,0x6C,0x64,0x93,0xDD}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFGuid_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag1027,
    &__midl_frag1033
    };


static const MIDL_SYNTAX_INFO INCFGuid_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    &INCFGuid_FormatStringOffsetTable[-3],
    ItSoftwareNCFSystem__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFGuid_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFGuid_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    &INCFGuid_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFGuid_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFGuid_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFGuid_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFGuid_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(9) _INCFGuidProxyVtbl = 
{
    &INCFGuid_ProxyInfo,
    &IID_INCFGuid,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFGuid::CreateGuidType */ ,
    (void *) (INT_PTR) -1 /* INCFGuid::CreateGuid */
};


static const PRPC_STUB_FUNCTION INCFGuid_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFGuidStubVtbl =
{
    &IID_INCFGuid,
    &INCFGuid_ServerInfo,
    9,
    &INCFGuid_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_ItSoftwareNCFSystem_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: INCFEventLog, ver. 0.0,
   GUID={0x56F2F97E,0x4B27,0x4F64,{0xA0,0xD5,0x39,0x15,0x8E,0x53,0x5F,0xFB}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFEventLog_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag1038,
    &__midl_frag1048
    };


static const MIDL_SYNTAX_INFO INCFEventLog_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    &INCFEventLog_FormatStringOffsetTable[-3],
    ItSoftwareNCFSystem__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFEventLog_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFEventLog_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    &INCFEventLog_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFEventLog_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFEventLog_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFSystem__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFEventLog_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFEventLog_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(9) _INCFEventLogProxyVtbl = 
{
    &INCFEventLog_ProxyInfo,
    &IID_INCFEventLog,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFEventLog::ReportEvent */ ,
    (void *) (INT_PTR) -1 /* INCFEventLog::ReportEventEx */
};


static const PRPC_STUB_FUNCTION INCFEventLog_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFEventLogStubVtbl =
{
    &IID_INCFEventLog,
    &INCFEventLog_ServerInfo,
    9,
    &INCFEventLog_table[-3],
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
    ItSoftwareNCFSystem__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _ItSoftwareNCFSystem_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_INCFGuidProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFIniFileProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFStringProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFRegistryProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFEventLogProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFCollectionMapProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFCollectionListProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ItSoftwareNCFSystem_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_INCFGuidStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFIniFileStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFStringStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFRegistryStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFEventLogStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFCollectionMapStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFCollectionListStubVtbl,
    0
};

PCInterfaceName const _ItSoftwareNCFSystem_InterfaceNamesList[] = 
{
    "INCFGuid",
    "INCFIniFile",
    "INCFString",
    "INCFRegistry",
    "INCFEventLog",
    "INCFCollectionMap",
    "INCFCollectionList",
    0
};

const IID *  const _ItSoftwareNCFSystem_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _ItSoftwareNCFSystem_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ItSoftwareNCFSystem, pIID, n)

int __stdcall _ItSoftwareNCFSystem_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ItSoftwareNCFSystem, 7, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _ItSoftwareNCFSystem, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _ItSoftwareNCFSystem, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ItSoftwareNCFSystem, 7, *pIndex )
    
}

const ExtendedProxyFileInfo ItSoftwareNCFSystem_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ItSoftwareNCFSystem_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ItSoftwareNCFSystem_StubVtblList,
    (const PCInterfaceName * ) & _ItSoftwareNCFSystem_InterfaceNamesList,
    (const IID ** ) & _ItSoftwareNCFSystem_BaseIIDList,
    & _ItSoftwareNCFSystem_IID_Lookup, 
    7,
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

