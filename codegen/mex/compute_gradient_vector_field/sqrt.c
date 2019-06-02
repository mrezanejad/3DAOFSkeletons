/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "compute_gradient_vector_field.h"
#include "sqrt.h"
#include "eml_int_forloop_overflow_check.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo h_emlrtRSI = { 12,  /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 15,  /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 31,  /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 21,  /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, emxArray_real32_T *x)
{
  boolean_T p;
  int32_T nx;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  p = false;
  nx = x->size[0] * x->size[1] * x->size[2];
  for (k = 0; k < nx; k++) {
    if (p || (x->data[k] < 0.0F)) {
      p = true;
    } else {
      p = false;
    }
  }

  if (p) {
    st.site = &h_emlrtRSI;
    b_error(&st);
  }

  st.site = &i_emlrtRSI;
  nx = x->size[0] * x->size[1] * x->size[2];
  b_st.site = &j_emlrtRSI;
  if ((1 <= nx) && (nx > 2147483646)) {
    c_st.site = &k_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    x->data[k] = muSingleScalarSqrt(x->data[k]);
  }
}

/* End of code generation (sqrt.c) */
