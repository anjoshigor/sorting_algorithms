#ifndef SORTING_DECK_H
#define  SORTING_DECK_H

/**ALGORITHMS**/
void insertion (int vet[], int n);
void selection (int vet[], int n);
void heap_sort(int vet[], int n);
void merge_sort(int vet[], int n);
void quicksort(int vet[], int n);


/**TEST ASSETS**/
void switch_algorithm(int vet[], int n, int opt);
bool equal(int lhs[], int rhs[], int n);
bool is_max_heap(int vet[], int n);
void print(int vet[], int n);
bool is_sorted(int vet[], int n);
void random_vector(int* vet, int n);

#endif
