#include "sorting.h"
#include <stdio.h>

int intComparator(const void* x, const void* y){
  const int *a = x;// int a = *(int*)x;
  const int *b = y;//int b = *(int*)y;
  if(*a < *b) return -1;
  if(*a > *b) return 1;
  return 0;
}

int main (){
  int a[] = {5, 2, 1, 3};
  insertionSort(a, 4, sizeof(int), intComparator);
  for(int i = 0; i < 4; i++)
    printf("%d, ", a[i]);
  printf("\n");
}
