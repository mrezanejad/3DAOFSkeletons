/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_compute_aof_api.c
 *
 * Code generation for function '_coder_compute_aof_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "compute_aof.h"
#include "_coder_compute_aof_api.h"
#include "compute_aof_emxutil.h"
#include "compute_aof_data.h"

/* Variable Definitions */
static emlrtRTEInfo h_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_compute_aof_api",            /* fName */
  ""                                   /* pName */
};

static const int32_T iv0[3] = { -1, -1, -1 };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real32_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *IDX, const
  char_T *identifier, emxArray_uint32_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_uint32_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *sphere_points, const char_T *identifier, emxArray_real_T *y);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *D, const
  char_T *identifier, emxArray_real32_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *epsilon,
  const char_T *identifier);
static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real32_T *ret);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_uint32_T *ret);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real32_T *y)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *IDX, const
  char_T *identifier, emxArray_uint32_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(IDX), &thisId, y);
  emlrtDestroyArray(&IDX);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_uint32_T *y)
{
  j_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *sphere_points, const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(sphere_points), &thisId, y);
  emlrtDestroyArray(&sphere_points);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *D, const
  char_T *identifier, emxArray_real32_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(D), &thisId, y);
  emlrtDestroyArray(&D);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv2[3] = { 0, 0, 0 };

  y = NULL;
  m0 = emlrtCreateNumericArray(3, iv2, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, &u->data[0]);
  emlrtSetDimensions((mxArray *)m0, u->size, 3);
  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *epsilon,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(epsilon), &thisId);
  emlrtDestroyArray(&epsilon);
  return y;
}

static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real32_T *ret)
{
  const boolean_T bv0[3] = { true, true, true };

  int32_T iv3[3];
  int32_T i1;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "single", false, 3U, iv0, &bv0[0],
    iv3);
  ret->allocatedSize = iv3[0] * iv3[1] * iv3[2];
  i1 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv3[0];
  ret->size[1] = iv3[1];
  ret->size[2] = iv3[2];
  emxEnsureCapacity_real32_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret->data = (real32_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_uint32_T *ret)
{
  const boolean_T bv1[3] = { true, true, true };

  int32_T iv4[3];
  int32_T i2;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "uint32", false, 3U, iv0, &bv1[0],
    iv4);
  ret->allocatedSize = iv4[0] * iv4[1] * iv4[2];
  i2 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv4[0];
  ret->size[1] = iv4[1];
  ret->size[2] = iv4[2];
  emxEnsureCapacity_uint32_T(sp, ret, i2, (emlrtRTEInfo *)NULL);
  ret->data = (uint32_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  const boolean_T bv2[2] = { true, true };

  int32_T iv5[2];
  int32_T i3;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv2[0],
    iv5);
  ret->allocatedSize = iv5[0] * iv5[1];
  i3 = ret->size[0] * ret->size[1];
  ret->size[0] = iv5[0];
  ret->size[1] = iv5[1];
  emxEnsureCapacity_real_T(sp, ret, i3, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void compute_aof_api(const mxArray * const prhs[4], int32_T nlhs, const mxArray *
                     plhs[1])
{
  emxArray_real32_T *D;
  emxArray_uint32_T *IDX;
  emxArray_real_T *sphere_points;
  emxArray_real_T *fluxImage;
  const mxArray *prhs_copy_idx_2;
  real_T epsilon;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real32_T(&st, &D, 3, &h_emlrtRTEI, true);
  emxInit_uint32_T(&st, &IDX, 3, &h_emlrtRTEI, true);
  emxInit_real_T(&st, &sphere_points, 2, &h_emlrtRTEI, true);
  emxInit_real_T(&st, &fluxImage, 3, &h_emlrtRTEI, true);
  prhs_copy_idx_2 = emlrtProtectR2012b(prhs[2], 2, false, -1);

  /* Marshall function inputs */
  D->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "D", D);
  IDX->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "IDX", IDX);
  sphere_points->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_2), "sphere_points",
                     sphere_points);
  epsilon = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "epsilon");

  /* Invoke the target function */
  compute_aof(&st, D, IDX, sphere_points, epsilon, fluxImage);

  /* Marshall function outputs */
  fluxImage->canFreeData = false;
  plhs[0] = emlrt_marshallOut(fluxImage);
  emxFree_real_T(&fluxImage);
  emxFree_real_T(&sphere_points);
  emxFree_uint32_T(&IDX);
  emxFree_real32_T(&D);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_compute_aof_api.c) */
