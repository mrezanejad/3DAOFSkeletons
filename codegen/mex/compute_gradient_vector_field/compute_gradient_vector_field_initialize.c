/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * compute_gradient_vector_field_initialize.c
 *
 * Code generation for function 'compute_gradient_vector_field_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "compute_gradient_vector_field.h"
#include "compute_gradient_vector_field_initialize.h"
#include "_coder_compute_gradient_vector_field_mex.h"
#include "compute_gradient_vector_field_data.h"

/* Function Definitions */
void compute_gradient_vector_field_initialize(void)
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
  emlrtLicenseCheckR2012b(&st, "Image_Toolbox", 2);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (compute_gradient_vector_field_initialize.c) */
