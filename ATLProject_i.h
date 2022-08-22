

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 08:44:07 2038
 */
/* Compiler settings for ATLProject.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
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

#ifndef __ATLProject_i_h__
#define __ATLProject_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICircle_FWD_DEFINED__
#define __ICircle_FWD_DEFINED__
typedef interface ICircle ICircle;

#endif 	/* __ICircle_FWD_DEFINED__ */


#ifndef __Circle_FWD_DEFINED__
#define __Circle_FWD_DEFINED__

#ifdef __cplusplus
typedef class Circle Circle;
#else
typedef struct Circle Circle;
#endif /* __cplusplus */

#endif 	/* __Circle_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ICircle_INTERFACE_DEFINED__
#define __ICircle_INTERFACE_DEFINED__

/* interface ICircle */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICircle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a08e76d7-424c-49ff-ab1e-51e8e35d6680")
    ICircle : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Radius( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Radius( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetArea( 
            DOUBLE *area) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICircleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICircle * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICircle * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICircle * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICircle * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICircle * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICircle * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICircle * This,
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
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            ICircle * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Radius )( 
            ICircle * This,
            /* [in] */ DOUBLE newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetArea )( 
            ICircle * This,
            DOUBLE *area);
        
        END_INTERFACE
    } ICircleVtbl;

    interface ICircle
    {
        CONST_VTBL struct ICircleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICircle_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICircle_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICircle_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICircle_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICircle_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICircle_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICircle_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICircle_get_Radius(This,pVal)	\
    ( (This)->lpVtbl -> get_Radius(This,pVal) ) 

#define ICircle_put_Radius(This,newVal)	\
    ( (This)->lpVtbl -> put_Radius(This,newVal) ) 

#define ICircle_GetArea(This,area)	\
    ( (This)->lpVtbl -> GetArea(This,area) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICircle_INTERFACE_DEFINED__ */



#ifndef __ATLProjectLib_LIBRARY_DEFINED__
#define __ATLProjectLib_LIBRARY_DEFINED__

/* library ATLProjectLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ATLProjectLib;

EXTERN_C const CLSID CLSID_Circle;

#ifdef __cplusplus

class DECLSPEC_UUID("04544e22-5450-4d9d-981b-1142b302d05b")
Circle;
#endif
#endif /* __ATLProjectLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


