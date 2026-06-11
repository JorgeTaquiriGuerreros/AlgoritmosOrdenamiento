#include "bounty.h"
#include "sorting.h"
#include <stdio.h>

#define MAX_PIRATES 1000

int main () {
  int cant_piratas;
  Pirate piratas[MAX_PIRATES];//reserva espacio max cant piratas
  printf("Piratas?\n");
  scanf("%d",&cant_piratas);

  for(int i = 0; i < cant_piratas; i++)//programacion defensiva
    datos_pirata(&piratas[i]);
  
  insertionSort(piratas, cant_piratas, sizeof(Pirate), comparePirate);

  for(int i = 0; i < cant_piratas; i++)
    printPirate(&piratas[i]);
}//respetar formato que espera la salida del pdf


