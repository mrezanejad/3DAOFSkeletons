/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * compute_gradient_vector_field.h
 *
 * Code generation for function 'compute_gradient_vector_field'
 *
 */

#ifndef COMPUTE_GRADIENT_VECTOR_FIELD_H
#define COMPUTE_GRADIENT_VECTOR_FIELD_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "compute_gradient_vector_field_types.h"

/* Function Declarations */
extern void compute_gradient_vector_field(const emlrtStack *sp, const
  emxArray_real_T *binaryImage, emxArray_real32_T *D, emxArray_uint32_T *IDX);

#endif

/* End of code generation (compute_gradient_vector_field.h) */
