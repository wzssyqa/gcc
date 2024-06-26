/* { dg-do compile { target { powerpc*-*-* } } } */
/* { dg-require-effective-target powerpc_vsx_ok } */
/* { dg-options "-mdejagnu-cpu=power8 -mvsx" } */
/* { dg-require-effective-target has_arch_ppc64 } */

/* This test should succeed only on 64-bit configurations.  */
#include <altivec.h>

double
insert_exponent (double *significand_p,
		 unsigned long long int *exponent_p)
{
  double significand = *significand_p;
  unsigned long long int exponent = *exponent_p;

  return __builtin_vec_scalar_insert_exp (significand, exponent); /* { dg-error "'__builtin_vsx_scalar_insert_exp_dp' requires" } */
}
