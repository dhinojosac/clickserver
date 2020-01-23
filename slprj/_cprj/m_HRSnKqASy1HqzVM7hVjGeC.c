/* Include files */

#include "modelInterface.h"
#include "m_HRSnKqASy1HqzVM7hVjGeC.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 17,    /* lineNo */
  "TCPReceive",                        /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2019b\\toolbox\\realtime\\targets\\raspi\\+raspi\\+internal\\TCPReceive.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "TCPReceive",                        /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2019b\\toolbox\\target\\supportpackages\\shared_linuxservices\\+sharedlinux\\TCPReceive.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\Propagates.p"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 1,   /* lineNo */
  "CustomIcon",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\+internal\\CustomIcon.p"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 43,  /* lineNo */
  "ExternalDependency",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\ExternalDependency.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 1,   /* lineNo */
  "SampleTime",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\SampleTime.p"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 14,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 34,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 36,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 41,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance, const emlrtStack *sp);
static raspi_internal_TCPReceive *TCPReceive_TCPReceive
  (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance,
   raspi_internal_TCPReceive *obj);
static void SystemCore_setup(const emlrtStack *sp, raspi_internal_TCPReceive
  *obj);
static void SystemCore_checkTunablePropChange(const emlrtStack *sp,
  raspi_internal_TCPReceive *obj);
static void mw__internal__call__reset(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance, const emlrtStack *sp, uint8_T *c_y0, uint8_T *c_y1);
static const mxArray *emlrt_marshallOut(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance);
static void emlrt_marshallIn(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance, const emlrtStack *sp, const mxArray *u);
static raspi_internal_TCPReceive b_emlrt_marshallIn(const emlrtStack *sp, const
  mxArray *b_sysobj, const char_T *identifier);
static raspi_internal_TCPReceive c_emlrt_marshallIn(const emlrtStack *sp, const
  mxArray *u, const emlrtMsgIdentifier *parentId);
static int32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static int32_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, moduleInstance->b_y0,
    moduleInstance->b_y1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance)
{
  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2019b\\toolbox\\realtime\\targets\\raspi\\+raspi\\+internal\\TCPReceive.m",
                  0U, 2U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U,
               "TCPReceive_updateBuildInfo", 1327, -1, 1501);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U,
               "TCPReceive_TCPReceive", 417, -1, 786);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U,
                      1434, -1, 1472);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 606,
                      -1, 773);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 1384, 1417,
              -1, 1489);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U);
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance)
{
  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);
}

static void mw__internal__call__setup(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &j_emlrtRSI;
    TCPReceive_TCPReceive(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &k_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj);
}

static raspi_internal_TCPReceive *TCPReceive_TCPReceive
  (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance,
   raspi_internal_TCPReceive *obj)
{
  raspi_internal_TCPReceive *b_obj;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  b_obj = obj;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  d_st.site = &d_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  b_obj->isInitialized = 0;
  b_obj->TunablePropsChanged = false;
  d_st.site = &e_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &f_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &g_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  return b_obj;
}

static void SystemCore_setup(const emlrtStack *sp, raspi_internal_TCPReceive
  *obj)
{
  emlrtStack st;
  char_T u[51];
  int32_T i;
  const mxArray *y;
  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 51 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 51 };

  char_T c_u[5];
  const mxArray *c_y;
  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv2[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(sp, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &e_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &e_emlrtRSI;
  SystemCore_checkTunablePropChange(&st, obj);
  obj->TunablePropsChanged = false;
}

static void SystemCore_checkTunablePropChange(const emlrtStack *sp,
  raspi_internal_TCPReceive *obj)
{
  emlrtStack st;
  char_T u[44];
  int32_T i;
  const mxArray *y;
  static char_T b_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 44 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 44 };

  st.prev = sp;
  st.tls = sp->tls;
  if (obj->TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 44, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 44; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 44, m, &u[0]);
    emlrtAssign(&b_y, m);
    st.site = &e_emlrtRSI;
    error(&st, y, getString(&st, b_message(&st, b_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }
}

static void mw__internal__call__reset(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  emlrtStack b_st;
  raspi_internal_TCPReceive *obj;
  char_T u[45];
  boolean_T tunablePropChangedBeforeResetImpl;
  int32_T i;
  char_T b_u[44];
  const mxArray *y;
  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 45 };

  static char_T d_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv1[2] = { 1, 44 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 44 };

  char_T e_u[5];
  const mxArray *c_y;
  static char_T f_u[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv4[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &j_emlrtRSI;
    TCPReceive_TCPReceive(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &l_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      e_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&st, 5, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = obj->TunablePropsChanged;
  if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
      obj->TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      b_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 44, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 44; i++) {
      b_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&st, 44, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance, const emlrtStack *sp, uint8_T *c_y0, uint8_T *c_y1)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  raspi_internal_TCPReceive *obj;
  char_T u[45];
  int32_T i;
  const mxArray *y;
  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 45 };

  char_T c_u[4];
  const mxArray *c_y;
  static char_T d_u[4] = { 's', 't', 'e', 'p' };

  static const int32_T iv2[2] = { 1, 4 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &j_emlrtRSI;
    TCPReceive_TCPReceive(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &m_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &e_emlrtRSI;
    c_st.site = &e_emlrtRSI;
    SystemCore_setup(&c_st, obj);
  }

  b_st.site = &e_emlrtRSI;
  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }

  b_st.site = &e_emlrtRSI;
  SystemCore_checkTunablePropChange(&b_st, obj);
  *c_y0 = 0U;
  *c_y1 = 0U;
}

static const mxArray *emlrt_marshallOut(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance)
{
  const mxArray *y;
  const mxArray *b_y;
  static const char * sv[2] = { "isInitialized", "TunablePropsChanged" };

  int32_T u;
  const mxArray *c_y;
  const mxArray *m;
  boolean_T b_u;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 2, sv));
  u = moduleInstance->sysobj.isInitialized;
  c_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "isInitialized", c_y, 0);
  b_u = moduleInstance->sysobj.TunablePropsChanged;
  c_y = NULL;
  m = emlrtCreateLogicalScalar(b_u);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "TunablePropsChanged", c_y, 1);
  emlrtSetCell(y, 0, b_y);
  b_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&b_y, m);
  emlrtSetCell(y, 1, b_y);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance)
{
  const mxArray *st;
  st = NULL;
  emlrtAssign(&st, emlrt_marshallOut(moduleInstance));
  return st;
}

static void emlrt_marshallIn(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance, const emlrtStack *sp, const mxArray *u)
{
  moduleInstance->sysobj = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp,
    "sysobj", u, 0)), "sysobj");
  moduleInstance->sysobj_not_empty = f_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell(sp, "sysobj_not_empty", u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
}

static raspi_internal_TCPReceive b_emlrt_marshallIn(const emlrtStack *sp, const
  mxArray *b_sysobj, const char_T *identifier)
{
  raspi_internal_TCPReceive y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static raspi_internal_TCPReceive c_emlrt_marshallIn(const emlrtStack *sp, const
  mxArray *u, const emlrtMsgIdentifier *parentId)
{
  raspi_internal_TCPReceive y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[2] = { "isInitialized", "TunablePropsChanged" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 2, fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y.TunablePropsChanged = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 1, "TunablePropsChanged")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrt_marshallIn(moduleInstance, &b_st, emlrtAlias(st));
  emlrtDestroyArray(&st);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "getString", true,
    location);
}

static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "message", true, location);
}

static int32_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void init_simulink_io_address(InstanceStruct_HRSnKqASy1HqzVM7hVjGeC
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->b_y0 = (uint8_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    0);
  moduleInstance->b_y1 = (uint8_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    1);
  moduleInstance->covInst_CONTAINER_BLOCK_INDEX = (covrtInstance *)
    cgxertGetCovrtInstance(moduleInstance->S, -1);
}

/* CGXE Glue Code */
static void mdlOutputs_HRSnKqASy1HqzVM7hVjGeC(SimStruct *S, int_T tid)
{
  InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance =
    (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_HRSnKqASy1HqzVM7hVjGeC(SimStruct *S)
{
  InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance =
    (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_HRSnKqASy1HqzVM7hVjGeC(SimStruct *S, int_T tid)
{
  InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance =
    (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_HRSnKqASy1HqzVM7hVjGeC(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance =
    (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_HRSnKqASy1HqzVM7hVjGeC(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance =
    (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_HRSnKqASy1HqzVM7hVjGeC(SimStruct *S)
{
  InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance =
    (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_HRSnKqASy1HqzVM7hVjGeC(SimStruct *S)
{
  InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance =
    (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_HRSnKqASy1HqzVM7hVjGeC(SimStruct *S)
{
  InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance =
    (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_HRSnKqASy1HqzVM7hVjGeC(SimStruct *S)
{
  InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *moduleInstance =
    (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC *)calloc(1, sizeof
    (InstanceStruct_HRSnKqASy1HqzVM7hVjGeC));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_HRSnKqASy1HqzVM7hVjGeC);
  ssSetmdlInitializeConditions(S, mdlInitialize_HRSnKqASy1HqzVM7hVjGeC);
  ssSetmdlUpdate(S, mdlUpdate_HRSnKqASy1HqzVM7hVjGeC);
  ssSetmdlTerminate(S, mdlTerminate_HRSnKqASy1HqzVM7hVjGeC);
  ssSetmdlEnable(S, mdlEnable_HRSnKqASy1HqzVM7hVjGeC);
  ssSetmdlDisable(S, mdlDisable_HRSnKqASy1HqzVM7hVjGeC);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_HRSnKqASy1HqzVM7hVjGeC(SimStruct *S)
{
}

void method_dispatcher_HRSnKqASy1HqzVM7hVjGeC(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_HRSnKqASy1HqzVM7hVjGeC(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_HRSnKqASy1HqzVM7hVjGeC(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_HRSnKqASy1HqzVM7hVjGeC(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_HRSnKqASy1HqzVM7hVjGeC(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: HRSnKqASy1HqzVM7hVjGeC.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_HRSnKqASy1HqzVM7hVjGeC_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateCellMatrix(1,2);
  elem_9 = mxCreateString("sharedlinux.TCPReceive");
  mxSetCell(elem_8,0,elem_9);
  elem_10 = mxCreateString("raspi.internal.TCPReceive");
  mxSetCell(elem_8,1,elem_10);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_11 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_11);
  return mxBIArgs;
}

mxArray *cgxe_HRSnKqASy1HqzVM7hVjGeC_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString("sharedlinux.TCPReceive");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
