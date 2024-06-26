// PR c++/108566
// { dg-do compile { target c++20 } }
// { dg-additional-options "-fabi-version=18 -fabi-compat-version=18" }

template<typename T>
struct wrapper1 {
  union {
    union {
      T RightName;
    };
  };
};

template<auto tparam> void dummy(){}

void uses() {
  dummy<wrapper1<double>{123.0}>();
}

// { dg-final { scan-assembler "_Z5dummyIXtl8wrapper1IdEtlNS1_Ut_Edi9RightNametlNS2_Ut_Edi9RightNameLd405ec00000000000EEEEEEvv" } }
