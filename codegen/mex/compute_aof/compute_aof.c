/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * compute_aof.c
 *
 * Code generation for function 'compute_aof'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "compute_aof.h"
#include "compute_aof_emxutil.h"
#include "compute_aof_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 46,    /* lineNo */
  "compute_aof",                       /* fcnName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 81,  /* lineNo */
  "compute_aof",                       /* fcnName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 19,  /* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 25,  /* lineNo */
  "dot",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\specfun\\dot.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 10,  /* lineNo */
  1,                                   /* colNo */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 13,/* lineNo */
  15,                                  /* colNo */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 17,/* lineNo */
  1,                                   /* colNo */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 19,/* lineNo */
  13,                                  /* colNo */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 13,/* lineNo */
  20,                                  /* colNo */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 81,/* lineNo */
  58,                                  /* colNo */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 1, /* lineNo */
  22,                                  /* colNo */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 13,/* lineNo */
  15,                                  /* colNo */
  "dot",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\specfun\\dot.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 38,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  66,                                  /* colNo */
  "normals",                           /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  13,                                  /* lineNo */
  5,                                   /* colNo */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m"/* pName */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  13,                                  /* colNo */
  "normals",                           /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  56,                                  /* colNo */
  "sphere_points",                     /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  43,                                  /* lineNo */
  52,                                  /* colNo */
  "sphere_points",                     /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  56,                                  /* colNo */
  "sphere_points",                     /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  52,                                  /* colNo */
  "sphere_points",                     /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  56,                                  /* colNo */
  "sphere_points",                     /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  52,                                  /* colNo */
  "sphere_points",                     /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  50,                                  /* colNo */
  "sphere_points",                     /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  46,                                  /* colNo */
  "sphere_points",                     /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  50,                                  /* colNo */
  "sphere_points",                     /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  46,                                  /* colNo */
  "sphere_points",                     /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  50,                                  /* colNo */
  "sphere_points",                     /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  46,                                  /* colNo */
  "sphere_points",                     /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  34,                                  /* colNo */
  "sphere_points",                     /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  16,                                  /* colNo */
  "D",                                 /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  13,                                  /* colNo */
  "fluxImage",                         /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  54,                                  /* colNo */
  "IDX",                               /* aName */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 46,    /* lineNo */
  54,                                  /* colNo */
  "compute_aof",                       /* fName */
  "C:\\Users\\morte\\Documents\\GitHub\\3DAOFSkeletons\\Libs\\MedialSurface\\compute_aof.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRSInfo h_emlrtRSI = { 18,  /* lineNo */
  "indexDivide",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\indexDivide.m"/* pathName */
};

/* Function Declarations */
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);

/* Function Definitions */
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T b_numerator;
  uint32_T b_denominator;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  } else {
    if (numerator < 0) {
      b_numerator = ~(uint32_T)numerator + 1U;
    } else {
      b_numerator = (uint32_T)numerator;
    }

    if (denominator < 0) {
      b_denominator = ~(uint32_T)denominator + 1U;
    } else {
      b_denominator = (uint32_T)denominator;
    }

    tempAbsQuotient = b_numerator / b_denominator;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

void compute_aof(const emlrtStack *sp, const emxArray_real32_T *D, const
                 emxArray_uint32_T *IDX, emxArray_real_T *sphere_points, real_T
                 epsilon, emxArray_real_T *fluxImage)
{
  int32_T p;
  int32_T n;
  int32_T nOfSamples;
  uint32_T varargin_1[2];
  emxArray_real_T *normals;
  int32_T i0;
  int32_T cpsiz_idx_1;
  emxArray_int32_T *r0;
  emxArray_real_T *b_sphere_points;
  int32_T idx;
  int32_T vk;
  int32_T varargout_6;
  emxArray_real_T *b_normals;
  int32_T iv1[2];
  int32_T i;
  int32_T j;
  int32_T k;
  real_T flux_value;
  int32_T c_sphere_points[2];
  int32_T ind;
  real_T cI;
  real_T cJ;
  real_T cK;
  real_T qq_idx_0;
  real_T qq_idx_1;
  real_T qq_idx_2;
  uint32_T ndx;
  int32_T cpsiz_idx_0;
  real_T unnamed_idx_2;
  real_T scale;
  real_T d;
  real_T qq_data[3];
  uint32_T varargin_2[2];
  boolean_T b_p;
  boolean_T c_p;
  boolean_T exitg1;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* initialize Q */
  p = D->size[2];
  n = D->size[1];
  nOfSamples = sphere_points->size[0] - 1;

  /* for each point on the sphere create the normal vector */
  varargin_1[0] = (uint32_T)sphere_points->size[0];
  varargin_1[1] = (uint32_T)sphere_points->size[1];
  emxInit_real_T(sp, &normals, 2, &emlrtRTEI, true);
  i0 = normals->size[0] * normals->size[1];
  normals->size[0] = (int32_T)varargin_1[0];
  normals->size[1] = (int32_T)varargin_1[1];
  emxEnsureCapacity_real_T(sp, normals, i0, &emlrtRTEI);
  cpsiz_idx_1 = (int32_T)varargin_1[0] * (int32_T)varargin_1[1];
  for (i0 = 0; i0 < cpsiz_idx_1; i0++) {
    normals->data[i0] = 0.0;
  }

  i0 = sphere_points->size[0];
  emxInit_int32_T(sp, &r0, 1, &g_emlrtRTEI, true);
  emxInit_real_T(sp, &b_sphere_points, 2, &e_emlrtRTEI, true);
  for (idx = 0; idx < i0; idx++) {
    vk = normals->size[0];
    varargout_6 = 1 + idx;
    if ((varargout_6 < 1) || (varargout_6 > vk)) {
      emlrtDynamicBoundsCheckR2012b(varargout_6, 1, vk, &b_emlrtBCI, sp);
    }

    cpsiz_idx_1 = normals->size[1];
    vk = r0->size[0];
    r0->size[0] = cpsiz_idx_1;
    emxEnsureCapacity_int32_T(sp, r0, vk, &b_emlrtRTEI);
    for (vk = 0; vk < cpsiz_idx_1; vk++) {
      r0->data[vk] = vk;
    }

    vk = sphere_points->size[0];
    varargout_6 = 1 + idx;
    if ((varargout_6 < 1) || (varargout_6 > vk)) {
      emlrtDynamicBoundsCheckR2012b(varargout_6, 1, vk, &o_emlrtBCI, sp);
    }

    iv1[0] = 1;
    iv1[1] = r0->size[0];
    cpsiz_idx_1 = sphere_points->size[1];
    vk = b_sphere_points->size[0] * b_sphere_points->size[1];
    b_sphere_points->size[0] = 1;
    b_sphere_points->size[1] = cpsiz_idx_1;
    emxEnsureCapacity_real_T(sp, b_sphere_points, vk, &e_emlrtRTEI);
    for (vk = 0; vk < cpsiz_idx_1; vk++) {
      b_sphere_points->data[vk] = sphere_points->data[idx + sphere_points->size
        [0] * vk];
    }

    c_sphere_points[0] = b_sphere_points->size[0];
    c_sphere_points[1] = b_sphere_points->size[1];
    emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &c_sphere_points[0], 2, &emlrtECI,
      sp);
    cpsiz_idx_1 = sphere_points->size[1] - 1;
    for (vk = 0; vk <= cpsiz_idx_1; vk++) {
      normals->data[idx + normals->size[0] * r0->data[vk]] = sphere_points->
        data[idx + sphere_points->size[0] * vk];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_int32_T(&r0);

  /* scale sphere_points by its radius (epsilon) */
  i0 = sphere_points->size[0] * sphere_points->size[1];
  vk = sphere_points->size[0] * sphere_points->size[1];
  emxEnsureCapacity_real_T(sp, sphere_points, vk, &c_emlrtRTEI);
  cpsiz_idx_1 = i0 - 1;
  for (i0 = 0; i0 <= cpsiz_idx_1; i0++) {
    sphere_points->data[i0] *= epsilon;
  }

  i0 = D->size[0];
  vk = fluxImage->size[0] * fluxImage->size[1] * fluxImage->size[2];
  fluxImage->size[0] = D->size[0];
  fluxImage->size[1] = D->size[1];
  fluxImage->size[2] = D->size[2];
  emxEnsureCapacity_real_T(sp, fluxImage, vk, &d_emlrtRTEI);
  emxInit_real_T(sp, &b_normals, 2, &f_emlrtRTEI, true);
  for (i = 0; i < i0; i++) {
    for (j = 0; j < n; j++) {
      for (k = 0; k < p; k++) {
        flux_value = 0.0;
        vk = D->size[0];
        varargout_6 = 1 + i;
        if ((varargout_6 < 1) || (varargout_6 > vk)) {
          emlrtDynamicBoundsCheckR2012b(varargout_6, 1, vk, &p_emlrtBCI, sp);
        }

        vk = D->size[1];
        idx = 1 + j;
        if ((idx < 1) || (idx > vk)) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, vk, &p_emlrtBCI, sp);
        }

        vk = D->size[2];
        cpsiz_idx_1 = 1 + k;
        if ((cpsiz_idx_1 < 1) || (cpsiz_idx_1 > vk)) {
          emlrtDynamicBoundsCheckR2012b(cpsiz_idx_1, 1, vk, &p_emlrtBCI, sp);
        }

        if ((D->data[((varargout_6 + D->size[0] * (idx - 1)) + D->size[0] *
                      D->size[1] * (cpsiz_idx_1 - 1)) - 1] > -1.5F) && (1.0 +
             (real_T)i > epsilon) && (1.0 + (real_T)j > epsilon) && (1.0 +
             (real_T)k > epsilon) && (1.0 + (real_T)i < (real_T)D->size[0] -
             epsilon) && (1.0 + (real_T)j < (real_T)n - epsilon) && (1.0 +
             (real_T)k < (real_T)p - epsilon)) {
          /* sum over dot product of normal and the gradient vector field (q-dot) */
          for (ind = 0; ind <= nOfSamples; ind++) {
            /*  a point on the sphere */
            vk = sphere_points->size[1];
            if (1 > vk) {
              emlrtDynamicBoundsCheckR2012b(1, 1, vk, &m_emlrtBCI, sp);
            }

            vk = sphere_points->size[0];
            varargout_6 = 1 + ind;
            if ((varargout_6 < 1) || (varargout_6 > vk)) {
              emlrtDynamicBoundsCheckR2012b(varargout_6, 1, vk, &n_emlrtBCI, sp);
            }

            vk = sphere_points->size[1];
            if (2 > vk) {
              emlrtDynamicBoundsCheckR2012b(2, 1, vk, &k_emlrtBCI, sp);
            }

            vk = sphere_points->size[0];
            varargout_6 = 1 + ind;
            if ((varargout_6 < 1) || (varargout_6 > vk)) {
              emlrtDynamicBoundsCheckR2012b(varargout_6, 1, vk, &l_emlrtBCI, sp);
            }

            vk = sphere_points->size[1];
            if (3 > vk) {
              emlrtDynamicBoundsCheckR2012b(3, 1, vk, &i_emlrtBCI, sp);
            }

            vk = sphere_points->size[0];
            varargout_6 = 1 + ind;
            if ((varargout_6 < 1) || (varargout_6 > vk)) {
              emlrtDynamicBoundsCheckR2012b(varargout_6, 1, vk, &j_emlrtBCI, sp);
            }

            /* the indices of the grid cell that sphere points */
            /* fall into  */
            vk = sphere_points->size[1];
            if (1 > vk) {
              emlrtDynamicBoundsCheckR2012b(1, 1, vk, &g_emlrtBCI, sp);
            }

            vk = sphere_points->size[0];
            varargout_6 = 1 + ind;
            if ((varargout_6 < 1) || (varargout_6 > vk)) {
              emlrtDynamicBoundsCheckR2012b(varargout_6, 1, vk, &h_emlrtBCI, sp);
            }

            cI = muDoubleScalarFloor(((1.0 + (real_T)i) + sphere_points->
              data[ind]) + 0.5);
            vk = sphere_points->size[1];
            if (2 > vk) {
              emlrtDynamicBoundsCheckR2012b(2, 1, vk, &e_emlrtBCI, sp);
            }

            vk = sphere_points->size[0];
            varargout_6 = 1 + ind;
            if ((varargout_6 < 1) || (varargout_6 > vk)) {
              emlrtDynamicBoundsCheckR2012b(varargout_6, 1, vk, &f_emlrtBCI, sp);
            }

            cJ = muDoubleScalarFloor(((1.0 + (real_T)j) + sphere_points->
              data[ind + sphere_points->size[0]]) + 0.5);
            vk = sphere_points->size[1];
            if (3 > vk) {
              emlrtDynamicBoundsCheckR2012b(3, 1, vk, &c_emlrtBCI, sp);
            }

            vk = sphere_points->size[0];
            varargout_6 = 1 + ind;
            if ((varargout_6 < 1) || (varargout_6 > vk)) {
              emlrtDynamicBoundsCheckR2012b(varargout_6, 1, vk, &d_emlrtBCI, sp);
            }

            cK = muDoubleScalarFloor(((1.0 + (real_T)k) + sphere_points->
              data[ind + (sphere_points->size[0] << 1)]) + 0.5);

            /* closest point on the boundary to that sphere point */
            st.site = &emlrtRSI;
            qq_idx_0 = D->size[0];
            qq_idx_1 = D->size[1];
            qq_idx_2 = D->size[2];
            vk = IDX->size[0];
            varargout_6 = (int32_T)cI;
            if (cI != varargout_6) {
              emlrtIntegerCheckR2012b(cI, &emlrtDCI, &st);
            }

            if ((varargout_6 < 1) || (varargout_6 > vk)) {
              emlrtDynamicBoundsCheckR2012b(varargout_6, 1, vk, &r_emlrtBCI, &st);
            }

            vk = IDX->size[1];
            idx = (int32_T)cJ;
            if (cJ != idx) {
              emlrtIntegerCheckR2012b(cJ, &emlrtDCI, &st);
            }

            if ((idx < 1) || (idx > vk)) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, vk, &r_emlrtBCI, &st);
            }

            vk = IDX->size[2];
            cpsiz_idx_1 = (int32_T)cK;
            if (cK != cpsiz_idx_1) {
              emlrtIntegerCheckR2012b(cK, &emlrtDCI, &st);
            }

            if ((cpsiz_idx_1 < 1) || (cpsiz_idx_1 > vk)) {
              emlrtDynamicBoundsCheckR2012b(cpsiz_idx_1, 1, vk, &r_emlrtBCI, &st);
            }

            ndx = IDX->data[((varargout_6 + IDX->size[0] * (idx - 1)) +
                             IDX->size[0] * IDX->size[1] * (cpsiz_idx_1 - 1)) -
              1];
            b_st.site = &c_emlrtRSI;
            idx = (int32_T)IDX->data[(((int32_T)cI + IDX->size[0] * ((int32_T)cJ
              - 1)) + IDX->size[0] * IDX->size[1] * ((int32_T)cK - 1)) - 1] - 1;
            cpsiz_idx_0 = (int32_T)(uint32_T)qq_idx_0;
            cpsiz_idx_1 = (int32_T)(uint32_T)qq_idx_1 * cpsiz_idx_0;
            if (((int32_T)ndx >= 1) && ((int32_T)ndx <= cpsiz_idx_1 * (int32_T)
                 (uint32_T)qq_idx_2)) {
            } else {
              emlrtErrorWithMessageIdR2018a(&b_st, &j_emlrtRTEI,
                "Coder:MATLAB:ind2sub_IndexOutOfRange",
                "Coder:MATLAB:ind2sub_IndexOutOfRange", 0);
            }

            c_st.site = &h_emlrtRSI;
            vk = div_s32(&c_st, idx, cpsiz_idx_1);
            varargout_6 = vk + 1;
            idx -= vk * cpsiz_idx_1;
            c_st.site = &h_emlrtRSI;
            vk = div_s32(&c_st, idx, cpsiz_idx_0);
            idx -= vk * cpsiz_idx_0;

            /*  the vector connect them */
            cI = ((1.0 + (real_T)i) + sphere_points->data[ind]) + 0.5;
            cJ = ((1.0 + (real_T)j) + sphere_points->data[ind +
                  sphere_points->size[0]]) + 0.5;
            unnamed_idx_2 = ((1.0 + (real_T)k) + sphere_points->data[ind +
                             (sphere_points->size[0] << 1)]) + 0.5;

            /*                          zero_case = 0; */
            scale = 3.3121686421112381E-170;
            cI = (real_T)(idx + 1) - cI;
            cK = muDoubleScalarAbs(cI);
            if (cK > 3.3121686421112381E-170) {
              d = 1.0;
              scale = cK;
            } else {
              qq_idx_2 = cK / 3.3121686421112381E-170;
              d = qq_idx_2 * qq_idx_2;
            }

            qq_idx_0 = cI;
            cI = (real_T)(vk + 1) - cJ;
            cK = muDoubleScalarAbs(cI);
            if (cK > scale) {
              qq_idx_2 = scale / cK;
              d = 1.0 + d * qq_idx_2 * qq_idx_2;
              scale = cK;
            } else {
              qq_idx_2 = cK / scale;
              d += qq_idx_2 * qq_idx_2;
            }

            qq_idx_1 = cI;
            cI = (real_T)varargout_6 - unnamed_idx_2;
            cK = muDoubleScalarAbs(cI);
            if (cK > scale) {
              qq_idx_2 = scale / cK;
              d = 1.0 + d * qq_idx_2 * qq_idx_2;
              scale = cK;
            } else {
              qq_idx_2 = cK / scale;
              d += qq_idx_2 * qq_idx_2;
            }

            d = scale * muDoubleScalarSqrt(d);
            if (d != 0.0) {
              cpsiz_idx_0 = 3;
              qq_data[0] = qq_idx_0 / d;
              qq_data[1] = qq_idx_1 / d;
              qq_data[2] = cI / d;
            } else {
              cpsiz_idx_0 = 1;
              qq_data[0] = 0.0;

              /*                              zero_case = 1; */
            }

            /*                          if(zero_case ~= 1) */
            /*                              Q(i,j,k,1) = qq(1); */
            /*                              Q(i,j,k,2) = qq(2); */
            /*                              Q(i,j,k,3) = qq(3); */
            /*                          else */
            /*                              Q(i,j,k,1) = 0; */
            /*                              Q(i,j,k,2) = 0; */
            /*                              Q(i,j,k,3) = 0; */
            /*                          end */
            /*                           */
            /*                           */
            /*                           */
            /*                           */
            /*                           */
            /*                          q_dot = zeros(1,3); */
            /*                          q_dot(1) = Q(cI,cJ,cK,1); */
            /*                          q_dot(2) = Q(cI,cJ,cK,2); */
            /*                          q_dot(3) = Q(cI,cJ,cK,3); */
            st.site = &b_emlrtRSI;
            cpsiz_idx_1 = normals->size[1];
            vk = normals->size[0];
            varargout_6 = 1 + ind;
            if ((varargout_6 < 1) || (varargout_6 > vk)) {
              emlrtDynamicBoundsCheckR2012b(varargout_6, 1, vk, &emlrtBCI, &st);
            }

            vk = b_sphere_points->size[0] * b_sphere_points->size[1];
            b_sphere_points->size[0] = 1;
            b_sphere_points->size[1] = cpsiz_idx_1;
            emxEnsureCapacity_real_T(&st, b_sphere_points, vk, &f_emlrtRTEI);
            for (vk = 0; vk < cpsiz_idx_1; vk++) {
              b_sphere_points->data[vk] = normals->data[(varargout_6 +
                normals->size[0] * vk) - 1];
            }

            varargin_1[0] = 1U;
            varargin_1[1] = (uint32_T)cpsiz_idx_0;
            cpsiz_idx_1 = normals->size[1];
            vk = b_normals->size[0] * b_normals->size[1];
            b_normals->size[0] = 1;
            b_normals->size[1] = cpsiz_idx_1;
            emxEnsureCapacity_real_T(&st, b_normals, vk, &f_emlrtRTEI);
            for (vk = 0; vk < cpsiz_idx_1; vk++) {
              b_normals->data[vk] = normals->data[ind + normals->size[0] * vk];
            }

            varargin_2[0] = (uint32_T)b_normals->size[0];
            varargin_2[1] = (uint32_T)b_normals->size[1];
            b_p = false;
            c_p = true;
            idx = 0;
            exitg1 = false;
            while ((!exitg1) && (idx < 2)) {
              if ((int32_T)varargin_1[idx] != (int32_T)varargin_2[idx]) {
                c_p = false;
                exitg1 = true;
              } else {
                idx++;
              }
            }

            if (c_p) {
              b_p = true;
            }

            if (b_p) {
            } else {
              vk = normals->size[1];
              if (cpsiz_idx_0 == vk) {
              } else {
                emlrtErrorWithMessageIdR2018a(&st, &i_emlrtRTEI,
                  "MATLAB:dot:InputSizeMismatch", "MATLAB:dot:InputSizeMismatch",
                  0);
              }
            }

            b_st.site = &d_emlrtRSI;
            n_t = (ptrdiff_t)cpsiz_idx_0;
            incx_t = (ptrdiff_t)1;
            incy_t = (ptrdiff_t)1;
            cI = ddot(&n_t, &qq_data[0], &incx_t, &b_sphere_points->data[0],
                      &incy_t);
            flux_value += cI;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }
          }
        }

        vk = fluxImage->size[0];
        varargout_6 = 1 + i;
        if ((varargout_6 < 1) || (varargout_6 > vk)) {
          emlrtDynamicBoundsCheckR2012b(varargout_6, 1, vk, &q_emlrtBCI, sp);
        }

        vk = fluxImage->size[1];
        idx = 1 + j;
        if ((idx < 1) || (idx > vk)) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, vk, &q_emlrtBCI, sp);
        }

        vk = fluxImage->size[2];
        cpsiz_idx_1 = 1 + k;
        if ((cpsiz_idx_1 < 1) || (cpsiz_idx_1 > vk)) {
          emlrtDynamicBoundsCheckR2012b(cpsiz_idx_1, 1, vk, &q_emlrtBCI, sp);
        }

        fluxImage->data[((varargout_6 + fluxImage->size[0] * (idx - 1)) +
                         fluxImage->size[0] * fluxImage->size[1] * (cpsiz_idx_1
          - 1)) - 1] = flux_value;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_normals);
  emxFree_real_T(&b_sphere_points);
  emxFree_real_T(&normals);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (compute_aof.c) */
