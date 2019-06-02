/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * compute_gradient_vector_field.c
 *
 * Code generation for function 'compute_gradient_vector_field'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "compute_gradient_vector_field.h"
#include "compute_gradient_vector_field_emxutil.h"
#include "sqrt.h"
#include "error.h"
#include "compute_gradient_vector_field_data.h"
#include "libmwbwdistEDTFT_tbb.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 54,  /* lineNo */
  1,                                   /* colNo */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pName */
};

static emlrtRSInfo emlrtRSI = { 6,     /* lineNo */
  "compute_gradient_vector_field",     /* fcnName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 12,  /* lineNo */
  "compute_gradient_vector_field",     /* fcnName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 13,  /* lineNo */
  "compute_gradient_vector_field",     /* fcnName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 20,  /* lineNo */
  "compute_gradient_vector_field",     /* fcnName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 15,  /* lineNo */
  "getOuterBoundary",                  /* fcnName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\getOuterBoundary.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 74,  /* lineNo */
  "bwdist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\bwdist.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 12,  /* lineNo */
  "toLogicalCheck",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 16,  /* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRTEInfo c_emlrtRTEI = { 5, /* lineNo */
  1,                                   /* colNo */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 6, /* lineNo */
  1,                                   /* colNo */
  "getOuterBoundary",                  /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\getOuterBoundary.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 6, /* lineNo */
  1,                                   /* colNo */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 24,/* lineNo */
  10,                                  /* colNo */
  "getOuterBoundary",                  /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\getOuterBoundary.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 14,/* lineNo */
  1,                                   /* colNo */
  "bwdist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\bwdist.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 12,/* lineNo */
  1,                                   /* colNo */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 13,/* lineNo */
  1,                                   /* colNo */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 1, /* lineNo */
  20,                                  /* colNo */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 18,/* lineNo */
  1,                                   /* colNo */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 23,/* lineNo */
  1,                                   /* colNo */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 1, /* lineNo */
  18,                                  /* colNo */
  "getOuterBoundary",                  /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\getOuterBoundary.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 26,/* lineNo */
  1,                                   /* colNo */
  "bwdist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\bwdist.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 44,/* lineNo */
  21,                                  /* colNo */
  "bwdist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\bwdist.m"/* pName */
};

static emlrtECInfo emlrtECI = { 3,     /* nDims */
  18,                                  /* lineNo */
  7,                                   /* colNo */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { 3,   /* nDims */
  23,                                  /* lineNo */
  5,                                   /* colNo */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  24,                                  /* colNo */
  "result",                            /* aName */
  "getOuterBoundary",                  /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\getOuterBoundary.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  17,                                  /* colNo */
  "result",                            /* aName */
  "getOuterBoundary",                  /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\getOuterBoundary.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  19,                                  /* colNo */
  "result",                            /* aName */
  "getOuterBoundary",                  /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\getOuterBoundary.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo q_emlrtRTEI = { 41,/* lineNo */
  19,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 9,     /* lineNo */
  16,                                  /* colNo */
  "getOuterBoundary",                  /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\getOuterBoundary.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 6,   /* lineNo */
  1,                                   /* colNo */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  3,                                   /* lineNo */
  4,                                   /* colNo */
  "binaryImage",                       /* aName */
  "is_outer_border_point",             /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\is_outer_border_point.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  5,                                   /* colNo */
  "newBinaryImage",                    /* aName */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  5,                                   /* colNo */
  "outerBoundary",                     /* aName */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  17,                                  /* colNo */
  "result2",                           /* aName */
  "getOuterBoundary",                  /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\getOuterBoundary.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  12,                                  /* colNo */
  "binaryImage",                       /* aName */
  "is_outer_border_point",             /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\is_outer_border_point.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  12,                                  /* colNo */
  "binaryImage",                       /* aName */
  "is_outer_border_point",             /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\is_outer_border_point.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  1,                                   /* colNo */
  "IDX1",                              /* aName */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  1,                                   /* colNo */
  "IDX2",                              /* aName */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  87,                                  /* colNo */
  "outerBoundary",                     /* aName */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  106,                                 /* colNo */
  "outerBoundary",                     /* aName */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  125,                                 /* colNo */
  "outerBoundary",                     /* aName */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  5,                                   /* colNo */
  "IDX",                               /* aName */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  5,                                   /* colNo */
  "outerBoundary",                     /* aName */
  "compute_gradient_vector_field",     /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_gradient_vector_field.m",/* pName */
  0                                    /* checkKind */
};

/* Function Declarations */
static const mxArray *emlrt_marshallOut(const real_T u[3]);

/* Function Definitions */
static const mxArray *emlrt_marshallOut(const real_T u[3])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv1[2] = { 1, 3 };

  real_T *pData;
  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m0);
  pData[0] = u[0];
  pData[1] = u[1];
  pData[2] = u[2];
  emlrtAssign(&y, m0);
  return y;
}

void compute_gradient_vector_field(const emlrtStack *sp, const emxArray_real_T
  *binaryImage, emxArray_real32_T *D, emxArray_uint32_T *IDX)
{
  emxArray_real_T *newBinaryImage;
  int32_T i0;
  int32_T loop_ub;
  uint32_T counter;
  uint32_T unnamed_idx_1;
  uint32_T unnamed_idx_2;
  emxArray_int8_T *result2;
  emxArray_int32_T *outerBoundary;
  real_T nOfBackgroundPoints;
  int32_T i1;
  int32_T i;
  int32_T i2;
  emxArray_int32_T *b_outerBoundary;
  int32_T k;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T varargin_2;
  real_T nOfForegoundPoints;
  emxArray_boolean_T *BW;
  int32_T iterator;
  static const int8_T m_Neighbors26[78] = { -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, -1, -1, -1, 0, 0, 0, 1, 1,
    1, -1, -1, -1, 0, 0, 1, 1, 1, -1, -1, -1, 0, 0, 0, 1, 1, 1, -1, 0, 1, -1, 0,
    1, -1, 0, 1, -1, 0, 1, -1, 1, -1, 0, 1, -1, 0, 1, -1, 0, 1, -1, 0, 1 };

  int32_T siz_idx_0;
  emxArray_real32_T *b_D;
  emxArray_uint32_T *b_IDX;
  real_T b_BW[3];
  emxArray_int32_T *r0;
  emxArray_int32_T *r1;
  int32_T c_IDX[3];
  int32_T d_IDX[3];
  int32_T siz_idx_1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &newBinaryImage, 3, &c_emlrtRTEI, true);

  /*  [m,n,p] = size(binaryImage); */
  /*  distance function */
  i0 = newBinaryImage->size[0] * newBinaryImage->size[1] * newBinaryImage->size
    [2];
  newBinaryImage->size[0] = binaryImage->size[0];
  newBinaryImage->size[1] = binaryImage->size[1];
  newBinaryImage->size[2] = binaryImage->size[2];
  emxEnsureCapacity_real_T(sp, newBinaryImage, i0, &c_emlrtRTEI);
  loop_ub = binaryImage->size[0] * binaryImage->size[1] * binaryImage->size[2];
  for (i0 = 0; i0 < loop_ub; i0++) {
    newBinaryImage->data[i0] = binaryImage->data[i0];
  }

  st.site = &emlrtRSI;
  counter = (uint32_T)binaryImage->size[0];
  unnamed_idx_1 = (uint32_T)binaryImage->size[1];
  unnamed_idx_2 = (uint32_T)binaryImage->size[2];
  emxInit_int8_T(&st, &result2, 3, &m_emlrtRTEI, true);
  i0 = result2->size[0] * result2->size[1] * result2->size[2];
  result2->size[0] = (int32_T)counter;
  result2->size[1] = (int32_T)unnamed_idx_1;
  result2->size[2] = (int32_T)unnamed_idx_2;
  emxEnsureCapacity_int8_T(&st, result2, i0, &d_emlrtRTEI);
  loop_ub = (int32_T)counter * (int32_T)unnamed_idx_1 * (int32_T)unnamed_idx_2;
  for (i0 = 0; i0 < loop_ub; i0++) {
    result2->data[i0] = 0;
  }

  emxInit_int32_T(&st, &outerBoundary, 2, &e_emlrtRTEI, true);
  i0 = outerBoundary->size[0] * outerBoundary->size[1];
  nOfBackgroundPoints = (real_T)binaryImage->size[0] * (real_T)binaryImage->
    size[1] * (real_T)binaryImage->size[2];
  i1 = (int32_T)nOfBackgroundPoints;
  if (nOfBackgroundPoints != i1) {
    emlrtIntegerCheckR2012b(nOfBackgroundPoints, &emlrtDCI, &st);
  }

  outerBoundary->size[0] = i1;
  outerBoundary->size[1] = 3;
  emxEnsureCapacity_int32_T(&st, outerBoundary, i0, &e_emlrtRTEI);
  nOfBackgroundPoints = (real_T)binaryImage->size[0] * (real_T)binaryImage->
    size[1] * (real_T)binaryImage->size[2];
  if (nOfBackgroundPoints != (int32_T)nOfBackgroundPoints) {
    emlrtIntegerCheckR2012b(nOfBackgroundPoints, &b_emlrtDCI, &st);
  }

  loop_ub = (int32_T)nOfBackgroundPoints * 3;
  for (i0 = 0; i0 < loop_ub; i0++) {
    outerBoundary->data[i0] = 0;
  }

  counter = 1U;
  i0 = binaryImage->size[0];
  for (i = 0; i <= i0 - 3; i++) {
    i1 = binaryImage->size[1];
    for (loop_ub = 0; loop_ub <= i1 - 3; loop_ub++) {
      i2 = binaryImage->size[2];
      for (k = 0; k <= i2 - 3; k++) {
        b_st.site = &e_emlrtRSI;
        i3 = binaryImage->size[0];
        i4 = 2 + i;
        if ((i4 < 1) || (i4 > i3)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &d_emlrtBCI, &b_st);
        }

        i3 = binaryImage->size[1];
        i5 = 2 + loop_ub;
        if ((i5 < 1) || (i5 > i3)) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i3, &d_emlrtBCI, &b_st);
        }

        i3 = binaryImage->size[2];
        varargin_2 = 2 + k;
        if ((varargin_2 < 1) || (varargin_2 > i3)) {
          emlrtDynamicBoundsCheckR2012b(varargin_2, 1, i3, &d_emlrtBCI, &b_st);
        }

        if (binaryImage->data[((i4 + binaryImage->size[0] * (i5 - 1)) +
                               binaryImage->size[0] * binaryImage->size[1] *
                               (varargin_2 - 1)) - 1] == 0.0) {
          i3 = 0;
          nOfBackgroundPoints = 0.0;
          nOfForegoundPoints = 0.0;
          iterator = 0;
          while (((nOfBackgroundPoints == 0.0) || (nOfForegoundPoints == 0.0)) &&
                 (iterator + 1 <= 26)) {
            i4 = binaryImage->size[0];
            i5 = (i + m_Neighbors26[iterator]) + 2;
            if ((i5 < 1) || (i5 > i4)) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &h_emlrtBCI, &b_st);
            }

            i4 = binaryImage->size[1];
            varargin_2 = (loop_ub + m_Neighbors26[26 + iterator]) + 2;
            if ((varargin_2 < 1) || (varargin_2 > i4)) {
              emlrtDynamicBoundsCheckR2012b(varargin_2, 1, i4, &h_emlrtBCI,
                &b_st);
            }

            i4 = binaryImage->size[2];
            siz_idx_0 = (k + m_Neighbors26[52 + iterator]) + 2;
            if ((siz_idx_0 < 1) || (siz_idx_0 > i4)) {
              emlrtDynamicBoundsCheckR2012b(siz_idx_0, 1, i4, &h_emlrtBCI, &b_st);
            }

            if (binaryImage->data[((i5 + binaryImage->size[0] * (varargin_2 - 1))
                 + binaryImage->size[0] * binaryImage->size[1] * (siz_idx_0 - 1))
                - 1] > 0.0) {
              nOfForegoundPoints++;
            }

            i4 = binaryImage->size[0];
            if ((i5 < 1) || (i5 > i4)) {
              emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &i_emlrtBCI, &b_st);
            }

            i4 = binaryImage->size[1];
            if ((varargin_2 < 1) || (varargin_2 > i4)) {
              emlrtDynamicBoundsCheckR2012b(varargin_2, 1, i4, &i_emlrtBCI,
                &b_st);
            }

            i4 = binaryImage->size[2];
            if ((siz_idx_0 < 1) || (siz_idx_0 > i4)) {
              emlrtDynamicBoundsCheckR2012b(siz_idx_0, 1, i4, &i_emlrtBCI, &b_st);
            }

            if (binaryImage->data[((i5 + binaryImage->size[0] * (varargin_2 - 1))
                 + binaryImage->size[0] * binaryImage->size[1] * (siz_idx_0 - 1))
                - 1] <= 0.0) {
              nOfBackgroundPoints++;
            }

            iterator++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&b_st);
            }
          }

          if ((nOfBackgroundPoints > 0.0) && (nOfForegoundPoints > 0.0)) {
            i3 = 1;
          }
        } else {
          i3 = 0;
        }

        if (i3 != 0) {
          i3 = outerBoundary->size[0];
          if (((int32_T)counter < 1) || ((int32_T)counter > i3)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)counter, 1, i3, &emlrtBCI,
              &st);
          }

          outerBoundary->data[(int32_T)counter - 1] = 2 + i;
          outerBoundary->data[((int32_T)counter + outerBoundary->size[0]) - 1] =
            2 + loop_ub;
          outerBoundary->data[((int32_T)counter + (outerBoundary->size[0] << 1))
            - 1] = 2 + k;
          i3 = result2->size[0];
          i4 = 2 + i;
          if ((i4 < 1) || (i4 > i3)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &g_emlrtBCI, &st);
          }

          i3 = result2->size[1];
          i5 = 2 + loop_ub;
          if ((i5 < 1) || (i5 > i3)) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, i3, &g_emlrtBCI, &st);
          }

          i3 = result2->size[2];
          varargin_2 = 2 + k;
          if ((varargin_2 < 1) || (varargin_2 > i3)) {
            emlrtDynamicBoundsCheckR2012b(varargin_2, 1, i3, &g_emlrtBCI, &st);
          }

          result2->data[((i4 + result2->size[0] * (i5 - 1)) + result2->size[0] *
                         result2->size[1] * (varargin_2 - 1)) - 1] = 1;
          counter++;
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  emxFree_int8_T(&result2);
  if (1 > (int32_T)(counter - 1U)) {
    loop_ub = 0;
  } else {
    i0 = outerBoundary->size[0];
    if (1 > i0) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &b_emlrtBCI, &st);
    }

    i0 = outerBoundary->size[0];
    loop_ub = (int32_T)(counter - 1U);
    if ((loop_ub < 1) || (loop_ub > i0)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &c_emlrtBCI, &st);
    }
  }

  emxInit_int32_T(&st, &b_outerBoundary, 2, &f_emlrtRTEI, true);
  i0 = b_outerBoundary->size[0] * b_outerBoundary->size[1];
  b_outerBoundary->size[0] = loop_ub;
  b_outerBoundary->size[1] = 3;
  emxEnsureCapacity_int32_T(&st, b_outerBoundary, i0, &f_emlrtRTEI);
  for (i0 = 0; i0 < 3; i0++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_outerBoundary->data[i1 + b_outerBoundary->size[0] * i0] =
        outerBoundary->data[i1 + outerBoundary->size[0] * i0];
    }
  }

  i0 = outerBoundary->size[0] * outerBoundary->size[1];
  outerBoundary->size[0] = b_outerBoundary->size[0];
  outerBoundary->size[1] = 3;
  emxEnsureCapacity_int32_T(&st, outerBoundary, i0, &e_emlrtRTEI);
  loop_ub = b_outerBoundary->size[0] * b_outerBoundary->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    outerBoundary->data[i0] = b_outerBoundary->data[i0];
  }

  emxFree_int32_T(&b_outerBoundary);
  i0 = outerBoundary->size[0];
  for (i = 0; i < i0; i++) {
    i1 = newBinaryImage->size[0];
    i2 = outerBoundary->size[0];
    i3 = 1 + i;
    if ((i3 < 1) || (i3 > i2)) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &f_emlrtBCI, sp);
    }

    i2 = outerBoundary->data[i3 - 1];
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &e_emlrtBCI, sp);
    }

    i1 = newBinaryImage->size[1];
    i3 = outerBoundary->size[0];
    i4 = 1 + i;
    if ((i4 < 1) || (i4 > i3)) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &f_emlrtBCI, sp);
    }

    i3 = outerBoundary->data[(i4 + outerBoundary->size[0]) - 1];
    if ((i3 < 1) || (i3 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &e_emlrtBCI, sp);
    }

    i1 = newBinaryImage->size[2];
    i4 = outerBoundary->size[0];
    i5 = 1 + i;
    if ((i5 < 1) || (i5 > i4)) {
      emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &f_emlrtBCI, sp);
    }

    i4 = outerBoundary->data[(i5 + (outerBoundary->size[0] << 1)) - 1];
    if ((i4 < 1) || (i4 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &e_emlrtBCI, sp);
    }

    newBinaryImage->data[((i2 + newBinaryImage->size[0] * (i3 - 1)) +
                          newBinaryImage->size[0] * newBinaryImage->size[1] *
                          (i4 - 1)) - 1] = 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInit_boolean_T(sp, &BW, 3, &g_emlrtRTEI, true);
  st.site = &b_emlrtRSI;
  i0 = BW->size[0] * BW->size[1] * BW->size[2];
  BW->size[0] = newBinaryImage->size[0];
  BW->size[1] = newBinaryImage->size[1];
  BW->size[2] = newBinaryImage->size[2];
  emxEnsureCapacity_boolean_T(&st, BW, i0, &g_emlrtRTEI);
  loop_ub = newBinaryImage->size[0] * newBinaryImage->size[1] *
    newBinaryImage->size[2];
  for (i0 = 0; i0 < loop_ub; i0++) {
    BW->data[i0] = (newBinaryImage->data[i0] != 0.0);
  }

  emxFree_real_T(&newBinaryImage);
  counter = (uint32_T)BW->size[0];
  unnamed_idx_1 = (uint32_T)BW->size[1];
  unnamed_idx_2 = (uint32_T)BW->size[2];
  emxInit_real32_T(&st, &b_D, 3, &n_emlrtRTEI, true);
  i0 = b_D->size[0] * b_D->size[1] * b_D->size[2];
  b_D->size[0] = (int32_T)counter;
  b_D->size[1] = (int32_T)unnamed_idx_1;
  b_D->size[2] = (int32_T)unnamed_idx_2;
  emxEnsureCapacity_real32_T(&st, b_D, i0, &h_emlrtRTEI);
  counter = (uint32_T)BW->size[0];
  unnamed_idx_1 = (uint32_T)BW->size[1];
  unnamed_idx_2 = (uint32_T)BW->size[2];
  emxInit_uint32_T(&st, &b_IDX, 3, &o_emlrtRTEI, true);
  i0 = b_IDX->size[0] * b_IDX->size[1] * b_IDX->size[2];
  b_IDX->size[0] = (int32_T)counter;
  b_IDX->size[1] = (int32_T)unnamed_idx_1;
  b_IDX->size[2] = (int32_T)unnamed_idx_2;
  emxEnsureCapacity_uint32_T(&st, b_IDX, i0, &h_emlrtRTEI);
  k = 3;
  if (BW->size[2] == 1) {
    k = 2;
  }

  b_BW[0] = BW->size[0];
  b_BW[1] = BW->size[1];
  b_BW[2] = BW->size[2];
  bwdistEDTFT32_tbb_boolean(&BW->data[0], b_BW, (real_T)k, &b_D->data[0],
    &b_IDX->data[0]);
  b_st.site = &f_emlrtRSI;
  b_sqrt(&b_st, b_D);
  st.site = &c_emlrtRSI;
  i0 = binaryImage->size[0] * binaryImage->size[1] * binaryImage->size[2];
  for (k = 0; k < i0; k++) {
    if (muDoubleScalarIsNaN(binaryImage->data[k])) {
      b_st.site = &l_emlrtRSI;
      error(&b_st);
    }
  }

  st.site = &c_emlrtRSI;
  i0 = BW->size[0] * BW->size[1] * BW->size[2];
  BW->size[0] = binaryImage->size[0];
  BW->size[1] = binaryImage->size[1];
  BW->size[2] = binaryImage->size[2];
  emxEnsureCapacity_boolean_T(&st, BW, i0, &g_emlrtRTEI);
  loop_ub = binaryImage->size[0] * binaryImage->size[1] * binaryImage->size[2];
  for (i0 = 0; i0 < loop_ub; i0++) {
    BW->data[i0] = !(binaryImage->data[i0] != 0.0);
  }

  counter = (uint32_T)BW->size[0];
  unnamed_idx_1 = (uint32_T)BW->size[1];
  unnamed_idx_2 = (uint32_T)BW->size[2];
  i0 = D->size[0] * D->size[1] * D->size[2];
  D->size[0] = (int32_T)counter;
  D->size[1] = (int32_T)unnamed_idx_1;
  D->size[2] = (int32_T)unnamed_idx_2;
  emxEnsureCapacity_real32_T(&st, D, i0, &i_emlrtRTEI);
  counter = (uint32_T)BW->size[0];
  unnamed_idx_1 = (uint32_T)BW->size[1];
  unnamed_idx_2 = (uint32_T)BW->size[2];
  i0 = IDX->size[0] * IDX->size[1] * IDX->size[2];
  IDX->size[0] = (int32_T)counter;
  IDX->size[1] = (int32_T)unnamed_idx_1;
  IDX->size[2] = (int32_T)unnamed_idx_2;
  emxEnsureCapacity_uint32_T(&st, IDX, i0, &i_emlrtRTEI);
  k = 3;
  if (BW->size[2] == 1) {
    k = 2;
  }

  b_BW[0] = BW->size[0];
  b_BW[1] = BW->size[1];
  b_BW[2] = BW->size[2];
  bwdistEDTFT32_tbb_boolean(&BW->data[0], b_BW, (real_T)k, &D->data[0],
    &IDX->data[0]);
  b_st.site = &f_emlrtRSI;
  b_sqrt(&b_st, D);
  k = D->size[0] * (D->size[1] * D->size[2]) - 1;
  loop_ub = 0;
  emxFree_boolean_T(&BW);
  for (i = 0; i <= k; i++) {
    if (D->data[i] == 0.0F) {
      loop_ub++;
    }
  }

  emxInit_int32_T(sp, &r0, 1, &j_emlrtRTEI, true);
  i0 = r0->size[0];
  r0->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r0, i0, &j_emlrtRTEI);
  loop_ub = 0;
  for (i = 0; i <= k; i++) {
    if (D->data[i] == 0.0F) {
      r0->data[loop_ub] = i + 1;
      loop_ub++;
    }
  }

  loop_ub = r0->size[0] - 1;
  i0 = IDX->size[0];
  i1 = IDX->size[1];
  i2 = IDX->size[2];
  i0 = i0 * i1 * i2;
  for (i1 = 0; i1 <= loop_ub; i1++) {
    i2 = r0->data[i1];
    if ((i2 < 1) || (i2 > i0)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &j_emlrtBCI, sp);
    }

    IDX->data[i2 - 1] = 0U;
  }

  emxFree_int32_T(&r0);
  k = b_D->size[0] * (b_D->size[1] * b_D->size[2]) - 1;
  loop_ub = 0;
  for (i = 0; i <= k; i++) {
    if (b_D->data[i] == 0.0F) {
      loop_ub++;
    }
  }

  emxInit_int32_T(sp, &r1, 1, &j_emlrtRTEI, true);
  i0 = r1->size[0];
  r1->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r1, i0, &j_emlrtRTEI);
  loop_ub = 0;
  for (i = 0; i <= k; i++) {
    if (b_D->data[i] == 0.0F) {
      r1->data[loop_ub] = i + 1;
      loop_ub++;
    }
  }

  loop_ub = r1->size[0] - 1;
  i0 = b_IDX->size[0];
  i1 = b_IDX->size[1];
  i2 = b_IDX->size[2];
  i0 = i0 * i1 * i2;
  for (i1 = 0; i1 <= loop_ub; i1++) {
    i2 = r1->data[i1];
    if ((i2 < 1) || (i2 > i0)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &k_emlrtBCI, sp);
    }

    b_IDX->data[i2 - 1] = 0U;
  }

  emxFree_int32_T(&r1);
  c_IDX[0] = IDX->size[0];
  c_IDX[1] = IDX->size[1];
  c_IDX[2] = IDX->size[2];
  d_IDX[0] = b_IDX->size[0];
  d_IDX[1] = b_IDX->size[1];
  d_IDX[2] = b_IDX->size[2];
  emlrtSizeEqCheckNDR2012b(c_IDX, d_IDX, &emlrtECI, sp);
  i0 = IDX->size[0] * IDX->size[1] * IDX->size[2];
  i1 = IDX->size[0] * IDX->size[1] * IDX->size[2];
  emxEnsureCapacity_uint32_T(sp, IDX, i1, &k_emlrtRTEI);
  loop_ub = i0 - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    counter = IDX->data[i0];
    unnamed_idx_1 = counter + b_IDX->data[i0];
    if (unnamed_idx_1 < counter) {
      unnamed_idx_1 = MAX_uint32_T;
    }

    IDX->data[i0] = unnamed_idx_1;
  }

  emxFree_uint32_T(&b_IDX);
  i0 = outerBoundary->size[0];
  for (i = 0; i < i0; i++) {
    st.site = &d_emlrtRSI;
    i1 = outerBoundary->size[0];
    i2 = 1 + i;
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &l_emlrtBCI, &st);
    }

    k = outerBoundary->data[i2 - 1];
    i1 = outerBoundary->size[0];
    i2 = 1 + i;
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &m_emlrtBCI, &st);
    }

    varargin_2 = outerBoundary->data[(i2 + outerBoundary->size[0]) - 1];
    i1 = outerBoundary->size[0];
    i2 = 1 + i;
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &n_emlrtBCI, &st);
    }

    iterator = outerBoundary->data[(i2 + (outerBoundary->size[0] << 1)) - 1];
    b_st.site = &m_emlrtRSI;
    siz_idx_0 = IDX->size[0];
    siz_idx_1 = IDX->size[1];
    loop_ub = IDX->size[2];
    if ((k >= 1) && (k <= siz_idx_0)) {
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &q_emlrtRTEI,
        "MATLAB:sub2ind:IndexOutOfRange", "MATLAB:sub2ind:IndexOutOfRange", 0);
    }

    if ((varargin_2 >= 1) && (varargin_2 <= siz_idx_1)) {
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &q_emlrtRTEI,
        "MATLAB:sub2ind:IndexOutOfRange", "MATLAB:sub2ind:IndexOutOfRange", 0);
    }

    if ((iterator >= 1) && (iterator <= loop_ub)) {
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &q_emlrtRTEI,
        "MATLAB:sub2ind:IndexOutOfRange", "MATLAB:sub2ind:IndexOutOfRange", 0);
    }

    i1 = IDX->size[0];
    i2 = outerBoundary->size[0];
    i3 = 1 + i;
    if ((i3 < 1) || (i3 > i2)) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &p_emlrtBCI, sp);
    }

    i2 = outerBoundary->data[i3 - 1];
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &o_emlrtBCI, sp);
    }

    i1 = IDX->size[1];
    i3 = outerBoundary->size[0];
    i4 = 1 + i;
    if ((i4 < 1) || (i4 > i3)) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &p_emlrtBCI, sp);
    }

    i3 = outerBoundary->data[(i4 + outerBoundary->size[0]) - 1];
    if ((i3 < 1) || (i3 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &o_emlrtBCI, sp);
    }

    i1 = IDX->size[2];
    i4 = outerBoundary->size[0];
    i5 = 1 + i;
    if ((i5 < 1) || (i5 > i4)) {
      emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &p_emlrtBCI, sp);
    }

    i4 = outerBoundary->data[(i5 + (outerBoundary->size[0] << 1)) - 1];
    if ((i4 < 1) || (i4 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, i1, &o_emlrtBCI, sp);
    }

    i1 = (k + siz_idx_0 * (varargin_2 - 1)) + siz_idx_0 * siz_idx_1 * (iterator
      - 1);
    if (i1 < 0) {
      i1 = 0;
    }

    IDX->data[((i2 + IDX->size[0] * (i3 - 1)) + IDX->size[0] * IDX->size[1] *
               (i4 - 1)) - 1] = (uint32_T)i1;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_int32_T(&outerBoundary);
  c_IDX[0] = D->size[0];
  c_IDX[1] = D->size[1];
  c_IDX[2] = D->size[2];
  d_IDX[0] = b_D->size[0];
  d_IDX[1] = b_D->size[1];
  d_IDX[2] = b_D->size[2];
  emlrtSizeEqCheckNDR2012b(c_IDX, d_IDX, &b_emlrtECI, sp);
  i0 = D->size[0] * D->size[1] * D->size[2];
  i1 = D->size[0] * D->size[1] * D->size[2];
  emxEnsureCapacity_real32_T(sp, D, i1, &l_emlrtRTEI);
  loop_ub = i0 - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    D->data[i0] -= b_D->data[i0];
  }

  emxFree_real32_T(&b_D);

  /* initialize Q */
  /*   */
  /*  Q = zeros(m,n,p,3); */
  /*  for i = 1 : m */
  /*      for j = 1 : n */
  /*          for k = 1 : p */
  /*              [cx,cy,cz] = ind2sub(size(D),IDX(sub2ind(size(IDX),i,j,k))); */
  /*              qq = [cx,cy,cz] - [i,j,k]; */
  /*              zero_case = 0; */
  /*              d = norm(qq); */
  /*              if(d~=0) */
  /*                  qq = qq / d; */
  /*              else */
  /*                  qq = 0; */
  /*                  zero_case = 1; */
  /*              end */
  /*              if(zero_case ~= 1) */
  /*                  Q(i,j,k,1) = qq(1); */
  /*                  Q(i,j,k,2) = qq(2); */
  /*                  Q(i,j,k,3) = qq(3); */
  /*              else */
  /*                  Q(i,j,k,1) = 0; */
  /*                  Q(i,j,k,2) = 0; */
  /*                  Q(i,j,k,3) = 0; */
  /*              end */
  /*          end */
  /*      end */
  /*  end */
  b_BW[0] = D->size[0];
  b_BW[1] = D->size[1];
  b_BW[2] = D->size[2];
  emlrtDisplayR2012b(emlrt_marshallOut(b_BW), "ans", &emlrtRTEI, sp);
  b_BW[0] = IDX->size[0];
  b_BW[1] = IDX->size[1];
  b_BW[2] = IDX->size[2];
  emlrtDisplayR2012b(emlrt_marshallOut(b_BW), "ans", &b_emlrtRTEI, sp);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (compute_gradient_vector_field.c) */
