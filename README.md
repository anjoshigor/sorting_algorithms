# sorting_algorithms
A sorting_algorithms deck to use in Algorithm's project and analysis course at UFPB

### To use the deck:
1. Create a main.cpp file at /src folder;
2. Include the header
```
  #include "sorting_deck.h"
```
3. Compile and Run using `g++` or use `make`

##### Testing:
1. run `make` on project folder


##### Example Usage
```cpp
int arr[10] = {9,8,7,6,5,4,3,2,1,0};  
quicksort(arr,10);  
print(arr,n);
```
the same is apllyied to other algorithms


##### Test Asset Usage
Sometimes looking to an array isn't the best way to determine whether an array is sorted or not. You can use the `is_sorted()` and `equal()` method to solve that:

```cpp
int arr[10] = {9,8,7,6,5,4,3,2,1,0};  
merge_sort(arr,10);  
if (is_sorted(arr,10)) //do something
```
or

```cpp
int arr[10] = {9,8,7,6,5,4,3,2,1,0};  
int arr_result[10] = {0,1,2,3,4,5,6,7,8,9};

heap_sort(arr,10);  
if (equal(arr,arr_result,10)) //do something
```
**Have fun!**  :metal:
\+ info: higor.araujo.anjos@gmail.com
