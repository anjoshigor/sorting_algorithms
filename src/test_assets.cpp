#include "sorting_deck.h"


bool equal(int lhs[], int rhs[], int n){
  for (size_t i = 0; i < n; i++) {
    if(lhs[i] != rhs[i])
      return false;
  }

  return true;
}
