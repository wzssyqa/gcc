/* { dg-do run { target { riscv_v } } } */
/* { dg-additional-options "-mrvv-vector-bits=scalable -fno-vect-cost-model -ffast-math" } */

#include "cond_fms_fnms-2.c"

#define FACTOR 17
#define N 99

#define TEST_LOOP(TYPE, NAME, OP)				\
  {								\
    TYPE r[N], a[N], b[N], pred[N];				\
    for (int i = 0; i < N; ++i)					\
      {								\
	a[i] = (i & 1 ? i : 3 * i);				\
	b[i] = (i >> 4) << (i & 15);				\
	pred[i] = i % 3 < i % 5;				\
	asm volatile ("" ::: "memory");				\
      }								\
    test_##TYPE##_##NAME (r, a, b, FACTOR, pred, N);		\
    for (int i = 0; i < N; ++i)					\
      {								\
	TYPE expected = (pred[i] != 1				\
			 ? -a[i] OP b[i] * (TYPE) FACTOR	\
			 : (TYPE) FACTOR);			\
	if (r[i] != expected)					\
	  __builtin_abort ();					\
	asm volatile ("" ::: "memory");				\
      }								\
  }

int
main (void)
{
  TEST_ALL (TEST_LOOP)
  return 0;
}
