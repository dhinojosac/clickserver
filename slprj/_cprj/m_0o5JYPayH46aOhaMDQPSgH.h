#ifndef __0o5JYPayH46aOhaMDQPSgH_h__
#define __0o5JYPayH46aOhaMDQPSgH_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef typedef_raspi_internal_TCPReceive
#define typedef_raspi_internal_TCPReceive

typedef struct {
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
} raspi_internal_TCPReceive;

#endif                                 /*typedef_raspi_internal_TCPReceive*/

#ifndef typedef_InstanceStruct_0o5JYPayH46aOhaMDQPSgH
#define typedef_InstanceStruct_0o5JYPayH46aOhaMDQPSgH

typedef struct {
  SimStruct *S;
  raspi_internal_TCPReceive sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  uint8_T *b_y0;
  uint8_T *b_y1;
  covrtInstance *covInst_CONTAINER_BLOCK_INDEX;
} InstanceStruct_0o5JYPayH46aOhaMDQPSgH;

#endif                                 /*typedef_InstanceStruct_0o5JYPayH46aOhaMDQPSgH*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_0o5JYPayH46aOhaMDQPSgH(SimStruct *S, int_T method,
  void* data);

#endif
