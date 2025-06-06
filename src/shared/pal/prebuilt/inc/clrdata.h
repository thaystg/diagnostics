// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0626 */
/* Compiler settings for clrdata.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0626 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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

#ifndef __clrdata_h__
#define __clrdata_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __ICLRDataTarget_FWD_DEFINED__
#define __ICLRDataTarget_FWD_DEFINED__
typedef interface ICLRDataTarget ICLRDataTarget;

#endif 	/* __ICLRDataTarget_FWD_DEFINED__ */


#ifndef __ICLRDataTarget2_FWD_DEFINED__
#define __ICLRDataTarget2_FWD_DEFINED__
typedef interface ICLRDataTarget2 ICLRDataTarget2;

#endif 	/* __ICLRDataTarget2_FWD_DEFINED__ */


#ifndef __ICLRDataTarget3_FWD_DEFINED__
#define __ICLRDataTarget3_FWD_DEFINED__
typedef interface ICLRDataTarget3 ICLRDataTarget3;

#endif 	/* __ICLRDataTarget3_FWD_DEFINED__ */


#ifndef __ICLRRuntimeLocator_FWD_DEFINED__
#define __ICLRRuntimeLocator_FWD_DEFINED__
typedef interface ICLRRuntimeLocator ICLRRuntimeLocator;


#endif 	/* __ICLRContractLocator_FWD_DEFINED__ */

#ifndef __ICLRContractLocator_FWD_DEFINED__
#define __ICLRContractLocator_FWD_DEFINED__
typedef interface ICLRContractLocator ICLRContractLocator;

#endif 	/* __ICLRContractLocator_FWD_DEFINED__ */


#ifndef __ICLRMetadataLocator_FWD_DEFINED__
#define __ICLRMetadataLocator_FWD_DEFINED__
typedef interface ICLRMetadataLocator ICLRMetadataLocator;

#endif 	/* __ICLRMetadataLocator_FWD_DEFINED__ */


#ifndef __ICLRDataEnumMemoryRegionsCallback_FWD_DEFINED__
#define __ICLRDataEnumMemoryRegionsCallback_FWD_DEFINED__
typedef interface ICLRDataEnumMemoryRegionsCallback ICLRDataEnumMemoryRegionsCallback;

#endif 	/* __ICLRDataEnumMemoryRegionsCallback_FWD_DEFINED__ */


#ifndef __ICLRDataEnumMemoryRegionsCallback2_FWD_DEFINED__
#define __ICLRDataEnumMemoryRegionsCallback2_FWD_DEFINED__
typedef interface ICLRDataEnumMemoryRegionsCallback2 ICLRDataEnumMemoryRegionsCallback2;

#endif 	/* __ICLRDataEnumMemoryRegionsCallback2_FWD_DEFINED__ */


#ifndef __ICLRDataLoggingCallback_FWD_DEFINED__
#define __ICLRDataLoggingCallback_FWD_DEFINED__
typedef interface ICLRDataLoggingCallback ICLRDataLoggingCallback;

#endif 	/* __ICLRDataLoggingCallback_FWD_DEFINED__ */


#ifndef __ICLRDataEnumMemoryRegions_FWD_DEFINED__
#define __ICLRDataEnumMemoryRegions_FWD_DEFINED__
typedef interface ICLRDataEnumMemoryRegions ICLRDataEnumMemoryRegions;

#endif 	/* __ICLRDataEnumMemoryRegions_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_clrdata_0000_0000 */
/* [local] */ 








typedef ULONG64 CLRDATA_ADDRESS;

STDAPI CLRDataCreateInstance(REFIID iid, ICLRDataTarget* target, void** iface);
typedef HRESULT (STDAPICALLTYPE* PFN_CLRDataCreateInstance)(REFIID iid, ICLRDataTarget* target, void** iface);


extern RPC_IF_HANDLE __MIDL_itf_clrdata_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_clrdata_0000_0000_v0_0_s_ifspec;

#ifndef __ICLRDataTarget_INTERFACE_DEFINED__
#define __ICLRDataTarget_INTERFACE_DEFINED__

/* interface ICLRDataTarget */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_ICLRDataTarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3E11CCEE-D08B-43e5-AF01-32717A64DA03")
    ICLRDataTarget : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMachineType( 
            /* [out] */ ULONG32 *machineType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPointerSize( 
            /* [out] */ ULONG32 *pointerSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageBase( 
            /* [string][in] */ LPCWSTR imagePath,
            /* [out] */ CLRDATA_ADDRESS *baseAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadVirtual( 
            /* [in] */ CLRDATA_ADDRESS address,
            /* [length_is][size_is][out] */ BYTE *buffer,
            /* [in] */ ULONG32 bytesRequested,
            /* [out] */ ULONG32 *bytesRead) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteVirtual( 
            /* [in] */ CLRDATA_ADDRESS address,
            /* [size_is][in] */ BYTE *buffer,
            /* [in] */ ULONG32 bytesRequested,
            /* [out] */ ULONG32 *bytesWritten) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTLSValue( 
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 index,
            /* [out] */ CLRDATA_ADDRESS *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTLSValue( 
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 index,
            /* [in] */ CLRDATA_ADDRESS value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentThreadID( 
            /* [out] */ ULONG32 *threadID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetThreadContext( 
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 contextFlags,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][out] */ BYTE *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetThreadContext( 
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICLRDataTargetVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICLRDataTarget * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICLRDataTarget * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICLRDataTarget * This);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetMachineType)
        HRESULT ( STDMETHODCALLTYPE *GetMachineType )( 
            ICLRDataTarget * This,
            /* [out] */ ULONG32 *machineType);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetPointerSize)
        HRESULT ( STDMETHODCALLTYPE *GetPointerSize )( 
            ICLRDataTarget * This,
            /* [out] */ ULONG32 *pointerSize);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetImageBase)
        HRESULT ( STDMETHODCALLTYPE *GetImageBase )( 
            ICLRDataTarget * This,
            /* [string][in] */ LPCWSTR imagePath,
            /* [out] */ CLRDATA_ADDRESS *baseAddress);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, ReadVirtual)
        HRESULT ( STDMETHODCALLTYPE *ReadVirtual )( 
            ICLRDataTarget * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [length_is][size_is][out] */ BYTE *buffer,
            /* [in] */ ULONG32 bytesRequested,
            /* [out] */ ULONG32 *bytesRead);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, WriteVirtual)
        HRESULT ( STDMETHODCALLTYPE *WriteVirtual )( 
            ICLRDataTarget * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [size_is][in] */ BYTE *buffer,
            /* [in] */ ULONG32 bytesRequested,
            /* [out] */ ULONG32 *bytesWritten);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetTLSValue)
        HRESULT ( STDMETHODCALLTYPE *GetTLSValue )( 
            ICLRDataTarget * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 index,
            /* [out] */ CLRDATA_ADDRESS *value);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, SetTLSValue)
        HRESULT ( STDMETHODCALLTYPE *SetTLSValue )( 
            ICLRDataTarget * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 index,
            /* [in] */ CLRDATA_ADDRESS value);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetCurrentThreadID)
        HRESULT ( STDMETHODCALLTYPE *GetCurrentThreadID )( 
            ICLRDataTarget * This,
            /* [out] */ ULONG32 *threadID);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetThreadContext)
        HRESULT ( STDMETHODCALLTYPE *GetThreadContext )( 
            ICLRDataTarget * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 contextFlags,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][out] */ BYTE *context);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, SetThreadContext)
        HRESULT ( STDMETHODCALLTYPE *SetThreadContext )( 
            ICLRDataTarget * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE *context);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, Request)
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            ICLRDataTarget * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        END_INTERFACE
    } ICLRDataTargetVtbl;

    interface ICLRDataTarget
    {
        CONST_VTBL struct ICLRDataTargetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICLRDataTarget_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICLRDataTarget_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICLRDataTarget_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICLRDataTarget_GetMachineType(This,machineType)	\
    ( (This)->lpVtbl -> GetMachineType(This,machineType) ) 

#define ICLRDataTarget_GetPointerSize(This,pointerSize)	\
    ( (This)->lpVtbl -> GetPointerSize(This,pointerSize) ) 

#define ICLRDataTarget_GetImageBase(This,imagePath,baseAddress)	\
    ( (This)->lpVtbl -> GetImageBase(This,imagePath,baseAddress) ) 

#define ICLRDataTarget_ReadVirtual(This,address,buffer,bytesRequested,bytesRead)	\
    ( (This)->lpVtbl -> ReadVirtual(This,address,buffer,bytesRequested,bytesRead) ) 

#define ICLRDataTarget_WriteVirtual(This,address,buffer,bytesRequested,bytesWritten)	\
    ( (This)->lpVtbl -> WriteVirtual(This,address,buffer,bytesRequested,bytesWritten) ) 

#define ICLRDataTarget_GetTLSValue(This,threadID,index,value)	\
    ( (This)->lpVtbl -> GetTLSValue(This,threadID,index,value) ) 

#define ICLRDataTarget_SetTLSValue(This,threadID,index,value)	\
    ( (This)->lpVtbl -> SetTLSValue(This,threadID,index,value) ) 

#define ICLRDataTarget_GetCurrentThreadID(This,threadID)	\
    ( (This)->lpVtbl -> GetCurrentThreadID(This,threadID) ) 

#define ICLRDataTarget_GetThreadContext(This,threadID,contextFlags,contextSize,context)	\
    ( (This)->lpVtbl -> GetThreadContext(This,threadID,contextFlags,contextSize,context) ) 

#define ICLRDataTarget_SetThreadContext(This,threadID,contextSize,context)	\
    ( (This)->lpVtbl -> SetThreadContext(This,threadID,contextSize,context) ) 

#define ICLRDataTarget_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLRDataTarget_INTERFACE_DEFINED__ */


#ifndef __ICLRDataTarget2_INTERFACE_DEFINED__
#define __ICLRDataTarget2_INTERFACE_DEFINED__

/* interface ICLRDataTarget2 */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_ICLRDataTarget2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6d05fae3-189c-4630-a6dc-1c251e1c01ab")
    ICLRDataTarget2 : public ICLRDataTarget
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AllocVirtual( 
            /* [in] */ CLRDATA_ADDRESS addr,
            /* [in] */ ULONG32 size,
            /* [in] */ ULONG32 typeFlags,
            /* [in] */ ULONG32 protectFlags,
            /* [out] */ CLRDATA_ADDRESS *virt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FreeVirtual( 
            /* [in] */ CLRDATA_ADDRESS addr,
            /* [in] */ ULONG32 size,
            /* [in] */ ULONG32 typeFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICLRDataTarget2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICLRDataTarget2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICLRDataTarget2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICLRDataTarget2 * This);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetMachineType)
        HRESULT ( STDMETHODCALLTYPE *GetMachineType )( 
            ICLRDataTarget2 * This,
            /* [out] */ ULONG32 *machineType);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetPointerSize)
        HRESULT ( STDMETHODCALLTYPE *GetPointerSize )( 
            ICLRDataTarget2 * This,
            /* [out] */ ULONG32 *pointerSize);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetImageBase)
        HRESULT ( STDMETHODCALLTYPE *GetImageBase )( 
            ICLRDataTarget2 * This,
            /* [string][in] */ LPCWSTR imagePath,
            /* [out] */ CLRDATA_ADDRESS *baseAddress);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, ReadVirtual)
        HRESULT ( STDMETHODCALLTYPE *ReadVirtual )( 
            ICLRDataTarget2 * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [length_is][size_is][out] */ BYTE *buffer,
            /* [in] */ ULONG32 bytesRequested,
            /* [out] */ ULONG32 *bytesRead);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, WriteVirtual)
        HRESULT ( STDMETHODCALLTYPE *WriteVirtual )( 
            ICLRDataTarget2 * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [size_is][in] */ BYTE *buffer,
            /* [in] */ ULONG32 bytesRequested,
            /* [out] */ ULONG32 *bytesWritten);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetTLSValue)
        HRESULT ( STDMETHODCALLTYPE *GetTLSValue )( 
            ICLRDataTarget2 * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 index,
            /* [out] */ CLRDATA_ADDRESS *value);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, SetTLSValue)
        HRESULT ( STDMETHODCALLTYPE *SetTLSValue )( 
            ICLRDataTarget2 * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 index,
            /* [in] */ CLRDATA_ADDRESS value);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetCurrentThreadID)
        HRESULT ( STDMETHODCALLTYPE *GetCurrentThreadID )( 
            ICLRDataTarget2 * This,
            /* [out] */ ULONG32 *threadID);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetThreadContext)
        HRESULT ( STDMETHODCALLTYPE *GetThreadContext )( 
            ICLRDataTarget2 * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 contextFlags,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][out] */ BYTE *context);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, SetThreadContext)
        HRESULT ( STDMETHODCALLTYPE *SetThreadContext )( 
            ICLRDataTarget2 * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE *context);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, Request)
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            ICLRDataTarget2 * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget2, AllocVirtual)
        HRESULT ( STDMETHODCALLTYPE *AllocVirtual )( 
            ICLRDataTarget2 * This,
            /* [in] */ CLRDATA_ADDRESS addr,
            /* [in] */ ULONG32 size,
            /* [in] */ ULONG32 typeFlags,
            /* [in] */ ULONG32 protectFlags,
            /* [out] */ CLRDATA_ADDRESS *virt);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget2, FreeVirtual)
        HRESULT ( STDMETHODCALLTYPE *FreeVirtual )( 
            ICLRDataTarget2 * This,
            /* [in] */ CLRDATA_ADDRESS addr,
            /* [in] */ ULONG32 size,
            /* [in] */ ULONG32 typeFlags);
        
        END_INTERFACE
    } ICLRDataTarget2Vtbl;

    interface ICLRDataTarget2
    {
        CONST_VTBL struct ICLRDataTarget2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICLRDataTarget2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICLRDataTarget2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICLRDataTarget2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICLRDataTarget2_GetMachineType(This,machineType)	\
    ( (This)->lpVtbl -> GetMachineType(This,machineType) ) 

#define ICLRDataTarget2_GetPointerSize(This,pointerSize)	\
    ( (This)->lpVtbl -> GetPointerSize(This,pointerSize) ) 

#define ICLRDataTarget2_GetImageBase(This,imagePath,baseAddress)	\
    ( (This)->lpVtbl -> GetImageBase(This,imagePath,baseAddress) ) 

#define ICLRDataTarget2_ReadVirtual(This,address,buffer,bytesRequested,bytesRead)	\
    ( (This)->lpVtbl -> ReadVirtual(This,address,buffer,bytesRequested,bytesRead) ) 

#define ICLRDataTarget2_WriteVirtual(This,address,buffer,bytesRequested,bytesWritten)	\
    ( (This)->lpVtbl -> WriteVirtual(This,address,buffer,bytesRequested,bytesWritten) ) 

#define ICLRDataTarget2_GetTLSValue(This,threadID,index,value)	\
    ( (This)->lpVtbl -> GetTLSValue(This,threadID,index,value) ) 

#define ICLRDataTarget2_SetTLSValue(This,threadID,index,value)	\
    ( (This)->lpVtbl -> SetTLSValue(This,threadID,index,value) ) 

#define ICLRDataTarget2_GetCurrentThreadID(This,threadID)	\
    ( (This)->lpVtbl -> GetCurrentThreadID(This,threadID) ) 

#define ICLRDataTarget2_GetThreadContext(This,threadID,contextFlags,contextSize,context)	\
    ( (This)->lpVtbl -> GetThreadContext(This,threadID,contextFlags,contextSize,context) ) 

#define ICLRDataTarget2_SetThreadContext(This,threadID,contextSize,context)	\
    ( (This)->lpVtbl -> SetThreadContext(This,threadID,contextSize,context) ) 

#define ICLRDataTarget2_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 


#define ICLRDataTarget2_AllocVirtual(This,addr,size,typeFlags,protectFlags,virt)	\
    ( (This)->lpVtbl -> AllocVirtual(This,addr,size,typeFlags,protectFlags,virt) ) 

#define ICLRDataTarget2_FreeVirtual(This,addr,size,typeFlags)	\
    ( (This)->lpVtbl -> FreeVirtual(This,addr,size,typeFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLRDataTarget2_INTERFACE_DEFINED__ */


#ifndef __ICLRDataTarget3_INTERFACE_DEFINED__
#define __ICLRDataTarget3_INTERFACE_DEFINED__

/* interface ICLRDataTarget3 */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_ICLRDataTarget3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a5664f95-0af4-4a1b-960e-2f3346b4214c")
    ICLRDataTarget3 : public ICLRDataTarget2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetExceptionRecord( 
            /* [in] */ ULONG32 bufferSize,
            /* [out] */ ULONG32 *bufferUsed,
            /* [size_is][out] */ BYTE *buffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExceptionContextRecord( 
            /* [in] */ ULONG32 bufferSize,
            /* [out] */ ULONG32 *bufferUsed,
            /* [size_is][out] */ BYTE *buffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExceptionThreadID( 
            /* [out] */ ULONG32 *threadID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICLRDataTarget3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICLRDataTarget3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICLRDataTarget3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICLRDataTarget3 * This);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetMachineType)
        HRESULT ( STDMETHODCALLTYPE *GetMachineType )( 
            ICLRDataTarget3 * This,
            /* [out] */ ULONG32 *machineType);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetPointerSize)
        HRESULT ( STDMETHODCALLTYPE *GetPointerSize )( 
            ICLRDataTarget3 * This,
            /* [out] */ ULONG32 *pointerSize);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetImageBase)
        HRESULT ( STDMETHODCALLTYPE *GetImageBase )( 
            ICLRDataTarget3 * This,
            /* [string][in] */ LPCWSTR imagePath,
            /* [out] */ CLRDATA_ADDRESS *baseAddress);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, ReadVirtual)
        HRESULT ( STDMETHODCALLTYPE *ReadVirtual )( 
            ICLRDataTarget3 * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [length_is][size_is][out] */ BYTE *buffer,
            /* [in] */ ULONG32 bytesRequested,
            /* [out] */ ULONG32 *bytesRead);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, WriteVirtual)
        HRESULT ( STDMETHODCALLTYPE *WriteVirtual )( 
            ICLRDataTarget3 * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [size_is][in] */ BYTE *buffer,
            /* [in] */ ULONG32 bytesRequested,
            /* [out] */ ULONG32 *bytesWritten);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetTLSValue)
        HRESULT ( STDMETHODCALLTYPE *GetTLSValue )( 
            ICLRDataTarget3 * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 index,
            /* [out] */ CLRDATA_ADDRESS *value);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, SetTLSValue)
        HRESULT ( STDMETHODCALLTYPE *SetTLSValue )( 
            ICLRDataTarget3 * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 index,
            /* [in] */ CLRDATA_ADDRESS value);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetCurrentThreadID)
        HRESULT ( STDMETHODCALLTYPE *GetCurrentThreadID )( 
            ICLRDataTarget3 * This,
            /* [out] */ ULONG32 *threadID);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, GetThreadContext)
        HRESULT ( STDMETHODCALLTYPE *GetThreadContext )( 
            ICLRDataTarget3 * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 contextFlags,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][out] */ BYTE *context);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, SetThreadContext)
        HRESULT ( STDMETHODCALLTYPE *SetThreadContext )( 
            ICLRDataTarget3 * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE *context);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget, Request)
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            ICLRDataTarget3 * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget2, AllocVirtual)
        HRESULT ( STDMETHODCALLTYPE *AllocVirtual )( 
            ICLRDataTarget3 * This,
            /* [in] */ CLRDATA_ADDRESS addr,
            /* [in] */ ULONG32 size,
            /* [in] */ ULONG32 typeFlags,
            /* [in] */ ULONG32 protectFlags,
            /* [out] */ CLRDATA_ADDRESS *virt);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget2, FreeVirtual)
        HRESULT ( STDMETHODCALLTYPE *FreeVirtual )( 
            ICLRDataTarget3 * This,
            /* [in] */ CLRDATA_ADDRESS addr,
            /* [in] */ ULONG32 size,
            /* [in] */ ULONG32 typeFlags);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget3, GetExceptionRecord)
        HRESULT ( STDMETHODCALLTYPE *GetExceptionRecord )( 
            ICLRDataTarget3 * This,
            /* [in] */ ULONG32 bufferSize,
            /* [out] */ ULONG32 *bufferUsed,
            /* [size_is][out] */ BYTE *buffer);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget3, GetExceptionContextRecord)
        HRESULT ( STDMETHODCALLTYPE *GetExceptionContextRecord )( 
            ICLRDataTarget3 * This,
            /* [in] */ ULONG32 bufferSize,
            /* [out] */ ULONG32 *bufferUsed,
            /* [size_is][out] */ BYTE *buffer);
        
        DECLSPEC_XFGVIRT(ICLRDataTarget3, GetExceptionThreadID)
        HRESULT ( STDMETHODCALLTYPE *GetExceptionThreadID )( 
            ICLRDataTarget3 * This,
            /* [out] */ ULONG32 *threadID);
        
        END_INTERFACE
    } ICLRDataTarget3Vtbl;

    interface ICLRDataTarget3
    {
        CONST_VTBL struct ICLRDataTarget3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICLRDataTarget3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICLRDataTarget3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICLRDataTarget3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICLRDataTarget3_GetMachineType(This,machineType)	\
    ( (This)->lpVtbl -> GetMachineType(This,machineType) ) 

#define ICLRDataTarget3_GetPointerSize(This,pointerSize)	\
    ( (This)->lpVtbl -> GetPointerSize(This,pointerSize) ) 

#define ICLRDataTarget3_GetImageBase(This,imagePath,baseAddress)	\
    ( (This)->lpVtbl -> GetImageBase(This,imagePath,baseAddress) ) 

#define ICLRDataTarget3_ReadVirtual(This,address,buffer,bytesRequested,bytesRead)	\
    ( (This)->lpVtbl -> ReadVirtual(This,address,buffer,bytesRequested,bytesRead) ) 

#define ICLRDataTarget3_WriteVirtual(This,address,buffer,bytesRequested,bytesWritten)	\
    ( (This)->lpVtbl -> WriteVirtual(This,address,buffer,bytesRequested,bytesWritten) ) 

#define ICLRDataTarget3_GetTLSValue(This,threadID,index,value)	\
    ( (This)->lpVtbl -> GetTLSValue(This,threadID,index,value) ) 

#define ICLRDataTarget3_SetTLSValue(This,threadID,index,value)	\
    ( (This)->lpVtbl -> SetTLSValue(This,threadID,index,value) ) 

#define ICLRDataTarget3_GetCurrentThreadID(This,threadID)	\
    ( (This)->lpVtbl -> GetCurrentThreadID(This,threadID) ) 

#define ICLRDataTarget3_GetThreadContext(This,threadID,contextFlags,contextSize,context)	\
    ( (This)->lpVtbl -> GetThreadContext(This,threadID,contextFlags,contextSize,context) ) 

#define ICLRDataTarget3_SetThreadContext(This,threadID,contextSize,context)	\
    ( (This)->lpVtbl -> SetThreadContext(This,threadID,contextSize,context) ) 

#define ICLRDataTarget3_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 


#define ICLRDataTarget3_AllocVirtual(This,addr,size,typeFlags,protectFlags,virt)	\
    ( (This)->lpVtbl -> AllocVirtual(This,addr,size,typeFlags,protectFlags,virt) ) 

#define ICLRDataTarget3_FreeVirtual(This,addr,size,typeFlags)	\
    ( (This)->lpVtbl -> FreeVirtual(This,addr,size,typeFlags) ) 


#define ICLRDataTarget3_GetExceptionRecord(This,bufferSize,bufferUsed,buffer)	\
    ( (This)->lpVtbl -> GetExceptionRecord(This,bufferSize,bufferUsed,buffer) ) 

#define ICLRDataTarget3_GetExceptionContextRecord(This,bufferSize,bufferUsed,buffer)	\
    ( (This)->lpVtbl -> GetExceptionContextRecord(This,bufferSize,bufferUsed,buffer) ) 

#define ICLRDataTarget3_GetExceptionThreadID(This,threadID)	\
    ( (This)->lpVtbl -> GetExceptionThreadID(This,threadID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLRDataTarget3_INTERFACE_DEFINED__ */


#ifndef __ICLRRuntimeLocator_INTERFACE_DEFINED__
#define __ICLRRuntimeLocator_INTERFACE_DEFINED__

/* interface ICLRRuntimeLocator */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_ICLRRuntimeLocator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b760bf44-9377-4597-8be7-58083bdc5146")
    ICLRRuntimeLocator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRuntimeBase( 
            /* [out] */ CLRDATA_ADDRESS *baseAddress) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICLRRuntimeLocatorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICLRRuntimeLocator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICLRRuntimeLocator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICLRRuntimeLocator * This);
        
        DECLSPEC_XFGVIRT(ICLRRuntimeLocator, GetRuntimeBase)
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeBase )( 
            ICLRRuntimeLocator * This,
            /* [out] */ CLRDATA_ADDRESS *baseAddress);
        
        END_INTERFACE
    } ICLRRuntimeLocatorVtbl;

    interface ICLRRuntimeLocator
    {
        CONST_VTBL struct ICLRRuntimeLocatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICLRRuntimeLocator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICLRRuntimeLocator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICLRRuntimeLocator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICLRRuntimeLocator_GetRuntimeBase(This,baseAddress)	\
    ( (This)->lpVtbl -> GetRuntimeBase(This,baseAddress) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLRRuntimeLocator_INTERFACE_DEFINED__ */


#ifndef __ICLRContractLocator_INTERFACE_DEFINED__
#define __ICLRContractLocator_INTERFACE_DEFINED__

/* interface ICLRContractLocator */
/* [unique][uuid][local][object] */


EXTERN_C const IID IID_ICLRContractLocator;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("17d5b8c6-34a9-407f-af4f-a930201d4e02")
    ICLRContractLocator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContractDescriptor(
            /* [out] */ CLRDATA_ADDRESS *contractAddress) = 0;

    };


#else 	/* C style interface */

    typedef struct ICLRContractLocatorVtbl
    {
        BEGIN_INTERFACE

        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICLRContractLocator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */
            _COM_Outptr_  void **ppvObject);

        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICLRContractLocator * This);

        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICLRContractLocator * This);

        DECLSPEC_XFGVIRT(ICLRContractLocator, GetContractDescriptor)
        HRESULT ( STDMETHODCALLTYPE *GetContractDescriptor )(
            ICLRContractLocator * This,
            /* [out] */ CLRDATA_ADDRESS *contractAddress);

        END_INTERFACE
    } ICLRRuntimeLocatorVtbl;

    interface ICLRContractLocator
    {
        CONST_VTBL struct ICLRRuntimeLocatorVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define ICLRContractLocator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define ICLRContractLocator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )

#define ICLRContractLocator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )


#define ICLRContractLocator_GetContractDescriptor(This,contractAddress)	\
    ( (This)->lpVtbl -> GetContractDescriptor(This,contractAddress) )

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLRRuntimeLocator_INTERFACE_DEFINED__ */


#ifndef __ICLRMetadataLocator_INTERFACE_DEFINED__
#define __ICLRMetadataLocator_INTERFACE_DEFINED__

/* interface ICLRMetadataLocator */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_ICLRMetadataLocator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("aa8fa804-bc05-4642-b2c5-c353ed22fc63")
    ICLRMetadataLocator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMetadata( 
            /* [in] */ LPCWSTR imagePath,
            /* [in] */ ULONG32 imageTimestamp,
            /* [in] */ ULONG32 imageSize,
            /* [in] */ GUID *mvid,
            /* [in] */ ULONG32 mdRva,
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufferSize,
            /* [length_is][size_is][out] */ BYTE *buffer,
            /* [out] */ ULONG32 *dataSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICLRMetadataLocatorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICLRMetadataLocator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICLRMetadataLocator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICLRMetadataLocator * This);
        
        DECLSPEC_XFGVIRT(ICLRMetadataLocator, GetMetadata)
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )( 
            ICLRMetadataLocator * This,
            /* [in] */ LPCWSTR imagePath,
            /* [in] */ ULONG32 imageTimestamp,
            /* [in] */ ULONG32 imageSize,
            /* [in] */ GUID *mvid,
            /* [in] */ ULONG32 mdRva,
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufferSize,
            /* [length_is][size_is][out] */ BYTE *buffer,
            /* [out] */ ULONG32 *dataSize);
        
        END_INTERFACE
    } ICLRMetadataLocatorVtbl;

    interface ICLRMetadataLocator
    {
        CONST_VTBL struct ICLRMetadataLocatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICLRMetadataLocator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICLRMetadataLocator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICLRMetadataLocator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICLRMetadataLocator_GetMetadata(This,imagePath,imageTimestamp,imageSize,mvid,mdRva,flags,bufferSize,buffer,dataSize)	\
    ( (This)->lpVtbl -> GetMetadata(This,imagePath,imageTimestamp,imageSize,mvid,mdRva,flags,bufferSize,buffer,dataSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLRMetadataLocator_INTERFACE_DEFINED__ */


#ifndef __ICLRDataEnumMemoryRegionsCallback_INTERFACE_DEFINED__
#define __ICLRDataEnumMemoryRegionsCallback_INTERFACE_DEFINED__

/* interface ICLRDataEnumMemoryRegionsCallback */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_ICLRDataEnumMemoryRegionsCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BCDD6908-BA2D-4ec5-96CF-DF4D5CDCB4A4")
    ICLRDataEnumMemoryRegionsCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumMemoryRegion( 
            /* [in] */ CLRDATA_ADDRESS address,
            /* [in] */ ULONG32 size) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICLRDataEnumMemoryRegionsCallbackVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICLRDataEnumMemoryRegionsCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICLRDataEnumMemoryRegionsCallback * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICLRDataEnumMemoryRegionsCallback * This);
        
        DECLSPEC_XFGVIRT(ICLRDataEnumMemoryRegionsCallback, EnumMemoryRegion)
        HRESULT ( STDMETHODCALLTYPE *EnumMemoryRegion )( 
            ICLRDataEnumMemoryRegionsCallback * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [in] */ ULONG32 size);
        
        END_INTERFACE
    } ICLRDataEnumMemoryRegionsCallbackVtbl;

    interface ICLRDataEnumMemoryRegionsCallback
    {
        CONST_VTBL struct ICLRDataEnumMemoryRegionsCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICLRDataEnumMemoryRegionsCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICLRDataEnumMemoryRegionsCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICLRDataEnumMemoryRegionsCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICLRDataEnumMemoryRegionsCallback_EnumMemoryRegion(This,address,size)	\
    ( (This)->lpVtbl -> EnumMemoryRegion(This,address,size) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLRDataEnumMemoryRegionsCallback_INTERFACE_DEFINED__ */


#ifndef __ICLRDataEnumMemoryRegionsCallback2_INTERFACE_DEFINED__
#define __ICLRDataEnumMemoryRegionsCallback2_INTERFACE_DEFINED__

/* interface ICLRDataEnumMemoryRegionsCallback2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_ICLRDataEnumMemoryRegionsCallback2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3721A26F-8B91-4D98-A388-DB17B356FADB")
    ICLRDataEnumMemoryRegionsCallback2 : public ICLRDataEnumMemoryRegionsCallback
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateMemoryRegion( 
            /* [in] */ CLRDATA_ADDRESS address,
            /* [in] */ ULONG32 bufferSize,
            /* [size_is][in] */ BYTE *buffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICLRDataEnumMemoryRegionsCallback2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICLRDataEnumMemoryRegionsCallback2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICLRDataEnumMemoryRegionsCallback2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICLRDataEnumMemoryRegionsCallback2 * This);
        
        DECLSPEC_XFGVIRT(ICLRDataEnumMemoryRegionsCallback, EnumMemoryRegion)
        HRESULT ( STDMETHODCALLTYPE *EnumMemoryRegion )( 
            ICLRDataEnumMemoryRegionsCallback2 * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [in] */ ULONG32 size);
        
        DECLSPEC_XFGVIRT(ICLRDataEnumMemoryRegionsCallback2, UpdateMemoryRegion)
        HRESULT ( STDMETHODCALLTYPE *UpdateMemoryRegion )( 
            ICLRDataEnumMemoryRegionsCallback2 * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [in] */ ULONG32 bufferSize,
            /* [size_is][in] */ BYTE *buffer);
        
        END_INTERFACE
    } ICLRDataEnumMemoryRegionsCallback2Vtbl;

    interface ICLRDataEnumMemoryRegionsCallback2
    {
        CONST_VTBL struct ICLRDataEnumMemoryRegionsCallback2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICLRDataEnumMemoryRegionsCallback2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICLRDataEnumMemoryRegionsCallback2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICLRDataEnumMemoryRegionsCallback2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICLRDataEnumMemoryRegionsCallback2_EnumMemoryRegion(This,address,size)	\
    ( (This)->lpVtbl -> EnumMemoryRegion(This,address,size) ) 


#define ICLRDataEnumMemoryRegionsCallback2_UpdateMemoryRegion(This,address,bufferSize,buffer)	\
    ( (This)->lpVtbl -> UpdateMemoryRegion(This,address,bufferSize,buffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLRDataEnumMemoryRegionsCallback2_INTERFACE_DEFINED__ */


#ifndef __ICLRDataLoggingCallback_INTERFACE_DEFINED__
#define __ICLRDataLoggingCallback_INTERFACE_DEFINED__

/* interface ICLRDataLoggingCallback */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_ICLRDataLoggingCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F315248D-8B79-49DB-B184-37426559F703")
    ICLRDataLoggingCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LogMessage( 
            /* [in] */ LPCSTR message) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICLRDataLoggingCallbackVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICLRDataLoggingCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICLRDataLoggingCallback * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICLRDataLoggingCallback * This);
        
        DECLSPEC_XFGVIRT(ICLRDataLoggingCallback, LogMessage)
        HRESULT ( STDMETHODCALLTYPE *LogMessage )( 
            ICLRDataLoggingCallback * This,
            /* [in] */ LPCSTR message);
        
        END_INTERFACE
    } ICLRDataLoggingCallbackVtbl;

    interface ICLRDataLoggingCallback
    {
        CONST_VTBL struct ICLRDataLoggingCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICLRDataLoggingCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICLRDataLoggingCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICLRDataLoggingCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICLRDataLoggingCallback_LogMessage(This,message)	\
    ( (This)->lpVtbl -> LogMessage(This,message) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLRDataLoggingCallback_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_clrdata_0000_0008 */
/* [local] */ 

typedef 
enum CLRDataEnumMemoryFlags
    {
        CLRDATA_ENUM_MEM_DEFAULT	= 0,
        CLRDATA_ENUM_MEM_MINI	= CLRDATA_ENUM_MEM_DEFAULT,
        CLRDATA_ENUM_MEM_HEAP	= 0x1,
        CLRDATA_ENUM_MEM_TRIAGE	= 0x2,
        CLRDATA_ENUM_MEM_HEAP2	= 0x3
    } 	CLRDataEnumMemoryFlags;



extern RPC_IF_HANDLE __MIDL_itf_clrdata_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_clrdata_0000_0008_v0_0_s_ifspec;

#ifndef __ICLRDataEnumMemoryRegions_INTERFACE_DEFINED__
#define __ICLRDataEnumMemoryRegions_INTERFACE_DEFINED__

/* interface ICLRDataEnumMemoryRegions */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_ICLRDataEnumMemoryRegions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("471c35b4-7c2f-4ef0-a945-00f8c38056f1")
    ICLRDataEnumMemoryRegions : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumMemoryRegions( 
            /* [in] */ ICLRDataEnumMemoryRegionsCallback *callback,
            /* [in] */ ULONG32 miniDumpFlags,
            /* [in] */ CLRDataEnumMemoryFlags clrFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICLRDataEnumMemoryRegionsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICLRDataEnumMemoryRegions * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICLRDataEnumMemoryRegions * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICLRDataEnumMemoryRegions * This);
        
        DECLSPEC_XFGVIRT(ICLRDataEnumMemoryRegions, EnumMemoryRegions)
        HRESULT ( STDMETHODCALLTYPE *EnumMemoryRegions )( 
            ICLRDataEnumMemoryRegions * This,
            /* [in] */ ICLRDataEnumMemoryRegionsCallback *callback,
            /* [in] */ ULONG32 miniDumpFlags,
            /* [in] */ CLRDataEnumMemoryFlags clrFlags);
        
        END_INTERFACE
    } ICLRDataEnumMemoryRegionsVtbl;

    interface ICLRDataEnumMemoryRegions
    {
        CONST_VTBL struct ICLRDataEnumMemoryRegionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICLRDataEnumMemoryRegions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICLRDataEnumMemoryRegions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICLRDataEnumMemoryRegions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICLRDataEnumMemoryRegions_EnumMemoryRegions(This,callback,miniDumpFlags,clrFlags)	\
    ( (This)->lpVtbl -> EnumMemoryRegions(This,callback,miniDumpFlags,clrFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLRDataEnumMemoryRegions_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


