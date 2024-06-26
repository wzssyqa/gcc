// PR c++/48324
// { dg-do compile { target c++11 } }

struct S {
  const int val;
  constexpr S(int i) : val(i) { }
};

constexpr const int& to_ref(int i) {
  return S(i).val; // { dg-message "reference to temporary" }
}

constexpr int ary[to_ref(98)] = { }; // { dg-error "25:size of array .ary. is not an integral" }
