/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * compute_aof_initialize.c
 *
 * Code generation for function 'compute_aof_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "compute_aof.h"
#include "compute_aof_initialize.h"
#include "_coder_compute_aof_mex.h"
#include "compute_aof_data.h"

/* Function Definitions */
void compute_aof_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (compute_aof_initialize.c) */
