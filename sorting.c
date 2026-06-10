#include "sorting.h"

void swapBytes(void* x, void* y, int size){//se usa para tratar distintas longitudes de datosi o tipos de datos ex: char = 1 byte
  unsigned char* a = x;
  unsigned char* b = y;

  for(int i = 0; i < size; i++){
    unsigned char temp = a[i];
    a[i] = b[i];
    b[i] = temp;
  }//a cada byte lo intercambiamos 1 por 1
}

void insertionSort(void* base, int n, int size, Comparator cmp){//recibes variable en una funcion y se usa como funcion
  unsigned char* a = base;

  for(int i = 1; i < n; i++){//va desde 1, porque 0 ya esta ordenado
    int j = i;

    while(j > 0 && cmp(a + j * size, a + (j - 1) * size) < 0){ //j reduce, usa funcioncion comparadora, se le da 2 valores a y un desplazamiento, y hace swap hasta que este ordenado y al final retorna
      swapBytes(a + j * size, a + (j - 1) * size, size);
      j--;//siempre al final while modificacion variable
    }
  }
}
