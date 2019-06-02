/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * compute_aof.h
 *
 * Code generation for function 'compute_aof'
 *
 */

#ifndef COMPUTE_AOF_H
#define COMPUTE_AOF_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "compute_aof_types.h"

/* Function Declarations */
extern void compute_aof(const emlrtStack *sp, const emxArray_real32_T *D, const
  emxArray_uint32_T *IDX, emxArray_real_T *sphere_points, real_T epsilon,
  emxArray_real_T *fluxImage);

#endif

/* End of code generation (compute_aof.h) */
