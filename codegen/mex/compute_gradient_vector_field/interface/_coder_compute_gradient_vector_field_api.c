/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_compute_gradient_vector_field_api.c
 *
 * Code generation for function '_coder_compute_gradient_vector_field_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "compute_gradient_vector_field.h"
#include "_coder_compute_gradient_vector_field_api.h"
#include "compute_gradient_vector_field_emxutil.h"
#include "compute_gradient_vector_field_data.h"

/* Variable Definitions */
static emlrtRTEInfo p_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_compute_gradient_vector_field_api",/* fName */
  ""                                   /* pName */
};

static const int32_T iv0[3] = { 0, 0, 0 };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real32_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static const mxArray *c_emlrt_marshallOut(const emxArray_uint32_T *u);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *binaryImage,
  const char_T *identifier, emxArray_real_T *y);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real32_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateNumericArray(3, iv0, mxSINGLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m1, &u->data[0]);
  emlrtSetDimensions((mxArray *)m1, u->size, 3);
  emlrtAssign(&y, m1);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { -1, -1, -1 };

  const boolean_T bv0[3] = { true, true, true };

  int32_T iv2[3];
  int32_T i6;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv0[0],
    iv2);
  ret->allocatedSize = iv2[0] * iv2[1] * iv2[2];
  i6 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv2[0];
  ret->size[1] = iv2[1];
  ret->size[2] = iv2[2];
  emxEnsureCapacity_real_T(sp, ret, i6, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static const mxArray *c_emlrt_marshallOut(const emxArray_uint32_T *u)
{
  const mxArray *y;
  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateNumericArray(3, iv0, mxUINT32_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m2, &u->data[0]);
  emlrtSetDimensions((mxArray *)m2, u->size, 3);
  emlrtAssign(&y, m2);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *binaryImage,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(binaryImage), &thisId, y);
  emlrtDestroyArray(&binaryImage);
}

void compute_gradient_vector_field_api(const mxArray * const prhs[1], int32_T
  nlhs, const mxArray *plhs[2])
{
  emxArray_real_T *binaryImage;
  emxArray_real32_T *D;
  emxArray_uint32_T *IDX;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &binaryImage, 3, &p_emlrtRTEI, true);
  emxInit_real32_T(&st, &D, 3, &p_emlrtRTEI, true);
  emxInit_uint32_T(&st, &IDX, 3, &p_emlrtRTEI, true);

  /* Marshall function inputs */
  binaryImage->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "binaryImage", binaryImage);

  /* Invoke the target function */
  compute_gradient_vector_field(&st, binaryImage, D, IDX);

  /* Marshall function outputs */
  D->canFreeData = false;
  plhs[0] = b_emlrt_marshallOut(D);
  emxFree_real32_T(&D);
  emxFree_real_T(&binaryImage);
  if (nlhs > 1) {
    IDX->canFreeData = false;
    plhs[1] = c_emlrt_marshallOut(IDX);
  }

  emxFree_uint32_T(&IDX);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_compute_gradient_vector_field_api.c) */
