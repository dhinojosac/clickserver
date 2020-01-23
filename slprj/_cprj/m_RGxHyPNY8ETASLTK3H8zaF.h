#ifndef __RGxHyPNY8ETASLTK3H8zaF_h__
#define __RGxHyPNY8ETASLTK3H8zaF_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef typedef_raspi_internal_TCPSend
#define typedef_raspi_internal_TCPSend

typedef struct {
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  uint8_T isLittleEnd_;
} raspi_internal_TCPSend;

#endif                                 /*typedef_raspi_internal_TCPSend*/

#ifndef typedef_InstanceStruct_RGxHyPNY8ETASLTK3H8zaF
#define typedef_InstanceStruct_RGxHyPNY8ETASLTK3H8zaF

typedef struct {
  SimStruct *S;
  raspi_internal_TCPSend sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  real_T *u0;
  covrtInstance *covInst_CONTAINER_BLOCK_INDEX;
} InstanceStruct_RGxHyPNY8ETASLTK3H8zaF;

#endif                                 /*typedef_InstanceStruct_RGxHyPNY8ETASLTK3H8zaF*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_RGxHyPNY8ETASLTK3H8zaF(SimStruct *S, int_T method,
  void* data);

#endif
