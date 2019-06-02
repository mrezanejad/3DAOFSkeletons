/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_compute_aof_mex.c
 *
 * Code generation for function '_coder_compute_aof_mex'
 *
 */

/* Include files */
#include "compute_aof.h"
#include "_coder_compute_aof_mex.h"
#include "compute_aof_terminate.h"
#include "_coder_compute_aof_api.h"
#include "compute_aof_initialize.h"
#include "compute_aof_data.h"

/* Function Declarations */
static void compute_aof_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[4]);

/* Function Definitions */
static void compute_aof_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[4])
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        11, "compute_aof");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "compute_aof");
  }

  /* Call the function. */
  compute_aof_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(compute_aof_atexit);

  /* Module initialization. */
  compute_aof_initialize();

  /* Dispatch the entry-point. */
  compute_aof_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  compute_aof_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_compute_aof_mex.c) */
