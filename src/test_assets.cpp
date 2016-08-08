#include "../sorting_deck.h"
#include <iostream>

bool equal(int lhs[], int rhs[], int n){
  for (short i = 0; i < n; i++) {
    if(lhs[i] != rhs[i])
      return false;
  }

  return true;
}

bool is_max_heap(int vet[], int n){
  for (short i = 0; i < n/2; i++) {

    if((vet[i]<vet[2*i]) || (vet[i]<vet[2*i+1]))
      return false;

  }

  return true;
}

bool is_sorted(int vet[], int n){
  if(vet[0]>vet[n-1])
    return false;

  for (int i = n-1; i<0; i--) {
    if(vet[i] < vet[--i])
      return false;
  }

  return true;
}

void print(int vet[], int n){
  for (short i = 0; i < n; i++) {
    std::cout << vet[i] << " ";
  }
   std::cout<<std::endl;
}
