/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_compute_gradient_vector_field_mex.c
 *
 * Code generation for function '_coder_compute_gradient_vector_field_mex'
 *
 */

/* Include files */
#include "compute_gradient_vector_field.h"
#include "_coder_compute_gradient_vector_field_mex.h"
#include "compute_gradient_vector_field_terminate.h"
#include "_coder_compute_gradient_vector_field_api.h"
#include "compute_gradient_vector_field_initialize.h"
#include "compute_gradient_vector_field_data.h"

/* Function Declarations */
static void c_compute_gradient_vector_field(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */
static void c_compute_gradient_vector_field(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[1])
{
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        29, "compute_gradient_vector_field");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 29,
                        "compute_gradient_vector_field");
  }

  /* Call the function. */
  compute_gradient_vector_field_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(compute_gradient_vector_field_atexit);

  /* Module initialization. */
  compute_gradient_vector_field_initialize();

  /* Dispatch the entry-point. */
  c_compute_gradient_vector_field(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  compute_gradient_vector_field_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_compute_gradient_vector_field_mex.c) */
