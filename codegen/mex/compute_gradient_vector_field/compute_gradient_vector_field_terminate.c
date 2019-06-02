/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * compute_gradient_vector_field_terminate.c
 *
 * Code generation for function 'compute_gradient_vector_field_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "compute_gradient_vector_field.h"
#include "compute_gradient_vector_field_terminate.h"
#include "_coder_compute_gradient_vector_field_mex.h"
#include "compute_gradient_vector_field_data.h"

/* Function Definitions */
void compute_gradient_vector_field_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void compute_gradient_vector_field_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (compute_gradient_vector_field_terminate.c) */
