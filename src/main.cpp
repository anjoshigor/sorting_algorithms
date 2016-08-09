#include "../sorting_deck.hpp"
#include <iostream>
#include <ctime>
#include <random>

int main(int argc, char const *argv[]) {

  std::cout << "=========\nWelcome to sortig deck test: \n press 1 to manually create a vector\n press 2 to create a random vector\n=========" << std::endl;
  int opt;
  std::cout << "[sorting_deck] >>: ";
  std::cin >> opt;
  if(opt==1){
    int n;
    std::cout << "[sorting_deck] Size of vector >>: ";
    std::cin >> n;
    int vector[n];
    std::cout << "Input" << std::endl;
    for (int i = 0; i < n; i++) {
      int v;
      std::cout << "[sorting_deck] >>: ";
      std::cin >> v;
      vector[i]=v;
    }

  std::cout << "Choose an algorithm: \n1) Insertion \t 2) Selection\n3) Merge \t 4) Quick \t 5) Heap" << std::endl;
  std::cout << "[sorting_deck] >>: ";
  std::cin >> opt;

  switch (opt) {
    case 1:
    insertion(vector,n);
    break;

    case 2:
    selection(vector,n);
    break;

    case 3:
    merge_sort(vector,n);
    break;

    default:
    case 4:
    quicksort(vector,n);
    break;

    case 5:
    heap_sort(vector,n);
    break;
  }

  std::cout << "Output" << std::endl;
  print(vector,n);

  } else if(opt==2){
    int n;
    std::cout << "Size of vector [sorting_deck] >>:";
    std::cin >> n;
    int vector[n];
    random_vector(vector,n);

    std::cout << "Choose an algorithm: \n1) Insertion \t 2) Selection\n3) Merge \t 4) Quick \t 5) Heap" << std::endl;
    std::cout << "[sorting_deck] >>: ";
    std::cin >> opt;

    switch (opt) {
      case 1:
      insertion(vector,n);
      break;

      case 2:
      selection(vector,n);
      break;

      case 3:
      merge_sort(vector,n);
      break;

      default:
      case 4:
      quicksort(vector,n);
      break;

      case 5:
      heap_sort(vector,n);
      break;
    }


      std::cout << "Output" << std::endl;
      print(vector,n);
  }

  return 0;
}
