

/* this ALWAYS GENERATED file contains the proxy stub code */


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


#include "ItSoftwareNCFAudio_i.h"

#define TYPE_FORMAT_STRING_SIZE   1387                              
#define PROC_FORMAT_STRING_SIZE   4157                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _ItSoftwareNCFAudio_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ItSoftwareNCFAudio_MIDL_TYPE_FORMAT_STRING;

typedef struct _ItSoftwareNCFAudio_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ItSoftwareNCFAudio_MIDL_PROC_FORMAT_STRING;

typedef struct _ItSoftwareNCFAudio_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ItSoftwareNCFAudio_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};



extern const ItSoftwareNCFAudio_MIDL_TYPE_FORMAT_STRING ItSoftwareNCFAudio__MIDL_TypeFormatString;
extern const ItSoftwareNCFAudio_MIDL_PROC_FORMAT_STRING ItSoftwareNCFAudio__MIDL_ProcFormatString;
extern const ItSoftwareNCFAudio_MIDL_EXPR_FORMAT_STRING ItSoftwareNCFAudio__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFCollectionMap_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFCollectionMap_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFStream_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFStream_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFAudioTag_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFAudioTag_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFWmaTag_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFWmaTag_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFMp3Tag_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFMp3Tag_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFAacTag_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFAacTag_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFMp3Genre_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFMp3Genre_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFAudioCD_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFAudioCD_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFEncoderParams_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFEncoderParams_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFWmaEncoder_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFWmaEncoder_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFMp3Encoder_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFMp3Encoder_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFAacEncoder_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFAacEncoder_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFWavEncoder_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFWavEncoder_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INCFAudioPlayer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INCFAudioPlayer_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const ItSoftwareNCFAudio_MIDL_PROC_FORMAT_STRING ItSoftwareNCFAudio__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_NumberOfChannels */


	/* Procedure get_Empty */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x22 ),	/* 34 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter count */


	/* Parameter pvtbEmpty */

/* 26 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Size */

/* 38 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x24 ),	/* 36 */
/* 52 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 54 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter plSize */

/* 64 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 66 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 68 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Play */


	/* Procedure Clear */

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

	/* Procedure AddItem */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0xa ),	/* 10 */
/* 116 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 124 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x1 ),	/* 1 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 134 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 136 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 138 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter vtValue */

/* 140 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 142 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 144 */	NdrFcShort( 0x498 ),	/* Type Offset=1176 */

	/* Return value */

/* 146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 148 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDescription */


	/* Procedure RemoveItemByKey */

/* 152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0xb ),	/* 11 */
/* 160 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 166 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 168 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter description */


	/* Parameter bstrKey */

/* 178 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 180 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 182 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 186 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveItemByIndex */

/* 190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0xc ),	/* 12 */
/* 198 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 204 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 206 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex */

/* 216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 218 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UpdateValueByKey */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0xd ),	/* 13 */
/* 236 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 242 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 244 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x1 ),	/* 1 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 254 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 256 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 258 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter vtValue */

/* 260 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 262 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 264 */	NdrFcShort( 0x498 ),	/* Type Offset=1176 */

	/* Return value */

/* 266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 268 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UpdateValueByIndex */

/* 272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0xe ),	/* 14 */
/* 280 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 286 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 288 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x1 ),	/* 1 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex */

/* 298 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 300 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter vtValue */

/* 304 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 306 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 308 */	NdrFcShort( 0x498 ),	/* Type Offset=1176 */

	/* Return value */

/* 310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 312 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetValueByKey */

/* 316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0xf ),	/* 15 */
/* 324 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 330 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 332 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 334 */	NdrFcShort( 0x1 ),	/* 1 */
/* 336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 342 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 344 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 346 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pvtValue */

/* 348 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 350 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 352 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 356 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetValueByIndex */

/* 360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x10 ),	/* 16 */
/* 368 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 374 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 376 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 378 */	NdrFcShort( 0x1 ),	/* 1 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex */

/* 386 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 388 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvtValue */

/* 392 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 394 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 396 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 400 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetKeyByIndex */

/* 404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x11 ),	/* 17 */
/* 412 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 418 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 420 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 422 */	NdrFcShort( 0x1 ),	/* 1 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex */

/* 430 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 432 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrKey */

/* 436 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 438 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 440 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 444 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Sort */

/* 448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x12 ),	/* 18 */
/* 456 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 462 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 464 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 476 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetItemByIndex */

/* 480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x13 ),	/* 19 */
/* 488 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 494 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 496 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 498 */	NdrFcShort( 0x1 ),	/* 1 */
/* 500 */	NdrFcShort( 0x1 ),	/* 1 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lIndex */

/* 506 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 508 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrKey */

/* 512 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 514 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 516 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Parameter pvtValue */

/* 518 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 520 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 522 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 526 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteFrom */

/* 530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x7 ),	/* 7 */
/* 538 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 540 */	NdrFcShort( 0x21 ),	/* 33 */
/* 542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 544 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 546 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */

/* 556 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 558 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 560 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter length */

/* 562 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 564 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 570 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteFromStream */

/* 574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 582 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 588 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 590 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pINCFStream */

/* 600 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 602 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 604 */	NdrFcShort( 0x4ce ),	/* Type Offset=1230 */

	/* Parameter length */

/* 606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 608 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 614 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadTo */

/* 618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x9 ),	/* 9 */
/* 626 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 628 */	NdrFcShort( 0x21 ),	/* 33 */
/* 630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 632 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 634 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */

/* 644 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 646 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 648 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter length */

/* 650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 652 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 658 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadToStream */

/* 662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0xa ),	/* 10 */
/* 670 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 676 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 678 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pINCFStream */

/* 688 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 690 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 692 */	NdrFcShort( 0x4ce ),	/* Type Offset=1230 */

	/* Parameter length */

/* 694 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 696 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 700 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 702 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CurrentReadPosition */

/* 706 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0xb ),	/* 11 */
/* 714 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 720 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 722 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter position */

/* 732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 734 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 740 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetExtractionProgressPercent */


	/* Procedure get_CurrentReadPosition */

/* 744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0xc ),	/* 12 */
/* 752 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x24 ),	/* 36 */
/* 758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 760 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter progress_value */


	/* Parameter position */

/* 770 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 772 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 778 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CurrentWritePosition */

/* 782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0xd ),	/* 13 */
/* 790 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 796 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 798 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter position */

/* 808 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 816 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPlayedDuration */


	/* Procedure get_CurrentWritePosition */

/* 820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0xe ),	/* 14 */
/* 828 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x24 ),	/* 36 */
/* 834 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 836 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter timeMs */


	/* Parameter position */

/* 846 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 848 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 854 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Close */

/* 858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0xf ),	/* 15 */
/* 866 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 872 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 874 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 886 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VolumeLevel */


	/* Procedure get_Length */

/* 890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x10 ),	/* 16 */
/* 898 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0x24 ),	/* 36 */
/* 904 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 906 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter volume */


	/* Parameter length */

/* 916 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 918 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 922 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 924 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Load */


	/* Procedure SetTitle */

/* 928 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x7 ),	/* 7 */
/* 936 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 940 */	NdrFcShort( 0x8 ),	/* 8 */
/* 942 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 944 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x1 ),	/* 1 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter drive */


	/* Parameter title */

/* 954 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 956 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 958 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 962 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CddbId */


	/* Procedure GetTitle */

/* 966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 974 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 980 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 982 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 984 */	NdrFcShort( 0x1 ),	/* 1 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cddb_id */


	/* Parameter title */

/* 992 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 994 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 996 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */


	/* Return value */

/* 998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1000 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAuthor */

/* 1004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1012 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1018 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1020 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1024 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter author */

/* 1030 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1032 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1034 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 1036 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1038 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ExtractionErrorMessage */


	/* Procedure get_ExtractionErrorMessage */


	/* Procedure get_ExtractionErrorMessage */


	/* Procedure GetAuthor */

/* 1042 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0xa ),	/* 10 */
/* 1050 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1056 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1058 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1060 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter error_message */


	/* Parameter error_message */


	/* Parameter error_message */


	/* Parameter author */

/* 1068 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1070 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1072 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1076 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Drive */


	/* Procedure GetDescription */

/* 1080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0xc ),	/* 12 */
/* 1088 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1094 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1096 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1098 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter drive */


	/* Parameter description */

/* 1106 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1108 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1110 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */


	/* Return value */

/* 1112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1114 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetRating */

/* 1118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0xd ),	/* 13 */
/* 1126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1132 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1134 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rating */

/* 1144 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1148 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 1150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRating */

/* 1156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0xe ),	/* 14 */
/* 1164 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1170 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1172 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1174 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rating */

/* 1182 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1184 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1186 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1190 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCopyright */

/* 1194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0xf ),	/* 15 */
/* 1202 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1208 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1210 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter copyright */

/* 1220 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1222 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1224 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 1226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1228 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCopyright */

/* 1232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1238 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1240 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1246 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1248 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1250 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter copyright */

/* 1258 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1260 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1262 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1266 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAlbumTitle */

/* 1270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1276 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1278 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1284 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1286 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter album_title */

/* 1296 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1298 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1300 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 1302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1304 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AlbumTitle */


	/* Procedure GetAlbumTitle */

/* 1308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1316 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1322 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1324 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter album_title */


	/* Parameter album_title */

/* 1334 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1336 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1338 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */


	/* Return value */

/* 1340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1342 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetTrack */

/* 1346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1352 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1354 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1360 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1362 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter track_number */

/* 1372 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1374 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1376 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 1378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1380 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Year */


	/* Procedure GetTrack */

/* 1384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1390 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1392 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1398 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1400 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1402 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter year */


	/* Parameter track_number */

/* 1410 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1412 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1414 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */


	/* Return value */

/* 1416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1418 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetGenre */

/* 1422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1430 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1436 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1438 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter genre */

/* 1448 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1450 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1452 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 1454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1456 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetGenre */

/* 1460 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1466 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1468 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1474 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1476 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1478 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter genre */

/* 1486 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1488 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1490 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1494 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetYear */

/* 1498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1504 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1506 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1512 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1514 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter year */

/* 1524 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1526 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1528 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 1530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1532 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetYear */

/* 1536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1544 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1550 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1552 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter year */

/* 1562 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1564 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1566 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1570 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCopyrightURL */

/* 1574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1582 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1588 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1590 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1594 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter copyright_url */

/* 1600 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1602 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1604 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 1606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1608 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ExtractionErrorMessage */


	/* Procedure GetCopyrightURL */

/* 1612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1620 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1626 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1628 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1630 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter error_message */


	/* Parameter copyright_url */

/* 1638 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1640 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1642 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */


	/* Return value */

/* 1644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1646 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAlbumCoverURL */

/* 1650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1656 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1658 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1664 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1666 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1670 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter album_cover_url */

/* 1676 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1678 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1680 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 1682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1684 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAlbumCoverURL */

/* 1688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1694 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1696 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1702 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1704 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1706 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter album_cover_url */

/* 1714 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1716 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1718 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1722 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPromotionURL */

/* 1726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1732 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1734 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1740 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1742 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter promotion_url */

/* 1752 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1754 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1756 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 1758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1760 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPromotionURL */

/* 1764 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1772 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1778 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1780 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter promotion_url */

/* 1790 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1792 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1794 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1798 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetLyrics */

/* 1802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1808 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1810 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1816 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1818 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lyrics */

/* 1828 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1830 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1832 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 1834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1836 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLyrics */

/* 1840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1846 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1848 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1854 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1856 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lyrics */

/* 1866 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1868 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1870 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 1872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1874 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadFromFile */

/* 1878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1884 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1886 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1892 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1894 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1898 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 1904 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1906 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1908 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 1910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1912 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveToFile */

/* 1916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1922 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1924 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1930 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1932 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1936 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter filename */

/* 1942 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1944 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1946 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 1948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1950 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadFromInterface */

/* 1954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1960 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1962 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1968 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1970 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIUnknown */

/* 1980 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1982 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1984 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Return value */

/* 1986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1988 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveToInterface */

/* 1992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2000 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2006 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2008 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIUnknown */

/* 2018 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2020 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2022 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Return value */

/* 2024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2026 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clear */

/* 2030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2036 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2038 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2044 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2046 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2058 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Duration */

/* 2062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2068 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2070 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2074 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2076 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2078 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter milliseconds */

/* 2088 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2090 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2096 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HasAudio */

/* 2100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2106 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2108 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2114 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2116 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter has_audio */

/* 2126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2128 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2130 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2134 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HasVideo */

/* 2138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2144 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2146 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2150 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2154 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter has_video */

/* 2164 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2166 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2168 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2172 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetComposer */

/* 2176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2182 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2184 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2190 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2192 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter composer */

/* 2202 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2204 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2206 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2210 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetComposer */

/* 2214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2220 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2222 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2228 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2230 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter composer */

/* 2240 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2242 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2244 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 2246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2248 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAlbumAuthor */

/* 2252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2258 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2260 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2266 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2268 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2270 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter author */

/* 2278 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2280 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2282 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2286 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAlbumAuthor */

/* 2290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2296 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2298 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2304 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2306 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter author */

/* 2316 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2318 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2320 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 2322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2324 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetGenreById */

/* 2328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2334 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2336 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2342 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2344 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2346 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter genre_id */

/* 2354 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2356 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter genre_name */

/* 2360 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2362 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2364 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2368 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetGenreByName */

/* 2372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2380 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2384 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2386 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2388 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2392 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter genre_name */

/* 2398 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2400 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2402 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter genre_id */

/* 2404 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2406 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2412 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumerateGenre */

/* 2416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2422 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2424 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2430 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2432 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppINCFCollectionMap */

/* 2442 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2444 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2446 */	NdrFcShort( 0x4e0 ),	/* Type Offset=1248 */

	/* Return value */

/* 2448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2450 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CddbQuery */

/* 2454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2460 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2462 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2468 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2470 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2472 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter query_string */

/* 2480 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2482 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2484 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2488 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TrackCount */

/* 2492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2498 */	NdrFcShort( 0xa ),	/* 10 */
/* 2500 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2506 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2508 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter track_count */

/* 2518 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2520 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2526 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_BitsPerSample */


	/* Procedure get_Loaded */

/* 2530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2536 */	NdrFcShort( 0xb ),	/* 11 */
/* 2538 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2542 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2544 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2546 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bits */


	/* Parameter status */

/* 2556 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2558 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2560 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2564 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TotalPlaytime */

/* 2568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0xd ),	/* 13 */
/* 2576 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2582 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2584 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ms */

/* 2594 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2596 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2602 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPlaytime */

/* 2606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0xe ),	/* 14 */
/* 2614 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2618 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2620 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2622 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter track_number */

/* 2632 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2634 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ms */

/* 2638 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2640 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2646 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtractTrack */

/* 2650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2656 */	NdrFcShort( 0xf ),	/* 15 */
/* 2658 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2660 */	NdrFcShort( 0xe ),	/* 14 */
/* 2662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2664 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2666 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2670 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter track_number */

/* 2676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2678 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter filename */

/* 2682 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2684 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2686 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter bAsync */

/* 2688 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2690 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2692 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2696 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExecuteCddbQuery */

/* 2700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2706 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2708 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2710 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2714 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2716 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2720 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter freedb_server */

/* 2726 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2728 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2730 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter bAsync */

/* 2732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2734 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2736 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2740 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Artist */

/* 2744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2750 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2752 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2758 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2760 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2762 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter artist */

/* 2770 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2772 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2774 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2778 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Genre */

/* 2782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2788 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2790 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2796 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2798 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2800 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter genre */

/* 2808 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2812 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2816 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTitle */

/* 2820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2826 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2828 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2834 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2836 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2838 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter track_number */

/* 2846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2848 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter track_name */

/* 2852 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2854 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2856 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2860 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CddbLoaded */

/* 2864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2870 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2872 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2876 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2878 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2880 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter status */

/* 2890 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2892 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2894 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2898 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtractTrackRange */

/* 2902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2908 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2910 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2912 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2916 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2918 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2922 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter track_number_start */

/* 2928 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2930 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter track_number_stop */

/* 2934 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2936 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter out_filename */

/* 2940 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2942 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2944 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter bAsync */

/* 2946 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2948 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2950 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2954 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ExtractionFinished */

/* 2958 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2964 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2966 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2970 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2972 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2974 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter status */

/* 2984 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2986 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2988 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2992 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ExtractionSucceeded */

/* 2996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3002 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3004 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3008 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3010 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3012 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter status */

/* 3022 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3024 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3026 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3030 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetExtractionProgressPercent */

/* 3034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3040 */	NdrFcShort( 0x1b ),	/* 27 */
/* 3042 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3046 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3048 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3050 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter progress_value */

/* 3060 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3062 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3068 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_NumberOfChannels */

/* 3072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3080 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3082 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3086 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3088 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter count */

/* 3098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3100 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3102 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3106 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SamplesPerSecond */

/* 3110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3116 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3118 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3122 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3124 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3126 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter samples */

/* 3136 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3138 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3144 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_SamplesPerSecond */

/* 3148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3154 */	NdrFcShort( 0xa ),	/* 10 */
/* 3156 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3162 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3164 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter samples */

/* 3174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3176 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3182 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_BitsPerSample */

/* 3186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3192 */	NdrFcShort( 0xc ),	/* 12 */
/* 3194 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3196 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3200 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3202 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bits */

/* 3212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3214 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3216 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3220 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Encode */

/* 3224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3230 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3232 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3234 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3238 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3240 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pINCFEncoderParams */

/* 3250 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3252 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3254 */	NdrFcShort( 0x4f6 ),	/* Type Offset=1270 */

	/* Parameter pINCFWmaTag */

/* 3256 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3258 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3260 */	NdrFcShort( 0x508 ),	/* Type Offset=1288 */

	/* Parameter in_filename */

/* 3262 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3264 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3266 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter out_filename */

/* 3268 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3270 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3272 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter async */

/* 3274 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3276 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3278 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3282 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ExtractionFinished */


	/* Procedure get_ExtractionFinished */


	/* Procedure get_ExtractionFinished */

/* 3286 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3294 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3300 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3302 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter status */


	/* Parameter status */


	/* Parameter status */

/* 3312 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3314 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3316 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 3318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3320 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ExtractionFinished */


	/* Procedure get_ExtractionSucceeded */


	/* Procedure get_ExtractionSucceeded */


	/* Procedure get_ExtractionSucceeded */

/* 3324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3330 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3332 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3336 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3338 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3340 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter status */


	/* Parameter status */


	/* Parameter status */


	/* Parameter status */

/* 3350 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3352 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3354 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 3356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3358 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetExtractionProgressPercent */


	/* Procedure GetExtractionProgressPercent */


	/* Procedure GetExtractionProgressPercent */

/* 3362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3368 */	NdrFcShort( 0xb ),	/* 11 */
/* 3370 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3374 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3376 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3378 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter progress_value */


	/* Parameter progress_value */


	/* Parameter progress_value */

/* 3388 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3390 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 3394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3396 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Encode */

/* 3400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3406 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3408 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3410 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3414 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3416 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3420 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pINCFEncoderParams */

/* 3426 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3428 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3430 */	NdrFcShort( 0x4f6 ),	/* Type Offset=1270 */

	/* Parameter pINCFMp3Tag */

/* 3432 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3434 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3436 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter in_filename */

/* 3438 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3440 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3442 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter out_filename */

/* 3444 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3446 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3448 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter async */

/* 3450 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3452 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3454 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3458 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Encode */

/* 3462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3468 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3470 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3472 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3476 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3478 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pINCFEncoderParams */

/* 3488 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3490 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3492 */	NdrFcShort( 0x4f6 ),	/* Type Offset=1270 */

	/* Parameter pINCFAacTag */

/* 3494 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3496 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3498 */	NdrFcShort( 0x52c ),	/* Type Offset=1324 */

	/* Parameter in_filename */

/* 3500 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3502 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3504 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter out_filename */

/* 3506 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3508 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3510 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter async */

/* 3512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3514 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3516 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3520 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Encode */

/* 3524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3530 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3532 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3534 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3538 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3540 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3544 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3548 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pINCFEncoderParams */

/* 3550 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3552 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3554 */	NdrFcShort( 0x4f6 ),	/* Type Offset=1270 */

	/* Parameter in_filename */

/* 3556 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3558 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3560 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter out_filename */

/* 3562 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3564 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3566 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter async */

/* 3568 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3570 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3572 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3576 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EncodeToStream */

/* 3580 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3588 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3594 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3596 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3600 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pINCFEncoderParams */

/* 3606 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3608 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3610 */	NdrFcShort( 0x4f6 ),	/* Type Offset=1270 */

	/* Parameter in_filename */

/* 3612 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3614 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3616 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pINCFStream */

/* 3618 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3620 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3622 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Return value */

/* 3624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3626 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ExtractionSucceeded */

/* 3630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0xa ),	/* 10 */
/* 3638 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3642 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3644 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3646 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter status */

/* 3656 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3658 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3660 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3664 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ExtractionErrorMessage */

/* 3668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3674 */	NdrFcShort( 0xb ),	/* 11 */
/* 3676 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3682 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3684 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3686 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter error_message */

/* 3694 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3696 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3698 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 3700 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3702 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteWaveHeader */

/* 3706 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3712 */	NdrFcShort( 0xd ),	/* 13 */
/* 3714 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3716 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3720 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3722 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pINCFEncoderParams */

/* 3732 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3734 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3736 */	NdrFcShort( 0x4f6 ),	/* Type Offset=1270 */

	/* Parameter fileSize */

/* 3738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3740 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pWaveHeader */

/* 3744 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 3746 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3748 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Return value */

/* 3750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3752 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteWaveHeaderToStream */

/* 3756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3762 */	NdrFcShort( 0xe ),	/* 14 */
/* 3764 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3772 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pINCFEncoderParams */

/* 3782 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3784 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3786 */	NdrFcShort( 0x4f6 ),	/* Type Offset=1270 */

	/* Parameter fileSize */

/* 3788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3790 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pINCFStream */

/* 3794 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3796 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3798 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */

	/* Return value */

/* 3800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3802 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Initialize */

/* 3806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3812 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3814 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3820 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3822 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3834 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Load */

/* 3838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3846 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3852 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3854 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mediaObject */

/* 3864 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3866 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3868 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 3870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3872 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Pause */

/* 3876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3882 */	NdrFcShort( 0xa ),	/* 10 */
/* 3884 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3890 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3892 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3904 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Resume */

/* 3908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3914 */	NdrFcShort( 0xb ),	/* 11 */
/* 3916 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3922 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3924 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3936 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Stop */

/* 3940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3946 */	NdrFcShort( 0xc ),	/* 12 */
/* 3948 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3954 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3956 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3968 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Close */

/* 3972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3978 */	NdrFcShort( 0xd ),	/* 13 */
/* 3980 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3986 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3988 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4000 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDuration */

/* 4004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4010 */	NdrFcShort( 0xf ),	/* 15 */
/* 4012 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4016 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4018 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4020 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter timeMs */

/* 4030 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4032 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4036 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4038 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_VolumeLevel */

/* 4042 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4048 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4050 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4052 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4054 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4056 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4058 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter volume */

/* 4068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4070 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4076 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Status */

/* 4080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4088 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4092 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4094 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4096 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter status */

/* 4106 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4108 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4110 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 4112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4114 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Metadata */

/* 4118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4124 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4132 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4134 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pINCFAudioTag */

/* 4144 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4148 */	NdrFcShort( 0x554 ),	/* Type Offset=1364 */

	/* Return value */

/* 4150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ItSoftwareNCFAudio_MIDL_TYPE_FORMAT_STRING ItSoftwareNCFAudio__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  8 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x12, 0x0,	/* FC_UP */
/* 12 */	NdrFcShort( 0x18 ),	/* Offset= 24 (36) */
/* 14 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 16 */	NdrFcShort( 0x2 ),	/* 2 */
/* 18 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 20 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 22 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 24 */	0x0 , 
			0x0,		/* 0 */
/* 26 */	NdrFcLong( 0x0 ),	/* 0 */
/* 30 */	NdrFcLong( 0x0 ),	/* 0 */
/* 34 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 36 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (14) */
/* 42 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 44 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 46 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (10) */
/* 56 */	
			0x11, 0x0,	/* FC_RP */
/* 58 */	NdrFcShort( 0x45e ),	/* Offset= 1118 (1176) */
/* 60 */	
			0x12, 0x0,	/* FC_UP */
/* 62 */	NdrFcShort( 0x446 ),	/* Offset= 1094 (1156) */
/* 64 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 66 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 68 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 70 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 72 */	0x0 , 
			0x0,		/* 0 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x2 ),	/* Offset= 2 (84) */
/* 84 */	NdrFcShort( 0x10 ),	/* 16 */
/* 86 */	NdrFcShort( 0x2f ),	/* 47 */
/* 88 */	NdrFcLong( 0x14 ),	/* 20 */
/* 92 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 94 */	NdrFcLong( 0x3 ),	/* 3 */
/* 98 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 100 */	NdrFcLong( 0x11 ),	/* 17 */
/* 104 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 106 */	NdrFcLong( 0x2 ),	/* 2 */
/* 110 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 112 */	NdrFcLong( 0x4 ),	/* 4 */
/* 116 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 118 */	NdrFcLong( 0x5 ),	/* 5 */
/* 122 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 124 */	NdrFcLong( 0xb ),	/* 11 */
/* 128 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 130 */	NdrFcLong( 0xa ),	/* 10 */
/* 134 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 136 */	NdrFcLong( 0x6 ),	/* 6 */
/* 140 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (372) */
/* 142 */	NdrFcLong( 0x7 ),	/* 7 */
/* 146 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 148 */	NdrFcLong( 0x8 ),	/* 8 */
/* 152 */	NdrFcShort( 0xff72 ),	/* Offset= -142 (10) */
/* 154 */	NdrFcLong( 0xd ),	/* 13 */
/* 158 */	NdrFcShort( 0xdc ),	/* Offset= 220 (378) */
/* 160 */	NdrFcLong( 0x9 ),	/* 9 */
/* 164 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (396) */
/* 166 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 170 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (414) */
/* 172 */	NdrFcLong( 0x24 ),	/* 36 */
/* 176 */	NdrFcShort( 0x38a ),	/* Offset= 906 (1082) */
/* 178 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 182 */	NdrFcShort( 0x384 ),	/* Offset= 900 (1082) */
/* 184 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 188 */	NdrFcShort( 0x382 ),	/* Offset= 898 (1086) */
/* 190 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 194 */	NdrFcShort( 0x380 ),	/* Offset= 896 (1090) */
/* 196 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 200 */	NdrFcShort( 0x37e ),	/* Offset= 894 (1094) */
/* 202 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 206 */	NdrFcShort( 0x37c ),	/* Offset= 892 (1098) */
/* 208 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 212 */	NdrFcShort( 0x37a ),	/* Offset= 890 (1102) */
/* 214 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 218 */	NdrFcShort( 0x378 ),	/* Offset= 888 (1106) */
/* 220 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 224 */	NdrFcShort( 0x362 ),	/* Offset= 866 (1090) */
/* 226 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 230 */	NdrFcShort( 0x360 ),	/* Offset= 864 (1094) */
/* 232 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 236 */	NdrFcShort( 0x36a ),	/* Offset= 874 (1110) */
/* 238 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 242 */	NdrFcShort( 0x360 ),	/* Offset= 864 (1106) */
/* 244 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 248 */	NdrFcShort( 0x362 ),	/* Offset= 866 (1114) */
/* 250 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 254 */	NdrFcShort( 0x360 ),	/* Offset= 864 (1118) */
/* 256 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 260 */	NdrFcShort( 0x35e ),	/* Offset= 862 (1122) */
/* 262 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 266 */	NdrFcShort( 0x35c ),	/* Offset= 860 (1126) */
/* 268 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 272 */	NdrFcShort( 0x35a ),	/* Offset= 858 (1130) */
/* 274 */	NdrFcLong( 0x10 ),	/* 16 */
/* 278 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 280 */	NdrFcLong( 0x12 ),	/* 18 */
/* 284 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 286 */	NdrFcLong( 0x13 ),	/* 19 */
/* 290 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 292 */	NdrFcLong( 0x15 ),	/* 21 */
/* 296 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 298 */	NdrFcLong( 0x16 ),	/* 22 */
/* 302 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 304 */	NdrFcLong( 0x17 ),	/* 23 */
/* 308 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 310 */	NdrFcLong( 0xe ),	/* 14 */
/* 314 */	NdrFcShort( 0x338 ),	/* Offset= 824 (1138) */
/* 316 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 320 */	NdrFcShort( 0x33c ),	/* Offset= 828 (1148) */
/* 322 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 326 */	NdrFcShort( 0x33a ),	/* Offset= 826 (1152) */
/* 328 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 332 */	NdrFcShort( 0x2f6 ),	/* Offset= 758 (1090) */
/* 334 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 338 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (1094) */
/* 340 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 344 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (1098) */
/* 346 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 350 */	NdrFcShort( 0x2e8 ),	/* Offset= 744 (1094) */
/* 352 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 356 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (1094) */
/* 358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* Offset= 0 (362) */
/* 364 */	NdrFcLong( 0x1 ),	/* 1 */
/* 368 */	NdrFcShort( 0x0 ),	/* Offset= 0 (368) */
/* 370 */	NdrFcShort( 0xffff ),	/* Offset= -1 (369) */
/* 372 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 376 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 378 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 380 */	NdrFcLong( 0x0 ),	/* 0 */
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
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 398 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 408 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 410 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 412 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 414 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 416 */	NdrFcShort( 0x2 ),	/* Offset= 2 (418) */
/* 418 */	
			0x12, 0x0,	/* FC_UP */
/* 420 */	NdrFcShort( 0x284 ),	/* Offset= 644 (1064) */
/* 422 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 424 */	NdrFcShort( 0x20 ),	/* 32 */
/* 426 */	NdrFcShort( 0xa ),	/* 10 */
/* 428 */	NdrFcLong( 0x8 ),	/* 8 */
/* 432 */	NdrFcShort( 0x64 ),	/* Offset= 100 (532) */
/* 434 */	NdrFcLong( 0xd ),	/* 13 */
/* 438 */	NdrFcShort( 0x98 ),	/* Offset= 152 (590) */
/* 440 */	NdrFcLong( 0x9 ),	/* 9 */
/* 444 */	NdrFcShort( 0xcc ),	/* Offset= 204 (648) */
/* 446 */	NdrFcLong( 0xc ),	/* 12 */
/* 450 */	NdrFcShort( 0x100 ),	/* Offset= 256 (706) */
/* 452 */	NdrFcLong( 0x24 ),	/* 36 */
/* 456 */	NdrFcShort( 0x170 ),	/* Offset= 368 (824) */
/* 458 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 462 */	NdrFcShort( 0x18c ),	/* Offset= 396 (858) */
/* 464 */	NdrFcLong( 0x10 ),	/* 16 */
/* 468 */	NdrFcShort( 0x1b0 ),	/* Offset= 432 (900) */
/* 470 */	NdrFcLong( 0x2 ),	/* 2 */
/* 474 */	NdrFcShort( 0x1d0 ),	/* Offset= 464 (938) */
/* 476 */	NdrFcLong( 0x3 ),	/* 3 */
/* 480 */	NdrFcShort( 0x1f0 ),	/* Offset= 496 (976) */
/* 482 */	NdrFcLong( 0x14 ),	/* 20 */
/* 486 */	NdrFcShort( 0x210 ),	/* Offset= 528 (1014) */
/* 488 */	NdrFcShort( 0xffff ),	/* Offset= -1 (487) */
/* 490 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 500 */	0x0 , 
			0x0,		/* 0 */
/* 502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 514 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 516 */	0x0 , 
			0x0,		/* 0 */
/* 518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 526 */	
			0x12, 0x0,	/* FC_UP */
/* 528 */	NdrFcShort( 0xfe14 ),	/* Offset= -492 (36) */
/* 530 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 532 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 534 */	NdrFcShort( 0x10 ),	/* 16 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x6 ),	/* Offset= 6 (544) */
/* 540 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 542 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 544 */	
			0x11, 0x0,	/* FC_RP */
/* 546 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (490) */
/* 548 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 558 */	0x0 , 
			0x0,		/* 0 */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 568 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 572 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 574 */	0x0 , 
			0x0,		/* 0 */
/* 576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 584 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 586 */	NdrFcShort( 0xff30 ),	/* Offset= -208 (378) */
/* 588 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 590 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 592 */	NdrFcShort( 0x10 ),	/* 16 */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x6 ),	/* Offset= 6 (602) */
/* 598 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 600 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 602 */	
			0x11, 0x0,	/* FC_RP */
/* 604 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (548) */
/* 606 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 616 */	0x0 , 
			0x0,		/* 0 */
/* 618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 626 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 630 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 632 */	0x0 , 
			0x0,		/* 0 */
/* 634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 642 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 644 */	NdrFcShort( 0xff08 ),	/* Offset= -248 (396) */
/* 646 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 648 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 650 */	NdrFcShort( 0x10 ),	/* 16 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x6 ),	/* Offset= 6 (660) */
/* 656 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 658 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 660 */	
			0x11, 0x0,	/* FC_RP */
/* 662 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (606) */
/* 664 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 674 */	0x0 , 
			0x0,		/* 0 */
/* 676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 684 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 688 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 690 */	0x0 , 
			0x0,		/* 0 */
/* 692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 700 */	
			0x12, 0x0,	/* FC_UP */
/* 702 */	NdrFcShort( 0x1c6 ),	/* Offset= 454 (1156) */
/* 704 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 706 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 708 */	NdrFcShort( 0x10 ),	/* 16 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x6 ),	/* Offset= 6 (718) */
/* 714 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 716 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 718 */	
			0x11, 0x0,	/* FC_RP */
/* 720 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (664) */
/* 722 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 724 */	NdrFcLong( 0x2f ),	/* 47 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 734 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 736 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 738 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 740 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 742 */	NdrFcShort( 0x1 ),	/* 1 */
/* 744 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 746 */	NdrFcShort( 0x4 ),	/* 4 */
/* 748 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 750 */	0x0 , 
			0x0,		/* 0 */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 760 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 762 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 764 */	NdrFcShort( 0x18 ),	/* 24 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0xa ),	/* Offset= 10 (778) */
/* 770 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 772 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 774 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (722) */
/* 776 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 778 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 780 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (740) */
/* 782 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 792 */	0x0 , 
			0x0,		/* 0 */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 802 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 806 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 808 */	0x0 , 
			0x0,		/* 0 */
/* 810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 818 */	
			0x12, 0x0,	/* FC_UP */
/* 820 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (762) */
/* 822 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 824 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 826 */	NdrFcShort( 0x10 ),	/* 16 */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x6 ),	/* Offset= 6 (836) */
/* 832 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 834 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 836 */	
			0x11, 0x0,	/* FC_RP */
/* 838 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (782) */
/* 840 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 844 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 846 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 848 */	NdrFcShort( 0x10 ),	/* 16 */
/* 850 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 852 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 854 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (840) */
			0x5b,		/* FC_END */
/* 858 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 860 */	NdrFcShort( 0x20 ),	/* 32 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0xa ),	/* Offset= 10 (874) */
/* 866 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 868 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 870 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (846) */
			0x5b,		/* FC_END */
/* 874 */	
			0x11, 0x0,	/* FC_RP */
/* 876 */	NdrFcShort( 0xfeb8 ),	/* Offset= -328 (548) */
/* 878 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 880 */	NdrFcShort( 0x1 ),	/* 1 */
/* 882 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 888 */	0x0 , 
			0x0,		/* 0 */
/* 890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 898 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 900 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 902 */	NdrFcShort( 0x10 ),	/* 16 */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x6 ),	/* Offset= 6 (912) */
/* 908 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 910 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 912 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 914 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (878) */
/* 916 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 918 */	NdrFcShort( 0x2 ),	/* 2 */
/* 920 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 926 */	0x0 , 
			0x0,		/* 0 */
/* 928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 936 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 938 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 940 */	NdrFcShort( 0x10 ),	/* 16 */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x6 ),	/* Offset= 6 (950) */
/* 946 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 948 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 950 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 952 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (916) */
/* 954 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 956 */	NdrFcShort( 0x4 ),	/* 4 */
/* 958 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 964 */	0x0 , 
			0x0,		/* 0 */
/* 966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 974 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 976 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 978 */	NdrFcShort( 0x10 ),	/* 16 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x6 ),	/* Offset= 6 (988) */
/* 984 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 986 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 988 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 990 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (954) */
/* 992 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 996 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1002 */	0x0 , 
			0x0,		/* 0 */
/* 1004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1008 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1012 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1014 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1016 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1026) */
/* 1022 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1024 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1026 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1028 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (992) */
/* 1030 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1034 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1036 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1038 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1042 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1044 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 1046 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1048 */	0x0 , 
			0x0,		/* 0 */
/* 1050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1058 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1060 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1030) */
/* 1062 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1064 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1066 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1068 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1038) */
/* 1070 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1070) */
/* 1072 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1074 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1076 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1078 */	0x0,		/* 0 */
			NdrFcShort( 0xfd6f ),	/* Offset= -657 (422) */
			0x5b,		/* FC_END */
/* 1082 */	
			0x12, 0x0,	/* FC_UP */
/* 1084 */	NdrFcShort( 0xfebe ),	/* Offset= -322 (762) */
/* 1086 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1088 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1090 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1092 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1094 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1096 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1098 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1100 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1102 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1104 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1106 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1108 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1110 */	
			0x12, 0x0,	/* FC_UP */
/* 1112 */	NdrFcShort( 0xfd1c ),	/* Offset= -740 (372) */
/* 1114 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1116 */	NdrFcShort( 0xfbae ),	/* Offset= -1106 (10) */
/* 1118 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1120 */	NdrFcShort( 0xfd1a ),	/* Offset= -742 (378) */
/* 1122 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1124 */	NdrFcShort( 0xfd28 ),	/* Offset= -728 (396) */
/* 1126 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1128 */	NdrFcShort( 0xfd36 ),	/* Offset= -714 (414) */
/* 1130 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1132 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1134) */
/* 1134 */	
			0x12, 0x0,	/* FC_UP */
/* 1136 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1156) */
/* 1138 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1140 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1142 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1144 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1146 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1148 */	
			0x12, 0x0,	/* FC_UP */
/* 1150 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1138) */
/* 1152 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1154 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1156 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1158 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1162) */
/* 1164 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1166 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1168 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1170 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1172 */	NdrFcShort( 0xfbac ),	/* Offset= -1108 (64) */
/* 1174 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1176 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1178 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1180 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1184 */	NdrFcShort( 0xfb9c ),	/* Offset= -1124 (60) */
/* 1186 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1188 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1194) */
/* 1190 */	
			0x13, 0x0,	/* FC_OP */
/* 1192 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1156) */
/* 1194 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1198 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1190) */
/* 1204 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1206 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1212) */
/* 1208 */	
			0x13, 0x0,	/* FC_OP */
/* 1210 */	NdrFcShort( 0xfb6a ),	/* Offset= -1174 (36) */
/* 1212 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1208) */
/* 1222 */	
			0x11, 0x0,	/* FC_RP */
/* 1224 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1212) */
/* 1226 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1228 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1230 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1232 */	NdrFcLong( 0x40ce1ccd ),	/* 1087249613 */
/* 1236 */	NdrFcShort( 0xa99c ),	/* -22116 */
/* 1238 */	NdrFcShort( 0x4a34 ),	/* 18996 */
/* 1240 */	0xb2,		/* 178 */
			0x85,		/* 133 */
/* 1242 */	0x4c,		/* 76 */
			0x12,		/* 18 */
/* 1244 */	0x2c,		/* 44 */
			0x8d,		/* 141 */
/* 1246 */	0x50,		/* 80 */
			0x18,		/* 24 */
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
/* 1270 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1272 */	NdrFcLong( 0xa844a5dd ),	/* -1471896099 */
/* 1276 */	NdrFcShort( 0x9ab9 ),	/* -25927 */
/* 1278 */	NdrFcShort( 0x4130 ),	/* 16688 */
/* 1280 */	0xa2,		/* 162 */
			0x2c,		/* 44 */
/* 1282 */	0xcb,		/* 203 */
			0x75,		/* 117 */
/* 1284 */	0x2f,		/* 47 */
			0x3c,		/* 60 */
/* 1286 */	0xc3,		/* 195 */
			0x5d,		/* 93 */
/* 1288 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1290 */	NdrFcLong( 0x78c894fb ),	/* 2026411259 */
/* 1294 */	NdrFcShort( 0x9551 ),	/* -27311 */
/* 1296 */	NdrFcShort( 0x45bb ),	/* 17851 */
/* 1298 */	0x81,		/* 129 */
			0x7b,		/* 123 */
/* 1300 */	0x31,		/* 49 */
			0x3c,		/* 60 */
/* 1302 */	0xc4,		/* 196 */
			0x52,		/* 82 */
/* 1304 */	0xd6,		/* 214 */
			0x98,		/* 152 */
/* 1306 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1308 */	NdrFcLong( 0xa32e1eb6 ),	/* -1557258570 */
/* 1312 */	NdrFcShort( 0x1437 ),	/* 5175 */
/* 1314 */	NdrFcShort( 0x425d ),	/* 16989 */
/* 1316 */	0xb9,		/* 185 */
			0x66,		/* 102 */
/* 1318 */	0xb,		/* 11 */
			0x42,		/* 66 */
/* 1320 */	0x7c,		/* 124 */
			0x10,		/* 16 */
/* 1322 */	0x9b,		/* 155 */
			0x9e,		/* 158 */
/* 1324 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1326 */	NdrFcLong( 0xc9c7563d ),	/* -909683139 */
/* 1330 */	NdrFcShort( 0xd672 ),	/* -10638 */
/* 1332 */	NdrFcShort( 0x47ba ),	/* 18362 */
/* 1334 */	0xb7,		/* 183 */
			0x78,		/* 120 */
/* 1336 */	0x74,		/* 116 */
			0x27,		/* 39 */
/* 1338 */	0xa0,		/* 160 */
			0x29,		/* 41 */
/* 1340 */	0x43,		/* 67 */
			0x80,		/* 128 */
/* 1342 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1344 */	NdrFcLong( 0x40ce1ccd ),	/* 1087249613 */
/* 1348 */	NdrFcShort( 0xa99c ),	/* -22116 */
/* 1350 */	NdrFcShort( 0x4a34 ),	/* 18996 */
/* 1352 */	0xb2,		/* 178 */
			0x85,		/* 133 */
/* 1354 */	0x4c,		/* 76 */
			0x12,		/* 18 */
/* 1356 */	0x2c,		/* 44 */
			0x8d,		/* 141 */
/* 1358 */	0x50,		/* 80 */
			0x18,		/* 24 */
/* 1360 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1362 */	0xe,		/* FC_ENUM32 */
			0x5c,		/* FC_PAD */
/* 1364 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1366 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1368) */
/* 1368 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1370 */	NdrFcLong( 0x5ab40352 ),	/* 1521746770 */
/* 1374 */	NdrFcShort( 0x3e42 ),	/* 15938 */
/* 1376 */	NdrFcShort( 0x4b0e ),	/* 19214 */
/* 1378 */	0xb7,		/* 183 */
			0xdf,		/* 223 */
/* 1380 */	0x9a,		/* 154 */
			0x31,		/* 49 */
/* 1382 */	0x59,		/* 89 */
			0x20,		/* 32 */
/* 1384 */	0xaa,		/* 170 */
			0xde,		/* 222 */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: INCFCollectionMap, ver. 0.0,
   GUID={0x302930A6,0x6E9B,0x4040,{0xB1,0x10,0x80,0xD8,0x2E,0xB2,0x02,0x9A}} */

#pragma code_seg(".orpc")
static const unsigned short INCFCollectionMap_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    38,
    76,
    108,
    152,
    190,
    228,
    272,
    316,
    360,
    404,
    448,
    480
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
    530,
    574,
    618,
    662,
    706,
    744,
    782,
    820,
    858,
    890
    };



/* Object interface: INCFAudioTag, ver. 0.0,
   GUID={0x5AB40352,0x3E42,0x4B0E,{0xB7,0xDF,0x9A,0x31,0x59,0x20,0xAA,0xDE}} */

#pragma code_seg(".orpc")
static const unsigned short INCFAudioTag_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    928,
    966,
    1004,
    1042,
    152,
    1080,
    1118,
    1156,
    1194,
    1232,
    1270,
    1308,
    1346,
    1384,
    1422,
    1460,
    1498,
    1536,
    1574,
    1612,
    1650,
    1688,
    1726,
    1764,
    1802,
    1840,
    1878,
    1916,
    1954,
    1992,
    2030,
    2062,
    2100,
    2138,
    2176,
    2214,
    2252,
    2290
    };



/* Object interface: INCFWmaTag, ver. 0.0,
   GUID={0x78C894FB,0x9551,0x45BB,{0x81,0x7B,0x31,0x3C,0xC4,0x52,0xD6,0x98}} */

#pragma code_seg(".orpc")
static const unsigned short INCFWmaTag_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    928,
    966,
    1004,
    1042,
    152,
    1080,
    1118,
    1156,
    1194,
    1232,
    1270,
    1308,
    1346,
    1384,
    1422,
    1460,
    1498,
    1536,
    1574,
    1612,
    1650,
    1688,
    1726,
    1764,
    1802,
    1840,
    1878,
    1916,
    1954,
    1992,
    2030,
    2062,
    2100,
    2138,
    2176,
    2214,
    2252,
    2290,
    0
    };



/* Object interface: INCFMp3Tag, ver. 0.0,
   GUID={0xA32E1EB6,0x1437,0x425D,{0xB9,0x66,0x0B,0x42,0x7C,0x10,0x9B,0x9E}} */

#pragma code_seg(".orpc")
static const unsigned short INCFMp3Tag_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    928,
    966,
    1004,
    1042,
    152,
    1080,
    1118,
    1156,
    1194,
    1232,
    1270,
    1308,
    1346,
    1384,
    1422,
    1460,
    1498,
    1536,
    1574,
    1612,
    1650,
    1688,
    1726,
    1764,
    1802,
    1840,
    1878,
    1916,
    1954,
    1992,
    2030,
    2062,
    2100,
    2138,
    2176,
    2214,
    2252,
    2290,
    0
    };



/* Object interface: INCFAacTag, ver. 0.0,
   GUID={0xC9C7563D,0xD672,0x47BA,{0xB7,0x78,0x74,0x27,0xA0,0x29,0x43,0x80}} */

#pragma code_seg(".orpc")
static const unsigned short INCFAacTag_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    928,
    966,
    1004,
    1042,
    152,
    1080,
    1118,
    1156,
    1194,
    1232,
    1270,
    1308,
    1346,
    1384,
    1422,
    1460,
    1498,
    1536,
    1574,
    1612,
    1650,
    1688,
    1726,
    1764,
    1802,
    1840,
    1878,
    1916,
    1954,
    1992,
    2030,
    2062,
    2100,
    2138,
    2176,
    2214,
    2252,
    2290,
    0
    };



/* Object interface: INCFMp3Genre, ver. 0.0,
   GUID={0x8B260E48,0x2D30,0x42BA,{0x81,0x13,0x02,0x93,0xCA,0x98,0x48,0x9A}} */

#pragma code_seg(".orpc")
static const unsigned short INCFMp3Genre_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2328,
    2372,
    2416
    };



/* Object interface: INCFAudioCD, ver. 0.0,
   GUID={0x01785C52,0xE318,0x4AA2,{0x97,0x8C,0xA8,0xD3,0x29,0x2D,0x8A,0xEE}} */

#pragma code_seg(".orpc")
static const unsigned short INCFAudioCD_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    928,
    966,
    2454,
    2492,
    2530,
    1080,
    2568,
    2606,
    2650,
    2700,
    2744,
    1308,
    2782,
    1384,
    2820,
    2864,
    2902,
    2958,
    2996,
    1612,
    3034
    };



/* Object interface: INCFEncoderParams, ver. 0.0,
   GUID={0xA844A5DD,0x9AB9,0x4130,{0xA2,0x2C,0xCB,0x75,0x2F,0x3C,0xC3,0x5D}} */

#pragma code_seg(".orpc")
static const unsigned short INCFEncoderParams_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    3072,
    3110,
    3148,
    2530,
    3186
    };



/* Object interface: INCFWmaEncoder, ver. 0.0,
   GUID={0xCFFAA2D5,0xB040,0x469F,{0x90,0x01,0x02,0xFD,0xF8,0xAD,0x37,0xE8}} */

#pragma code_seg(".orpc")
static const unsigned short INCFWmaEncoder_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3224,
    3286,
    3324,
    1042,
    3362
    };



/* Object interface: INCFMp3Encoder, ver. 0.0,
   GUID={0x533B8527,0x207C,0x495C,{0xB2,0x44,0x7D,0x02,0x66,0x9B,0x53,0x22}} */

#pragma code_seg(".orpc")
static const unsigned short INCFMp3Encoder_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3400,
    3286,
    3324,
    1042,
    3362
    };



/* Object interface: INCFAacEncoder, ver. 0.0,
   GUID={0x2A42810A,0xB410,0x42FF,{0xB4,0xBB,0xE6,0x48,0xB3,0x73,0xDD,0xB8}} */

#pragma code_seg(".orpc")
static const unsigned short INCFAacEncoder_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3462,
    3286,
    3324,
    1042,
    3362
    };



/* Object interface: INCFWavEncoder, ver. 0.0,
   GUID={0x812F9470,0xCA37,0x46A4,{0x81,0x2A,0x54,0xD9,0x23,0x2B,0xD6,0xFD}} */

#pragma code_seg(".orpc")
static const unsigned short INCFWavEncoder_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3524,
    3580,
    3324,
    3630,
    3668,
    744,
    3706,
    3756
    };



/* Standard interface: __MIDL_itf_ItSoftwareNCFAudio_0000_0013, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: INCFAudioPlayer, ver. 0.0,
   GUID={0x02F186E7,0xBA8D,0x4A10,{0xAC,0x72,0xFE,0xB8,0x2B,0x85,0x17,0x1A}} */

#pragma code_seg(".orpc")
static const unsigned short INCFAudioPlayer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3806,
    3838,
    76,
    3876,
    3908,
    3940,
    3972,
    820,
    4004,
    890,
    4042,
    4080,
    4118
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


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
__midl_frag728_t;
extern const __midl_frag728_t __midl_frag728;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag727_t;
extern const __midl_frag727_t __midl_frag727;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag726_t;
extern const __midl_frag726_t __midl_frag726;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag725_t;
extern const __midl_frag725_t __midl_frag725;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag724_t;
extern const __midl_frag724_t __midl_frag724;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag721_t;
extern const __midl_frag721_t __midl_frag721;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag720_t;
extern const __midl_frag720_t __midl_frag720;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag717_t;
extern const __midl_frag717_t __midl_frag717;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
}
__midl_frag703_t;
extern const __midl_frag703_t __midl_frag703;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag693_t;
extern const __midl_frag693_t __midl_frag693;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag692_t;
extern const __midl_frag692_t __midl_frag692;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag691_t;
extern const __midl_frag691_t __midl_frag691;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag687_t;
extern const __midl_frag687_t __midl_frag687;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag686_t;
extern const __midl_frag686_t __midl_frag686;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag684_t;
extern const __midl_frag684_t __midl_frag684;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag683_t;
extern const __midl_frag683_t __midl_frag683;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag682_t;
extern const __midl_frag682_t __midl_frag682;

typedef 
NDR64_FORMAT_CHAR
__midl_frag680_t;
extern const __midl_frag680_t __midl_frag680;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag679_t;
extern const __midl_frag679_t __midl_frag679;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag675_t;
extern const __midl_frag675_t __midl_frag675;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag669_t;
extern const __midl_frag669_t __midl_frag669;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag668_t;
extern const __midl_frag668_t __midl_frag668;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag667_t;
extern const __midl_frag667_t __midl_frag667;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag666_t;
extern const __midl_frag666_t __midl_frag666;

typedef 
NDR64_FORMAT_CHAR
__midl_frag664_t;
extern const __midl_frag664_t __midl_frag664;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag663_t;
extern const __midl_frag663_t __midl_frag663;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag662_t;
extern const __midl_frag662_t __midl_frag662;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag650_t;
extern const __midl_frag650_t __midl_frag650;

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
__midl_frag641_t;
extern const __midl_frag641_t __midl_frag641;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag617_t;
extern const __midl_frag617_t __midl_frag617;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag616_t;
extern const __midl_frag616_t __midl_frag616;

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
__midl_frag613_t;
extern const __midl_frag613_t __midl_frag613;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag589_t;
extern const __midl_frag589_t __midl_frag589;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag588_t;
extern const __midl_frag588_t __midl_frag588;

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
__midl_frag585_t;
extern const __midl_frag585_t __midl_frag585;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag561_t;
extern const __midl_frag561_t __midl_frag561;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag560_t;
extern const __midl_frag560_t __midl_frag560;

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
__midl_frag557_t;
extern const __midl_frag557_t __midl_frag557;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag554_t;
extern const __midl_frag554_t __midl_frag554;

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
__midl_frag512_t;
extern const __midl_frag512_t __midl_frag512;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag502_t;
extern const __midl_frag502_t __midl_frag502;

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
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag471_t;
extern const __midl_frag471_t __midl_frag471;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag466_t;
extern const __midl_frag466_t __midl_frag466;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag433_t;
extern const __midl_frag433_t __midl_frag433;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag432_t;
extern const __midl_frag432_t __midl_frag432;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag431_t;
extern const __midl_frag431_t __midl_frag431;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag430_t;
extern const __midl_frag430_t __midl_frag430;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag424_t;
extern const __midl_frag424_t __midl_frag424;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag384_t;
extern const __midl_frag384_t __midl_frag384;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag383_t;
extern const __midl_frag383_t __midl_frag383;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag382_t;
extern const __midl_frag382_t __midl_frag382;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag228_t;
extern const __midl_frag228_t __midl_frag228;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag223_t;
extern const __midl_frag223_t __midl_frag223;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag211_t;
extern const __midl_frag211_t __midl_frag211;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag210_t;
extern const __midl_frag210_t __midl_frag210;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag209_t;
extern const __midl_frag209_t __midl_frag209;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag206_t;
extern const __midl_frag206_t __midl_frag206;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag204_t;
extern const __midl_frag204_t __midl_frag204;

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
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag183_t;
extern const __midl_frag183_t __midl_frag183;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag181_t;
extern const __midl_frag181_t __midl_frag181;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag180_t;
extern const __midl_frag180_t __midl_frag180;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag179_t;
extern const __midl_frag179_t __midl_frag179;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag177_t;
extern const __midl_frag177_t __midl_frag177;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag170_t;
extern const __midl_frag170_t __midl_frag170;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag160_t;
extern const __midl_frag160_t __midl_frag160;

typedef 
NDR64_FORMAT_CHAR
__midl_frag157_t;
extern const __midl_frag157_t __midl_frag157;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag156_t;
extern const __midl_frag156_t __midl_frag156;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag152_t;
extern const __midl_frag152_t __midl_frag152;

typedef 
NDR64_FORMAT_CHAR
__midl_frag151_t;
extern const __midl_frag151_t __midl_frag151;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag150_t;
extern const __midl_frag150_t __midl_frag150;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag149_t;
extern const __midl_frag149_t __midl_frag149;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag148_t;
extern const __midl_frag148_t __midl_frag148;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag140_t;
extern const __midl_frag140_t __midl_frag140;

typedef 
struct _NDR64_POINTER_FORMAT
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
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag136_t;
extern const __midl_frag136_t __midl_frag136;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag135_t;
extern const __midl_frag135_t __midl_frag135;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag134_t;
extern const __midl_frag134_t __midl_frag134;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag131_t;
extern const __midl_frag131_t __midl_frag131;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag129_t;
extern const __midl_frag129_t __midl_frag129;

typedef 
NDR64_FORMAT_CHAR
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
NDR64_FORMAT_CHAR
__midl_frag119_t;
extern const __midl_frag119_t __midl_frag119;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag118_t;
extern const __midl_frag118_t __midl_frag118;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag110_t;
extern const __midl_frag110_t __midl_frag110;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag109_t;
extern const __midl_frag109_t __midl_frag109;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag108_t;
extern const __midl_frag108_t __midl_frag108;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag106_t;
extern const __midl_frag106_t __midl_frag106;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag105_t;
extern const __midl_frag105_t __midl_frag105;

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
__midl_frag104_t;
extern const __midl_frag104_t __midl_frag104;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag103_t;
extern const __midl_frag103_t __midl_frag103;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag100_t;
extern const __midl_frag100_t __midl_frag100;

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
__midl_frag99_t;
extern const __midl_frag99_t __midl_frag99;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag98_t;
extern const __midl_frag98_t __midl_frag98;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag95_t;
extern const __midl_frag95_t __midl_frag95;

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
__midl_frag94_t;
extern const __midl_frag94_t __midl_frag94;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag93_t;
extern const __midl_frag93_t __midl_frag93;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag90_t;
extern const __midl_frag90_t __midl_frag90;

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
__midl_frag89_t;
extern const __midl_frag89_t __midl_frag89;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag88_t;
extern const __midl_frag88_t __midl_frag88;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag87_t;
extern const __midl_frag87_t __midl_frag87;

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
__midl_frag82_t;
extern const __midl_frag82_t __midl_frag82;

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
__midl_frag81_t;
extern const __midl_frag81_t __midl_frag81;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag80_t;
extern const __midl_frag80_t __midl_frag80;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag77_t;
extern const __midl_frag77_t __midl_frag77;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag76_t;
extern const __midl_frag76_t __midl_frag76;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag75_t;
extern const __midl_frag75_t __midl_frag75;

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
__midl_frag74_t;
extern const __midl_frag74_t __midl_frag74;

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
__midl_frag72_t;
extern const __midl_frag72_t __midl_frag72;

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
__midl_frag71_t;
extern const __midl_frag71_t __midl_frag71;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag70_t;
extern const __midl_frag70_t __midl_frag70;

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
__midl_frag67_t;
extern const __midl_frag67_t __midl_frag67;

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
__midl_frag66_t;
extern const __midl_frag66_t __midl_frag66;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag65_t;
extern const __midl_frag65_t __midl_frag65;

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
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag52_t;
extern const __midl_frag52_t __midl_frag52;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag51_t;
extern const __midl_frag51_t __midl_frag51;

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
__midl_frag46_t;
extern const __midl_frag46_t __midl_frag46;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag45_t;
extern const __midl_frag45_t __midl_frag45;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag44_t;
extern const __midl_frag44_t __midl_frag44;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag43_t;
extern const __midl_frag43_t __midl_frag43;

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
__midl_frag42_t;
extern const __midl_frag42_t __midl_frag42;

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
__midl_frag24_t;
extern const __midl_frag24_t __midl_frag24;

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
__midl_frag23_t;
extern const __midl_frag23_t __midl_frag23;

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
__midl_frag22_t;
extern const __midl_frag22_t __midl_frag22;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag16_t;
extern const __midl_frag16_t __midl_frag16;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag15_t;
extern const __midl_frag15_t __midl_frag15;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag728_t __midl_frag728 =
0x5    /* FC64_INT32 */;

static const __midl_frag727_t __midl_frag727 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x5ab40352,
        0x3e42,
        0x4b0e,
        {0xb7, 0xdf, 0x9a, 0x31, 0x59, 0x20, 0xaa, 0xde}
    }
};

static const __midl_frag726_t __midl_frag726 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag727
};

static const __midl_frag725_t __midl_frag725 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag726
};

static const __midl_frag724_t __midl_frag724 =
{ 
/* get_Metadata */
    { 
    /* get_Metadata */      /* procedure get_Metadata */
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
    /* pINCFAudioTag */      /* parameter pINCFAudioTag */
        &__midl_frag725,
        { 
        /* pINCFAudioTag */
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
        &__midl_frag728,
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

static const __midl_frag721_t __midl_frag721 =
{ 
/* *AudioPlayerStatus */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag728
};

static const __midl_frag720_t __midl_frag720 =
{ 
/* get_Status */
    { 
    /* get_Status */      /* procedure get_Status */
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
    /* status */      /* parameter status */
        &__midl_frag728,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag728,
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

static const __midl_frag717_t __midl_frag717 =
{ 
/* put_VolumeLevel */
    { 
    /* put_VolumeLevel */      /* procedure put_VolumeLevel */
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
    /* volume */      /* parameter volume */
        &__midl_frag728,
        { 
        /* volume */
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
        &__midl_frag728,
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

static const __midl_frag703_t __midl_frag703 =
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
        &__midl_frag728,
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

static const __midl_frag693_t __midl_frag693 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag15
};

static const __midl_frag692_t __midl_frag692 =
{ 
/* wireBSTR */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag693
};

static const __midl_frag691_t __midl_frag691 =
{ 
/* Load */
    { 
    /* Load */      /* procedure Load */
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
    /* mediaObject */      /* parameter mediaObject */
        &__midl_frag692,
        { 
        /* mediaObject */
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
        &__midl_frag728,
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

static const __midl_frag687_t __midl_frag687 =
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

static const __midl_frag686_t __midl_frag686 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag687
};

static const __midl_frag684_t __midl_frag684 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xa844a5dd,
        0x9ab9,
        0x4130,
        {0xa2, 0x2c, 0xcb, 0x75, 0x2f, 0x3c, 0xc3, 0x5d}
    }
};

static const __midl_frag683_t __midl_frag683 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag684
};

static const __midl_frag682_t __midl_frag682 =
{ 
/* WriteWaveHeaderToStream */
    { 
    /* WriteWaveHeaderToStream */      /* procedure WriteWaveHeaderToStream */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pINCFEncoderParams */      /* parameter pINCFEncoderParams */
        &__midl_frag683,
        { 
        /* pINCFEncoderParams */
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
    /* fileSize */      /* parameter fileSize */
        &__midl_frag728,
        { 
        /* fileSize */
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
    /* pINCFStream */      /* parameter pINCFStream */
        &__midl_frag686,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag728,
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

static const __midl_frag680_t __midl_frag680 =
0x2    /* FC64_INT8 */;

static const __midl_frag679_t __midl_frag679 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag680
};

static const __midl_frag675_t __midl_frag675 =
{ 
/* WriteWaveHeader */
    { 
    /* WriteWaveHeader */      /* procedure WriteWaveHeader */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 37 /* 0x25 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pINCFEncoderParams */      /* parameter pINCFEncoderParams */
        &__midl_frag683,
        { 
        /* pINCFEncoderParams */
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
    /* fileSize */      /* parameter fileSize */
        &__midl_frag728,
        { 
        /* fileSize */
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
    /* pWaveHeader */      /* parameter pWaveHeader */
        &__midl_frag680,
        { 
        /* pWaveHeader */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag728,
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

static const __midl_frag669_t __midl_frag669 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag15
};

static const __midl_frag668_t __midl_frag668 =
{ 
/* wireBSTR */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag669
};

static const __midl_frag667_t __midl_frag667 =
{ 
/* *wireBSTR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag668
};

static const __midl_frag666_t __midl_frag666 =
{ 
/* get_ExtractionErrorMessage */
    { 
    /* get_ExtractionErrorMessage */      /* procedure get_ExtractionErrorMessage */
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
    /* error_message */      /* parameter error_message */
        &__midl_frag668,
        { 
        /* error_message */
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
        &__midl_frag728,
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

static const __midl_frag664_t __midl_frag664 =
0x4    /* FC64_INT16 */;

static const __midl_frag663_t __midl_frag663 =
{ 
/* *VARIANT_BOOL */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag664
};

static const __midl_frag662_t __midl_frag662 =
{ 
/* get_ExtractionSucceeded */
    { 
    /* get_ExtractionSucceeded */      /* procedure get_ExtractionSucceeded */
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
    /* status */      /* parameter status */
        &__midl_frag664,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag728,
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

static const __midl_frag650_t __midl_frag650 =
{ 
/* EncodeToStream */
    { 
    /* EncodeToStream */      /* procedure EncodeToStream */
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
    /* pINCFEncoderParams */      /* parameter pINCFEncoderParams */
        &__midl_frag683,
        { 
        /* pINCFEncoderParams */
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
    /* in_filename */      /* parameter in_filename */
        &__midl_frag692,
        { 
        /* in_filename */
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
    /* pINCFStream */      /* parameter pINCFStream */
        &__midl_frag686,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag728,
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

static const __midl_frag641_t __midl_frag641 =
{ 
/* Encode */
    { 
    /* Encode */      /* procedure Encode */
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
    /* pINCFEncoderParams */      /* parameter pINCFEncoderParams */
        &__midl_frag683,
        { 
        /* pINCFEncoderParams */
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
    /* in_filename */      /* parameter in_filename */
        &__midl_frag692,
        { 
        /* in_filename */
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
    /* out_filename */      /* parameter out_filename */
        &__midl_frag692,
        { 
        /* out_filename */
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
    /* async */      /* parameter async */
        &__midl_frag664,
        { 
        /* async */
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
        &__midl_frag728,
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

static const __midl_frag617_t __midl_frag617 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xc9c7563d,
        0xd672,
        0x47ba,
        {0xb7, 0x78, 0x74, 0x27, 0xa0, 0x29, 0x43, 0x80}
    }
};

static const __midl_frag616_t __midl_frag616 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag617
};

static const __midl_frag613_t __midl_frag613 =
{ 
/* Encode */
    { 
    /* Encode */      /* procedure Encode */
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
    /* pINCFEncoderParams */      /* parameter pINCFEncoderParams */
        &__midl_frag683,
        { 
        /* pINCFEncoderParams */
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
    /* pINCFAacTag */      /* parameter pINCFAacTag */
        &__midl_frag616,
        { 
        /* pINCFAacTag */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* in_filename */      /* parameter in_filename */
        &__midl_frag692,
        { 
        /* in_filename */
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
    /* out_filename */      /* parameter out_filename */
        &__midl_frag692,
        { 
        /* out_filename */
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
    /* async */      /* parameter async */
        &__midl_frag664,
        { 
        /* async */
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
        &__midl_frag728,
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

static const __midl_frag589_t __midl_frag589 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xa32e1eb6,
        0x1437,
        0x425d,
        {0xb9, 0x66, 0x0b, 0x42, 0x7c, 0x10, 0x9b, 0x9e}
    }
};

static const __midl_frag588_t __midl_frag588 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag589
};

static const __midl_frag585_t __midl_frag585 =
{ 
/* Encode */
    { 
    /* Encode */      /* procedure Encode */
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
    /* pINCFEncoderParams */      /* parameter pINCFEncoderParams */
        &__midl_frag683,
        { 
        /* pINCFEncoderParams */
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
    /* pINCFMp3Tag */      /* parameter pINCFMp3Tag */
        &__midl_frag588,
        { 
        /* pINCFMp3Tag */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* in_filename */      /* parameter in_filename */
        &__midl_frag692,
        { 
        /* in_filename */
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
    /* out_filename */      /* parameter out_filename */
        &__midl_frag692,
        { 
        /* out_filename */
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
    /* async */      /* parameter async */
        &__midl_frag664,
        { 
        /* async */
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
        &__midl_frag728,
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

static const __midl_frag561_t __midl_frag561 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x78c894fb,
        0x9551,
        0x45bb,
        {0x81, 0x7b, 0x31, 0x3c, 0xc4, 0x52, 0xd6, 0x98}
    }
};

static const __midl_frag560_t __midl_frag560 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag561
};

static const __midl_frag557_t __midl_frag557 =
{ 
/* Encode */
    { 
    /* Encode */      /* procedure Encode */
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
    /* pINCFEncoderParams */      /* parameter pINCFEncoderParams */
        &__midl_frag683,
        { 
        /* pINCFEncoderParams */
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
    /* pINCFWmaTag */      /* parameter pINCFWmaTag */
        &__midl_frag560,
        { 
        /* pINCFWmaTag */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* in_filename */      /* parameter in_filename */
        &__midl_frag692,
        { 
        /* in_filename */
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
    /* out_filename */      /* parameter out_filename */
        &__midl_frag692,
        { 
        /* out_filename */
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
    /* async */      /* parameter async */
        &__midl_frag664,
        { 
        /* async */
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
        &__midl_frag728,
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

static const __midl_frag554_t __midl_frag554 =
{ 
/* put_BitsPerSample */
    { 
    /* put_BitsPerSample */      /* procedure put_BitsPerSample */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bits */      /* parameter bits */
        &__midl_frag664,
        { 
        /* bits */
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
        &__midl_frag728,
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

static const __midl_frag512_t __midl_frag512 =
{ 
/* ExtractTrackRange */
    { 
    /* ExtractTrackRange */      /* procedure ExtractTrackRange */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 22 /* 0x16 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* track_number_start */      /* parameter track_number_start */
        &__midl_frag728,
        { 
        /* track_number_start */
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
    /* track_number_stop */      /* parameter track_number_stop */
        &__midl_frag728,
        { 
        /* track_number_stop */
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
    /* out_filename */      /* parameter out_filename */
        &__midl_frag692,
        { 
        /* out_filename */
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
    /* bAsync */      /* parameter bAsync */
        &__midl_frag664,
        { 
        /* bAsync */
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
        &__midl_frag728,
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

static const __midl_frag502_t __midl_frag502 =
{ 
/* GetTitle */
    { 
    /* GetTitle */      /* procedure GetTitle */
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
    /* track_number */      /* parameter track_number */
        &__midl_frag728,
        { 
        /* track_number */
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
    /* track_name */      /* parameter track_name */
        &__midl_frag668,
        { 
        /* track_name */
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
        &__midl_frag728,
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

static const __midl_frag477_t __midl_frag477 =
{ 
/* ExecuteCddbQuery */
    { 
    /* ExecuteCddbQuery */      /* procedure ExecuteCddbQuery */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* freedb_server */      /* parameter freedb_server */
        &__midl_frag692,
        { 
        /* freedb_server */
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
    /* bAsync */      /* parameter bAsync */
        &__midl_frag664,
        { 
        /* bAsync */
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
        &__midl_frag728,
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

static const __midl_frag471_t __midl_frag471 =
{ 
/* ExtractTrack */
    { 
    /* ExtractTrack */      /* procedure ExtractTrack */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 14 /* 0xe */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* track_number */      /* parameter track_number */
        &__midl_frag728,
        { 
        /* track_number */
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
    /* filename */      /* parameter filename */
        &__midl_frag692,
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bAsync */      /* parameter bAsync */
        &__midl_frag664,
        { 
        /* bAsync */
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
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag728,
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

static const __midl_frag466_t __midl_frag466 =
{ 
/* GetPlaytime */
    { 
    /* GetPlaytime */      /* procedure GetPlaytime */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* track_number */      /* parameter track_number */
        &__midl_frag728,
        { 
        /* track_number */
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
    /* ms */      /* parameter ms */
        &__midl_frag728,
        { 
        /* ms */
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
        &__midl_frag728,
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

static const __midl_frag433_t __midl_frag433 =
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

static const __midl_frag432_t __midl_frag432 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag433
};

static const __midl_frag431_t __midl_frag431 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag432
};

static const __midl_frag430_t __midl_frag430 =
{ 
/* EnumerateGenre */
    { 
    /* EnumerateGenre */      /* procedure EnumerateGenre */
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
    /* ppINCFCollectionMap */      /* parameter ppINCFCollectionMap */
        &__midl_frag431,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag728,
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

static const __midl_frag424_t __midl_frag424 =
{ 
/* GetGenreByName */
    { 
    /* GetGenreByName */      /* procedure GetGenreByName */
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
    /* genre_name */      /* parameter genre_name */
        &__midl_frag692,
        { 
        /* genre_name */
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
    /* genre_id */      /* parameter genre_id */
        &__midl_frag728,
        { 
        /* genre_id */
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
        &__midl_frag728,
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

static const __midl_frag384_t __midl_frag384 =
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

static const __midl_frag383_t __midl_frag383 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag384
};

static const __midl_frag382_t __midl_frag382 =
{ 
/* SaveToInterface */
    { 
    /* SaveToInterface */      /* procedure SaveToInterface */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pIUnknown */      /* parameter pIUnknown */
        &__midl_frag383,
        { 
        /* pIUnknown */
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
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag728,
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

static const __midl_frag228_t __midl_frag228 =
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
        &__midl_frag686,
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
        &__midl_frag728,
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
        &__midl_frag728,
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

static const __midl_frag223_t __midl_frag223 =
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
        &__midl_frag680,
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
        &__midl_frag728,
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
        &__midl_frag728,
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

static const __midl_frag211_t __midl_frag211 =
{ 
/* *_wireVARIANT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag22
};

static const __midl_frag210_t __midl_frag210 =
{ 
/* wireVARIANT */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 1 /* 0x1 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 24 /* 0x18 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag211
};

static const __midl_frag209_t __midl_frag209 =
{ 
/* *wireVARIANT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag210
};

static const __midl_frag206_t __midl_frag206 =
{ 
/* *wireBSTR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag668
};

static const __midl_frag204_t __midl_frag204 =
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
        &__midl_frag728,
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
        &__midl_frag668,
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
        &__midl_frag210,
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
        &__midl_frag728,
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

static const __midl_frag190_t __midl_frag190 =
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
        &__midl_frag728,
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
        &__midl_frag210,
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
        &__midl_frag728,
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

static const __midl_frag183_t __midl_frag183 =
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
        &__midl_frag692,
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
        &__midl_frag210,
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
        &__midl_frag728,
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

static const __midl_frag181_t __midl_frag181 =
{ 
/* *_wireVARIANT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag22
};

static const __midl_frag180_t __midl_frag180 =
{ 
/* wireVARIANT */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 1 /* 0x1 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 24 /* 0x18 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag181
};

static const __midl_frag179_t __midl_frag179 =
{ 
/* *wireVARIANT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag180
};

static const __midl_frag177_t __midl_frag177 =
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
        &__midl_frag728,
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
        &__midl_frag180,
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
        &__midl_frag728,
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

static const __midl_frag170_t __midl_frag170 =
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
        &__midl_frag692,
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
        &__midl_frag180,
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
        &__midl_frag728,
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

static const __midl_frag160_t __midl_frag160 =
{ 
/* *UINT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag728
};

static const __midl_frag157_t __midl_frag157 =
0x7    /* FC64_INT64 */;

static const __midl_frag156_t __midl_frag156 =
{ 
/* *ULONGLONG */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag157
};

static const __midl_frag152_t __midl_frag152 =
{ 
/* *USHORT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag664
};

static const __midl_frag151_t __midl_frag151 =
0x10    /* FC64_CHAR */;

static const __midl_frag150_t __midl_frag150 =
{ 
/* *CHAR */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag151
};

static const __midl_frag149_t __midl_frag149 =
{ 
/* *DECIMAL */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag148
};

static const __midl_frag148_t __midl_frag148 =
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

static const __midl_frag140_t __midl_frag140 =
{ 
/* **_wireVARIANT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag181
};

static const __midl_frag139_t __midl_frag139 =
{ 
/* *_wireSAFEARRAY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag42
};

static const __midl_frag138_t __midl_frag138 =
{ 
/* **_wireSAFEARRAY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag139
};

static const __midl_frag137_t __midl_frag137 =
{ 
/* ***_wireSAFEARRAY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag138
};

static const __midl_frag136_t __midl_frag136 =
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

static const __midl_frag135_t __midl_frag135 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag136
};

static const __midl_frag134_t __midl_frag134 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag135
};

static const __midl_frag131_t __midl_frag131 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag383
};

static const __midl_frag129_t __midl_frag129 =
{ 
/* **FLAGGED_WORD_BLOB */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag693
};

static const __midl_frag128_t __midl_frag128 =
0xc    /* FC64_FLOAT64 */;

static const __midl_frag127_t __midl_frag127 =
{ 
/* *DATE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag128
};

static const __midl_frag126_t __midl_frag126 =
{ 
/* *CY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag33
};

static const __midl_frag119_t __midl_frag119 =
0xb    /* FC64_FLOAT32 */;

static const __midl_frag118_t __midl_frag118 =
{ 
/* *FLOAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag119
};

static const __midl_frag110_t __midl_frag110 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag680
};

static const __midl_frag109_t __midl_frag109 =
{ 
/* *_wireBRECORD */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag74
};

static const __midl_frag108_t __midl_frag108 =
{ 
/*  */
    { 
    /* *hyper */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag105
    }
};

static const __midl_frag106_t __midl_frag106 =
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

static const __midl_frag105_t __midl_frag105 =
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
        &__midl_frag106
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag157
    }
};

static const __midl_frag104_t __midl_frag104 =
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
        &__midl_frag108,
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

static const __midl_frag103_t __midl_frag103 =
{ 
/*  */
    { 
    /* *ULONG */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag100
    }
};

static const __midl_frag100_t __midl_frag100 =
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
        &__midl_frag106
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag728
    }
};

static const __midl_frag99_t __midl_frag99 =
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
        &__midl_frag103,
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

static const __midl_frag98_t __midl_frag98 =
{ 
/*  */
    { 
    /* *short */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag95
    }
};

static const __midl_frag95_t __midl_frag95 =
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
        &__midl_frag106
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag664
    }
};

static const __midl_frag94_t __midl_frag94 =
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
        &__midl_frag98,
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

static const __midl_frag93_t __midl_frag93 =
{ 
/*  */
    { 
    /* *byte */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag90
    }
};

static const __midl_frag90_t __midl_frag90 =
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
        &__midl_frag106
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag680
    }
};

static const __midl_frag89_t __midl_frag89 =
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
        &__midl_frag93,
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

static const __midl_frag88_t __midl_frag88 =
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

static const __midl_frag87_t __midl_frag87 =
{ 
/*  */
    { 
    /* **struct _NDR64_POINTER_FORMAT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag82
    }
};

static const __midl_frag82_t __midl_frag82 =
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
        &__midl_frag106
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
                &__midl_frag384
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag383
    }
};

static const __midl_frag81_t __midl_frag81 =
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
        &__midl_frag87,
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
            &__midl_frag88
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

static const __midl_frag80_t __midl_frag80 =
{ 
/*  */
    { 
    /* **_wireBRECORD */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag72
    }
};

static const __midl_frag77_t __midl_frag77 =
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

static const __midl_frag76_t __midl_frag76 =
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
        &__midl_frag77
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag680
    }
};

static const __midl_frag75_t __midl_frag75 =
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

static const __midl_frag74_t __midl_frag74 =
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
            &__midl_frag75
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
            &__midl_frag76
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag72_t __midl_frag72 =
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
        &__midl_frag106
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
                &__midl_frag74
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag109
    }
};

static const __midl_frag71_t __midl_frag71 =
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
        &__midl_frag80,
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

static const __midl_frag70_t __midl_frag70 =
{ 
/*  */
    { 
    /* **_wireVARIANT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag67
    }
};

static const __midl_frag67_t __midl_frag67 =
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
        &__midl_frag106
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
                &__midl_frag22
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag181
    }
};

static const __midl_frag66_t __midl_frag66 =
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
        &__midl_frag70,
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

static const __midl_frag65_t __midl_frag65 =
{ 
/*  */
    { 
    /* **struct _NDR64_POINTER_FORMAT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag60
    }
};

static const __midl_frag60_t __midl_frag60 =
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
        &__midl_frag106
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
                &__midl_frag136
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag135
    }
};

static const __midl_frag59_t __midl_frag59 =
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
        &__midl_frag65,
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

static const __midl_frag52_t __midl_frag52 =
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
        &__midl_frag87,
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

static const __midl_frag51_t __midl_frag51 =
{ 
/*  */
    { 
    /* **FLAGGED_WORD_BLOB */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag48
    }
};

static const __midl_frag48_t __midl_frag48 =
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
        &__midl_frag106
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
                &__midl_frag15
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag693
    }
};

static const __midl_frag47_t __midl_frag47 =
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
        &__midl_frag51,
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

static const __midl_frag46_t __midl_frag46 =
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
        &__midl_frag47,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 13 /* 0xd */,
        &__midl_frag52,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag59,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 12 /* 0xc */,
        &__midl_frag66,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 36 /* 0x24 */,
        &__midl_frag71,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 32781 /* 0x800d */,
        &__midl_frag81,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16 /* 0x10 */,
        &__midl_frag89,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag94,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag99,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 20 /* 0x14 */,
        &__midl_frag104,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag45_t __midl_frag45 =
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

static const __midl_frag44_t __midl_frag44 =
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

static const __midl_frag43_t __midl_frag43 =
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
        &__midl_frag44
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag45
    }
};

static const __midl_frag42_t __midl_frag42 =
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
        &__midl_frag43,
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
            &__midl_frag46
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

static const __midl_frag33_t __midl_frag33 =
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

static const __midl_frag24_t __midl_frag24 =
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

static const __midl_frag23_t __midl_frag23 =
{ 
/* __MIDL_IOleAutomationTypes_0004 */
    { 
    /* __MIDL_IOleAutomationTypes_0004 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag24,
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
        &__midl_frag157,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag728,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 17 /* 0x11 */,
        &__midl_frag680,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag664,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag119,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag128,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 11 /* 0xb */,
        &__midl_frag664,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 10 /* 0xa */,
        &__midl_frag728,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag33,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag128,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag693,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 13 /* 0xd */,
        &__midl_frag383,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag135,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8192 /* 0x2000 */,
        &__midl_frag138,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 36 /* 0x24 */,
        &__midl_frag109,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16420 /* 0x4024 */,
        &__midl_frag109,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16401 /* 0x4011 */,
        &__midl_frag110,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16386 /* 0x4002 */,
        &__midl_frag152,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16387 /* 0x4003 */,
        &__midl_frag160,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16404 /* 0x4014 */,
        &__midl_frag156,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16388 /* 0x4004 */,
        &__midl_frag118,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16389 /* 0x4005 */,
        &__midl_frag127,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16395 /* 0x400b */,
        &__midl_frag152,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16394 /* 0x400a */,
        &__midl_frag160,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16390 /* 0x4006 */,
        &__midl_frag126,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16391 /* 0x4007 */,
        &__midl_frag127,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16392 /* 0x4008 */,
        &__midl_frag129,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16397 /* 0x400d */,
        &__midl_frag131,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16393 /* 0x4009 */,
        &__midl_frag134,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 24576 /* 0x6000 */,
        &__midl_frag137,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16396 /* 0x400c */,
        &__midl_frag140,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16 /* 0x10 */,
        &__midl_frag151,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 18 /* 0x12 */,
        &__midl_frag664,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 19 /* 0x13 */,
        &__midl_frag728,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 21 /* 0x15 */,
        &__midl_frag157,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 22 /* 0x16 */,
        &__midl_frag728,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 23 /* 0x17 */,
        &__midl_frag728,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 14 /* 0xe */,
        &__midl_frag148,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16398 /* 0x400e */,
        &__midl_frag149,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16400 /* 0x4010 */,
        &__midl_frag150,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16402 /* 0x4012 */,
        &__midl_frag152,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16403 /* 0x4013 */,
        &__midl_frag160,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16405 /* 0x4015 */,
        &__midl_frag156,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16406 /* 0x4016 */,
        &__midl_frag160,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16407 /* 0x4017 */,
        &__midl_frag160,
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

static const __midl_frag22_t __midl_frag22 =
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
            &__midl_frag23
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

static const __midl_frag16_t __midl_frag16 =
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
        &__midl_frag77
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag664
    }
};

static const __midl_frag15_t __midl_frag15 =
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
        &__midl_frag16
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"


static const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize64
            ,BSTR_UserMarshal64
            ,BSTR_UserUnmarshal64
            ,BSTR_UserFree64
            },
            {
            VARIANT_UserSize64
            ,VARIANT_UserMarshal64
            ,VARIANT_UserUnmarshal64
            ,VARIANT_UserFree64
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: INCFCollectionMap, ver. 0.0,
   GUID={0x302930A6,0x6E9B,0x4040,{0xB1,0x10,0x80,0xD8,0x2E,0xB2,0x02,0x9A}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFCollectionMap_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag662,
    &__midl_frag720,
    &__midl_frag703,
    &__midl_frag170,
    &__midl_frag691,
    &__midl_frag717,
    &__midl_frag170,
    &__midl_frag177,
    &__midl_frag183,
    &__midl_frag190,
    &__midl_frag502,
    &__midl_frag703,
    &__midl_frag204
    };


static const MIDL_SYNTAX_INFO INCFCollectionMap_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFCollectionMap_FormatStringOffsetTable[-3],
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
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
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFCollectionMap_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFCollectionMap_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFCollectionMap_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
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


/* Object interface: INCFStream, ver. 0.0,
   GUID={0x40CE1CCD,0xA99C,0x4A34,{0xB2,0x85,0x4C,0x12,0x2C,0x8D,0x50,0x18}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFStream_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag223,
    &__midl_frag228,
    &__midl_frag223,
    &__midl_frag228,
    &__midl_frag717,
    &__midl_frag720,
    &__midl_frag717,
    &__midl_frag720,
    &__midl_frag703,
    &__midl_frag720
    };


static const MIDL_SYNTAX_INFO INCFStream_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFStream_FormatStringOffsetTable[-3],
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
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
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFStream_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFStream_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFStream_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
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


/* Object interface: INCFAudioTag, ver. 0.0,
   GUID={0x5AB40352,0x3E42,0x4B0E,{0xB7,0xDF,0x9A,0x31,0x59,0x20,0xAA,0xDE}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFAudioTag_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag691,
    &__midl_frag382,
    &__midl_frag382,
    &__midl_frag703,
    &__midl_frag720,
    &__midl_frag662,
    &__midl_frag662,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691
    };


static const MIDL_SYNTAX_INFO INCFAudioTag_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFAudioTag_FormatStringOffsetTable[-3],
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFAudioTag_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFAudioTag_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFAudioTag_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFAudioTag_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFAudioTag_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFAudioTag_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFAudioTag_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(45) _INCFAudioTagProxyVtbl = 
{
    &INCFAudioTag_ProxyInfo,
    &IID_INCFAudioTag,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetTitle */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetTitle */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetAuthor */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetAuthor */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetDescription */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetDescription */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetRating */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetRating */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetCopyright */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetCopyright */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetAlbumTitle */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetAlbumTitle */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetTrack */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetTrack */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetGenre */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetGenre */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetYear */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetYear */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetCopyrightURL */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetCopyrightURL */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetAlbumCoverURL */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetAlbumCoverURL */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetPromotionURL */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetPromotionURL */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetLyrics */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetLyrics */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::LoadFromFile */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SaveToFile */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::LoadFromInterface */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SaveToInterface */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::Clear */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::get_Duration */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::get_HasAudio */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::get_HasVideo */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetComposer */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetComposer */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::GetAlbumAuthor */ ,
    (void *) (INT_PTR) -1 /* INCFAudioTag::SetAlbumAuthor */
};


static const PRPC_STUB_FUNCTION INCFAudioTag_table[] =
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
    NdrStubCall3
};

CInterfaceStubVtbl _INCFAudioTagStubVtbl =
{
    &IID_INCFAudioTag,
    &INCFAudioTag_ServerInfo,
    45,
    &INCFAudioTag_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFWmaTag, ver. 0.0,
   GUID={0x78C894FB,0x9551,0x45BB,{0x81,0x7B,0x31,0x3C,0xC4,0x52,0xD6,0x98}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFWmaTag_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag691,
    &__midl_frag382,
    &__midl_frag382,
    &__midl_frag703,
    &__midl_frag720,
    &__midl_frag662,
    &__midl_frag662,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    0
    };


static const MIDL_SYNTAX_INFO INCFWmaTag_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFWmaTag_FormatStringOffsetTable[-3],
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFWmaTag_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFWmaTag_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFWmaTag_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFWmaTag_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFWmaTag_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFWmaTag_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFWmaTag_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(45) _INCFWmaTagProxyVtbl = 
{
    0,
    &IID_INCFWmaTag,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation INCFAudioTag::SetTitle */ ,
    0 /* forced delegation INCFAudioTag::GetTitle */ ,
    0 /* forced delegation INCFAudioTag::SetAuthor */ ,
    0 /* forced delegation INCFAudioTag::GetAuthor */ ,
    0 /* forced delegation INCFAudioTag::SetDescription */ ,
    0 /* forced delegation INCFAudioTag::GetDescription */ ,
    0 /* forced delegation INCFAudioTag::SetRating */ ,
    0 /* forced delegation INCFAudioTag::GetRating */ ,
    0 /* forced delegation INCFAudioTag::SetCopyright */ ,
    0 /* forced delegation INCFAudioTag::GetCopyright */ ,
    0 /* forced delegation INCFAudioTag::SetAlbumTitle */ ,
    0 /* forced delegation INCFAudioTag::GetAlbumTitle */ ,
    0 /* forced delegation INCFAudioTag::SetTrack */ ,
    0 /* forced delegation INCFAudioTag::GetTrack */ ,
    0 /* forced delegation INCFAudioTag::SetGenre */ ,
    0 /* forced delegation INCFAudioTag::GetGenre */ ,
    0 /* forced delegation INCFAudioTag::SetYear */ ,
    0 /* forced delegation INCFAudioTag::GetYear */ ,
    0 /* forced delegation INCFAudioTag::SetCopyrightURL */ ,
    0 /* forced delegation INCFAudioTag::GetCopyrightURL */ ,
    0 /* forced delegation INCFAudioTag::SetAlbumCoverURL */ ,
    0 /* forced delegation INCFAudioTag::GetAlbumCoverURL */ ,
    0 /* forced delegation INCFAudioTag::SetPromotionURL */ ,
    0 /* forced delegation INCFAudioTag::GetPromotionURL */ ,
    0 /* forced delegation INCFAudioTag::SetLyrics */ ,
    0 /* forced delegation INCFAudioTag::GetLyrics */ ,
    0 /* forced delegation INCFAudioTag::LoadFromFile */ ,
    0 /* forced delegation INCFAudioTag::SaveToFile */ ,
    0 /* forced delegation INCFAudioTag::LoadFromInterface */ ,
    0 /* forced delegation INCFAudioTag::SaveToInterface */ ,
    0 /* forced delegation INCFAudioTag::Clear */ ,
    0 /* forced delegation INCFAudioTag::get_Duration */ ,
    0 /* forced delegation INCFAudioTag::get_HasAudio */ ,
    0 /* forced delegation INCFAudioTag::get_HasVideo */ ,
    0 /* forced delegation INCFAudioTag::GetComposer */ ,
    0 /* forced delegation INCFAudioTag::SetComposer */ ,
    0 /* forced delegation INCFAudioTag::GetAlbumAuthor */ ,
    0 /* forced delegation INCFAudioTag::SetAlbumAuthor */
};


static const PRPC_STUB_FUNCTION INCFWmaTag_table[] =
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
    NdrStubCall3
};

CInterfaceStubVtbl _INCFWmaTagStubVtbl =
{
    &IID_INCFWmaTag,
    &INCFWmaTag_ServerInfo,
    45,
    &INCFWmaTag_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFMp3Tag, ver. 0.0,
   GUID={0xA32E1EB6,0x1437,0x425D,{0xB9,0x66,0x0B,0x42,0x7C,0x10,0x9B,0x9E}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFMp3Tag_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag691,
    &__midl_frag382,
    &__midl_frag382,
    &__midl_frag703,
    &__midl_frag720,
    &__midl_frag662,
    &__midl_frag662,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    0
    };


static const MIDL_SYNTAX_INFO INCFMp3Tag_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFMp3Tag_FormatStringOffsetTable[-3],
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFMp3Tag_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFMp3Tag_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFMp3Tag_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFMp3Tag_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFMp3Tag_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFMp3Tag_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFMp3Tag_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(45) _INCFMp3TagProxyVtbl = 
{
    0,
    &IID_INCFMp3Tag,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation INCFAudioTag::SetTitle */ ,
    0 /* forced delegation INCFAudioTag::GetTitle */ ,
    0 /* forced delegation INCFAudioTag::SetAuthor */ ,
    0 /* forced delegation INCFAudioTag::GetAuthor */ ,
    0 /* forced delegation INCFAudioTag::SetDescription */ ,
    0 /* forced delegation INCFAudioTag::GetDescription */ ,
    0 /* forced delegation INCFAudioTag::SetRating */ ,
    0 /* forced delegation INCFAudioTag::GetRating */ ,
    0 /* forced delegation INCFAudioTag::SetCopyright */ ,
    0 /* forced delegation INCFAudioTag::GetCopyright */ ,
    0 /* forced delegation INCFAudioTag::SetAlbumTitle */ ,
    0 /* forced delegation INCFAudioTag::GetAlbumTitle */ ,
    0 /* forced delegation INCFAudioTag::SetTrack */ ,
    0 /* forced delegation INCFAudioTag::GetTrack */ ,
    0 /* forced delegation INCFAudioTag::SetGenre */ ,
    0 /* forced delegation INCFAudioTag::GetGenre */ ,
    0 /* forced delegation INCFAudioTag::SetYear */ ,
    0 /* forced delegation INCFAudioTag::GetYear */ ,
    0 /* forced delegation INCFAudioTag::SetCopyrightURL */ ,
    0 /* forced delegation INCFAudioTag::GetCopyrightURL */ ,
    0 /* forced delegation INCFAudioTag::SetAlbumCoverURL */ ,
    0 /* forced delegation INCFAudioTag::GetAlbumCoverURL */ ,
    0 /* forced delegation INCFAudioTag::SetPromotionURL */ ,
    0 /* forced delegation INCFAudioTag::GetPromotionURL */ ,
    0 /* forced delegation INCFAudioTag::SetLyrics */ ,
    0 /* forced delegation INCFAudioTag::GetLyrics */ ,
    0 /* forced delegation INCFAudioTag::LoadFromFile */ ,
    0 /* forced delegation INCFAudioTag::SaveToFile */ ,
    0 /* forced delegation INCFAudioTag::LoadFromInterface */ ,
    0 /* forced delegation INCFAudioTag::SaveToInterface */ ,
    0 /* forced delegation INCFAudioTag::Clear */ ,
    0 /* forced delegation INCFAudioTag::get_Duration */ ,
    0 /* forced delegation INCFAudioTag::get_HasAudio */ ,
    0 /* forced delegation INCFAudioTag::get_HasVideo */ ,
    0 /* forced delegation INCFAudioTag::GetComposer */ ,
    0 /* forced delegation INCFAudioTag::SetComposer */ ,
    0 /* forced delegation INCFAudioTag::GetAlbumAuthor */ ,
    0 /* forced delegation INCFAudioTag::SetAlbumAuthor */
};


static const PRPC_STUB_FUNCTION INCFMp3Tag_table[] =
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
    NdrStubCall3
};

CInterfaceStubVtbl _INCFMp3TagStubVtbl =
{
    &IID_INCFMp3Tag,
    &INCFMp3Tag_ServerInfo,
    45,
    &INCFMp3Tag_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFAacTag, ver. 0.0,
   GUID={0xC9C7563D,0xD672,0x47BA,{0xB7,0x78,0x74,0x27,0xA0,0x29,0x43,0x80}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFAacTag_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag691,
    &__midl_frag382,
    &__midl_frag382,
    &__midl_frag703,
    &__midl_frag720,
    &__midl_frag662,
    &__midl_frag662,
    &__midl_frag666,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag691,
    0
    };


static const MIDL_SYNTAX_INFO INCFAacTag_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFAacTag_FormatStringOffsetTable[-3],
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFAacTag_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFAacTag_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFAacTag_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFAacTag_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFAacTag_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFAacTag_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFAacTag_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(45) _INCFAacTagProxyVtbl = 
{
    0,
    &IID_INCFAacTag,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation INCFAudioTag::SetTitle */ ,
    0 /* forced delegation INCFAudioTag::GetTitle */ ,
    0 /* forced delegation INCFAudioTag::SetAuthor */ ,
    0 /* forced delegation INCFAudioTag::GetAuthor */ ,
    0 /* forced delegation INCFAudioTag::SetDescription */ ,
    0 /* forced delegation INCFAudioTag::GetDescription */ ,
    0 /* forced delegation INCFAudioTag::SetRating */ ,
    0 /* forced delegation INCFAudioTag::GetRating */ ,
    0 /* forced delegation INCFAudioTag::SetCopyright */ ,
    0 /* forced delegation INCFAudioTag::GetCopyright */ ,
    0 /* forced delegation INCFAudioTag::SetAlbumTitle */ ,
    0 /* forced delegation INCFAudioTag::GetAlbumTitle */ ,
    0 /* forced delegation INCFAudioTag::SetTrack */ ,
    0 /* forced delegation INCFAudioTag::GetTrack */ ,
    0 /* forced delegation INCFAudioTag::SetGenre */ ,
    0 /* forced delegation INCFAudioTag::GetGenre */ ,
    0 /* forced delegation INCFAudioTag::SetYear */ ,
    0 /* forced delegation INCFAudioTag::GetYear */ ,
    0 /* forced delegation INCFAudioTag::SetCopyrightURL */ ,
    0 /* forced delegation INCFAudioTag::GetCopyrightURL */ ,
    0 /* forced delegation INCFAudioTag::SetAlbumCoverURL */ ,
    0 /* forced delegation INCFAudioTag::GetAlbumCoverURL */ ,
    0 /* forced delegation INCFAudioTag::SetPromotionURL */ ,
    0 /* forced delegation INCFAudioTag::GetPromotionURL */ ,
    0 /* forced delegation INCFAudioTag::SetLyrics */ ,
    0 /* forced delegation INCFAudioTag::GetLyrics */ ,
    0 /* forced delegation INCFAudioTag::LoadFromFile */ ,
    0 /* forced delegation INCFAudioTag::SaveToFile */ ,
    0 /* forced delegation INCFAudioTag::LoadFromInterface */ ,
    0 /* forced delegation INCFAudioTag::SaveToInterface */ ,
    0 /* forced delegation INCFAudioTag::Clear */ ,
    0 /* forced delegation INCFAudioTag::get_Duration */ ,
    0 /* forced delegation INCFAudioTag::get_HasAudio */ ,
    0 /* forced delegation INCFAudioTag::get_HasVideo */ ,
    0 /* forced delegation INCFAudioTag::GetComposer */ ,
    0 /* forced delegation INCFAudioTag::SetComposer */ ,
    0 /* forced delegation INCFAudioTag::GetAlbumAuthor */ ,
    0 /* forced delegation INCFAudioTag::SetAlbumAuthor */
};


static const PRPC_STUB_FUNCTION INCFAacTag_table[] =
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
    NdrStubCall3
};

CInterfaceStubVtbl _INCFAacTagStubVtbl =
{
    &IID_INCFAacTag,
    &INCFAacTag_ServerInfo,
    45,
    &INCFAacTag_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFMp3Genre, ver. 0.0,
   GUID={0x8B260E48,0x2D30,0x42BA,{0x81,0x13,0x02,0x93,0xCA,0x98,0x48,0x9A}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFMp3Genre_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag502,
    &__midl_frag424,
    &__midl_frag430
    };


static const MIDL_SYNTAX_INFO INCFMp3Genre_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFMp3Genre_FormatStringOffsetTable[-3],
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFMp3Genre_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFMp3Genre_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFMp3Genre_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFMp3Genre_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFMp3Genre_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFMp3Genre_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFMp3Genre_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(10) _INCFMp3GenreProxyVtbl = 
{
    &INCFMp3Genre_ProxyInfo,
    &IID_INCFMp3Genre,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFMp3Genre::GetGenreById */ ,
    (void *) (INT_PTR) -1 /* INCFMp3Genre::GetGenreByName */ ,
    (void *) (INT_PTR) -1 /* INCFMp3Genre::EnumerateGenre */
};


static const PRPC_STUB_FUNCTION INCFMp3Genre_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFMp3GenreStubVtbl =
{
    &IID_INCFMp3Genre,
    &INCFMp3Genre_ServerInfo,
    10,
    &INCFMp3Genre_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFAudioCD, ver. 0.0,
   GUID={0x01785C52,0xE318,0x4AA2,{0x97,0x8C,0xA8,0xD3,0x29,0x2D,0x8A,0xEE}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFAudioCD_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag691,
    &__midl_frag666,
    &__midl_frag666,
    &__midl_frag720,
    &__midl_frag662,
    &__midl_frag666,
    &__midl_frag720,
    &__midl_frag466,
    &__midl_frag471,
    &__midl_frag477,
    &__midl_frag666,
    &__midl_frag666,
    &__midl_frag666,
    &__midl_frag666,
    &__midl_frag502,
    &__midl_frag662,
    &__midl_frag512,
    &__midl_frag662,
    &__midl_frag662,
    &__midl_frag666,
    &__midl_frag720
    };


static const MIDL_SYNTAX_INFO INCFAudioCD_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFAudioCD_FormatStringOffsetTable[-3],
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFAudioCD_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFAudioCD_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFAudioCD_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFAudioCD_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFAudioCD_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFAudioCD_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFAudioCD_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(28) _INCFAudioCDProxyVtbl = 
{
    &INCFAudioCD_ProxyInfo,
    &IID_INCFAudioCD,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::Load */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::get_CddbId */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::get_CddbQuery */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::get_TrackCount */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::get_Loaded */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::get_Drive */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::get_TotalPlaytime */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::GetPlaytime */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::ExtractTrack */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::ExecuteCddbQuery */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::get_Artist */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::get_AlbumTitle */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::get_Genre */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::get_Year */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::GetTitle */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::get_CddbLoaded */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::ExtractTrackRange */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::get_ExtractionFinished */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::get_ExtractionSucceeded */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::get_ExtractionErrorMessage */ ,
    (void *) (INT_PTR) -1 /* INCFAudioCD::GetExtractionProgressPercent */
};


static const PRPC_STUB_FUNCTION INCFAudioCD_table[] =
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
    NdrStubCall3
};

CInterfaceStubVtbl _INCFAudioCDStubVtbl =
{
    &IID_INCFAudioCD,
    &INCFAudioCD_ServerInfo,
    28,
    &INCFAudioCD_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFEncoderParams, ver. 0.0,
   GUID={0xA844A5DD,0x9AB9,0x4130,{0xA2,0x2C,0xCB,0x75,0x2F,0x3C,0xC3,0x5D}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFEncoderParams_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag662,
    &__midl_frag554,
    &__midl_frag720,
    &__midl_frag717,
    &__midl_frag662,
    &__midl_frag554
    };


static const MIDL_SYNTAX_INFO INCFEncoderParams_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFEncoderParams_FormatStringOffsetTable[-3],
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFEncoderParams_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFEncoderParams_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFEncoderParams_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFEncoderParams_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFEncoderParams_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFEncoderParams_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFEncoderParams_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(13) _INCFEncoderParamsProxyVtbl = 
{
    &INCFEncoderParams_ProxyInfo,
    &IID_INCFEncoderParams,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFEncoderParams::get_NumberOfChannels */ ,
    (void *) (INT_PTR) -1 /* INCFEncoderParams::put_NumberOfChannels */ ,
    (void *) (INT_PTR) -1 /* INCFEncoderParams::get_SamplesPerSecond */ ,
    (void *) (INT_PTR) -1 /* INCFEncoderParams::put_SamplesPerSecond */ ,
    (void *) (INT_PTR) -1 /* INCFEncoderParams::get_BitsPerSample */ ,
    (void *) (INT_PTR) -1 /* INCFEncoderParams::put_BitsPerSample */
};


static const PRPC_STUB_FUNCTION INCFEncoderParams_table[] =
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

CInterfaceStubVtbl _INCFEncoderParamsStubVtbl =
{
    &IID_INCFEncoderParams,
    &INCFEncoderParams_ServerInfo,
    13,
    &INCFEncoderParams_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFWmaEncoder, ver. 0.0,
   GUID={0xCFFAA2D5,0xB040,0x469F,{0x90,0x01,0x02,0xFD,0xF8,0xAD,0x37,0xE8}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFWmaEncoder_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag557,
    &__midl_frag662,
    &__midl_frag662,
    &__midl_frag666,
    &__midl_frag720
    };


static const MIDL_SYNTAX_INFO INCFWmaEncoder_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFWmaEncoder_FormatStringOffsetTable[-3],
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFWmaEncoder_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFWmaEncoder_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFWmaEncoder_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFWmaEncoder_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFWmaEncoder_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFWmaEncoder_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFWmaEncoder_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(12) _INCFWmaEncoderProxyVtbl = 
{
    &INCFWmaEncoder_ProxyInfo,
    &IID_INCFWmaEncoder,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFWmaEncoder::Encode */ ,
    (void *) (INT_PTR) -1 /* INCFWmaEncoder::get_ExtractionFinished */ ,
    (void *) (INT_PTR) -1 /* INCFWmaEncoder::get_ExtractionSucceeded */ ,
    (void *) (INT_PTR) -1 /* INCFWmaEncoder::get_ExtractionErrorMessage */ ,
    (void *) (INT_PTR) -1 /* INCFWmaEncoder::GetExtractionProgressPercent */
};


static const PRPC_STUB_FUNCTION INCFWmaEncoder_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFWmaEncoderStubVtbl =
{
    &IID_INCFWmaEncoder,
    &INCFWmaEncoder_ServerInfo,
    12,
    &INCFWmaEncoder_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFMp3Encoder, ver. 0.0,
   GUID={0x533B8527,0x207C,0x495C,{0xB2,0x44,0x7D,0x02,0x66,0x9B,0x53,0x22}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFMp3Encoder_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag585,
    &__midl_frag662,
    &__midl_frag662,
    &__midl_frag666,
    &__midl_frag720
    };


static const MIDL_SYNTAX_INFO INCFMp3Encoder_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFMp3Encoder_FormatStringOffsetTable[-3],
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFMp3Encoder_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFMp3Encoder_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFMp3Encoder_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFMp3Encoder_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFMp3Encoder_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFMp3Encoder_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFMp3Encoder_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(12) _INCFMp3EncoderProxyVtbl = 
{
    &INCFMp3Encoder_ProxyInfo,
    &IID_INCFMp3Encoder,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFMp3Encoder::Encode */ ,
    (void *) (INT_PTR) -1 /* INCFMp3Encoder::get_ExtractionFinished */ ,
    (void *) (INT_PTR) -1 /* INCFMp3Encoder::get_ExtractionSucceeded */ ,
    (void *) (INT_PTR) -1 /* INCFMp3Encoder::get_ExtractionErrorMessage */ ,
    (void *) (INT_PTR) -1 /* INCFMp3Encoder::GetExtractionProgressPercent */
};


static const PRPC_STUB_FUNCTION INCFMp3Encoder_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFMp3EncoderStubVtbl =
{
    &IID_INCFMp3Encoder,
    &INCFMp3Encoder_ServerInfo,
    12,
    &INCFMp3Encoder_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFAacEncoder, ver. 0.0,
   GUID={0x2A42810A,0xB410,0x42FF,{0xB4,0xBB,0xE6,0x48,0xB3,0x73,0xDD,0xB8}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFAacEncoder_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag613,
    &__midl_frag662,
    &__midl_frag662,
    &__midl_frag666,
    &__midl_frag720
    };


static const MIDL_SYNTAX_INFO INCFAacEncoder_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFAacEncoder_FormatStringOffsetTable[-3],
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFAacEncoder_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFAacEncoder_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFAacEncoder_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFAacEncoder_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFAacEncoder_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFAacEncoder_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFAacEncoder_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(12) _INCFAacEncoderProxyVtbl = 
{
    &INCFAacEncoder_ProxyInfo,
    &IID_INCFAacEncoder,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFAacEncoder::Encode */ ,
    (void *) (INT_PTR) -1 /* INCFAacEncoder::get_ExtractionFinished */ ,
    (void *) (INT_PTR) -1 /* INCFAacEncoder::get_ExtractionSucceeded */ ,
    (void *) (INT_PTR) -1 /* INCFAacEncoder::get_ExtractionErrorMessage */ ,
    (void *) (INT_PTR) -1 /* INCFAacEncoder::GetExtractionProgressPercent */
};


static const PRPC_STUB_FUNCTION INCFAacEncoder_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INCFAacEncoderStubVtbl =
{
    &IID_INCFAacEncoder,
    &INCFAacEncoder_ServerInfo,
    12,
    &INCFAacEncoder_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INCFWavEncoder, ver. 0.0,
   GUID={0x812F9470,0xCA37,0x46A4,{0x81,0x2A,0x54,0xD9,0x23,0x2B,0xD6,0xFD}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFWavEncoder_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag641,
    &__midl_frag650,
    &__midl_frag662,
    &__midl_frag662,
    &__midl_frag666,
    &__midl_frag720,
    &__midl_frag675,
    &__midl_frag682
    };


static const MIDL_SYNTAX_INFO INCFWavEncoder_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFWavEncoder_FormatStringOffsetTable[-3],
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFWavEncoder_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFWavEncoder_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFWavEncoder_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFWavEncoder_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFWavEncoder_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFWavEncoder_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFWavEncoder_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(15) _INCFWavEncoderProxyVtbl = 
{
    &INCFWavEncoder_ProxyInfo,
    &IID_INCFWavEncoder,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFWavEncoder::Encode */ ,
    (void *) (INT_PTR) -1 /* INCFWavEncoder::EncodeToStream */ ,
    (void *) (INT_PTR) -1 /* INCFWavEncoder::get_ExtractionFinished */ ,
    (void *) (INT_PTR) -1 /* INCFWavEncoder::get_ExtractionSucceeded */ ,
    (void *) (INT_PTR) -1 /* INCFWavEncoder::get_ExtractionErrorMessage */ ,
    (void *) (INT_PTR) -1 /* INCFWavEncoder::GetExtractionProgressPercent */ ,
    (void *) (INT_PTR) -1 /* INCFWavEncoder::WriteWaveHeader */ ,
    (void *) (INT_PTR) -1 /* INCFWavEncoder::WriteWaveHeaderToStream */
};


static const PRPC_STUB_FUNCTION INCFWavEncoder_table[] =
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

CInterfaceStubVtbl _INCFWavEncoderStubVtbl =
{
    &IID_INCFWavEncoder,
    &INCFWavEncoder_ServerInfo,
    15,
    &INCFWavEncoder_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_ItSoftwareNCFAudio_0000_0013, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: INCFAudioPlayer, ver. 0.0,
   GUID={0x02F186E7,0xBA8D,0x4A10,{0xAC,0x72,0xFE,0xB8,0x2B,0x85,0x17,0x1A}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INCFAudioPlayer_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag703,
    &__midl_frag691,
    &__midl_frag703,
    &__midl_frag703,
    &__midl_frag703,
    &__midl_frag703,
    &__midl_frag703,
    &__midl_frag720,
    &__midl_frag720,
    &__midl_frag720,
    &__midl_frag717,
    &__midl_frag720,
    &__midl_frag724
    };


static const MIDL_SYNTAX_INFO INCFAudioPlayer_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFAudioPlayer_FormatStringOffsetTable[-3],
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INCFAudioPlayer_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INCFAudioPlayer_ProxyInfo =
    {
    &Object_StubDesc,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    &INCFAudioPlayer_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFAudioPlayer_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INCFAudioPlayer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ItSoftwareNCFAudio__MIDL_ProcFormatString.Format,
    (unsigned short *) &INCFAudioPlayer_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)INCFAudioPlayer_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(20) _INCFAudioPlayerProxyVtbl = 
{
    &INCFAudioPlayer_ProxyInfo,
    &IID_INCFAudioPlayer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INCFAudioPlayer::Initialize */ ,
    (void *) (INT_PTR) -1 /* INCFAudioPlayer::Load */ ,
    (void *) (INT_PTR) -1 /* INCFAudioPlayer::Play */ ,
    (void *) (INT_PTR) -1 /* INCFAudioPlayer::Pause */ ,
    (void *) (INT_PTR) -1 /* INCFAudioPlayer::Resume */ ,
    (void *) (INT_PTR) -1 /* INCFAudioPlayer::Stop */ ,
    (void *) (INT_PTR) -1 /* INCFAudioPlayer::Close */ ,
    (void *) (INT_PTR) -1 /* INCFAudioPlayer::GetPlayedDuration */ ,
    (void *) (INT_PTR) -1 /* INCFAudioPlayer::GetDuration */ ,
    (void *) (INT_PTR) -1 /* INCFAudioPlayer::get_VolumeLevel */ ,
    (void *) (INT_PTR) -1 /* INCFAudioPlayer::put_VolumeLevel */ ,
    (void *) (INT_PTR) -1 /* INCFAudioPlayer::get_Status */ ,
    (void *) (INT_PTR) -1 /* INCFAudioPlayer::get_Metadata */
};


static const PRPC_STUB_FUNCTION INCFAudioPlayer_table[] =
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

CInterfaceStubVtbl _INCFAudioPlayerStubVtbl =
{
    &IID_INCFAudioPlayer,
    &INCFAudioPlayer_ServerInfo,
    20,
    &INCFAudioPlayer_table[-3],
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
    ItSoftwareNCFAudio__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _ItSoftwareNCFAudio_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_INCFAacEncoderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFMp3EncoderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFAacTagProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFMp3GenreProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFAudioTagProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFAudioCDProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFWavEncoderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFCollectionMapProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFMp3TagProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFStreamProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFWmaEncoderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFEncoderParamsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFAudioPlayerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INCFWmaTagProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ItSoftwareNCFAudio_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_INCFAacEncoderStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFMp3EncoderStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFAacTagStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFMp3GenreStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFAudioTagStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFAudioCDStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFWavEncoderStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFCollectionMapStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFMp3TagStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFStreamStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFWmaEncoderStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFEncoderParamsStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFAudioPlayerStubVtbl,
    ( CInterfaceStubVtbl *) &_INCFWmaTagStubVtbl,
    0
};

PCInterfaceName const _ItSoftwareNCFAudio_InterfaceNamesList[] = 
{
    "INCFAacEncoder",
    "INCFMp3Encoder",
    "INCFAacTag",
    "INCFMp3Genre",
    "INCFAudioTag",
    "INCFAudioCD",
    "INCFWavEncoder",
    "INCFCollectionMap",
    "INCFMp3Tag",
    "INCFStream",
    "INCFWmaEncoder",
    "INCFEncoderParams",
    "INCFAudioPlayer",
    "INCFWmaTag",
    0
};

const IID *  const _ItSoftwareNCFAudio_BaseIIDList[] = 
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
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _ItSoftwareNCFAudio_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ItSoftwareNCFAudio, pIID, n)

int __stdcall _ItSoftwareNCFAudio_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ItSoftwareNCFAudio, 14, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _ItSoftwareNCFAudio, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _ItSoftwareNCFAudio, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _ItSoftwareNCFAudio, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ItSoftwareNCFAudio, 14, *pIndex )
    
}

const ExtendedProxyFileInfo ItSoftwareNCFAudio_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ItSoftwareNCFAudio_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ItSoftwareNCFAudio_StubVtblList,
    (const PCInterfaceName * ) & _ItSoftwareNCFAudio_InterfaceNamesList,
    (const IID ** ) & _ItSoftwareNCFAudio_BaseIIDList,
    & _ItSoftwareNCFAudio_IID_Lookup, 
    14,
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

