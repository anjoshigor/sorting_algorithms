#include "../sorting_deck.hpp"
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

void random_vector(int* vet, int n){
  srand(time(NULL));

  for (int i = 0; i < n; i++) {
    vet[i] = rand() % 10000;
  }

}

void switch_algorithm(int vet[], int n, int opt){
  switch (opt) {
    case 1:
    insertion(vet,n);
    break;

    case 2:
    selection(vet,n);
    break;

    case 3:
    merge_sort(vet,n);
    break;

    default:
    case 4:
    quicksort(vet,n);
    break;

    case 5:
    heap_sort(vet,n);
    break;
  }
}
