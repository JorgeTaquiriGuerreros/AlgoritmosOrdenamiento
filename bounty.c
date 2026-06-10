#include "bounty.h"

int comparePirates(const void* x, const void* y){//compara bountys
  const int *a = x;
  const int *b = y;
  if(*a < *b) return -1;
  if(*a > *b) return 1;
  return 0;
}

