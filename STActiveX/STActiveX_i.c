

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Fri Mar 03 09:25:35 2017
 */
/* Compiler settings for STActiveX.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


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
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_STActiveXLib,0x1F775BC0,0xFC5A,0x46E7,0x95,0xD9,0xAA,0xE6,0x6A,0x25,0xFD,0xD6);


MIDL_DEFINE_GUID(IID, DIID__DSTActiveX,0x5AC282DB,0xCB80,0x4A59,0xA5,0xC6,0x23,0x73,0x13,0x94,0xD1,0x01);


MIDL_DEFINE_GUID(IID, DIID__DSTActiveXEvents,0x8D2F6C43,0xAD2F,0x4E63,0x90,0xDB,0x24,0xDC,0xA7,0x19,0x09,0xA4);


MIDL_DEFINE_GUID(CLSID, CLSID_STActiveX,0xD3285EC9,0x5667,0x4B9B,0xA9,0x89,0xCA,0x98,0xDD,0x1F,0x8E,0x59);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



