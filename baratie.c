#include "baratie.h"
#include <string.h>

int compareOrders(const void* x, const void* y){
  const Order* a = x;
  const Order* b = y;

  if (a->dish < b->dish) //lo que quiero es comparar si es Meat, va tener preferencia sino pasa como 2da prefrencia dish, luego dessert termina con drink

  return 0;
}

int dishPriority(const char* dish){
  if(strcmp(dish, "MEAT") == 0) return 1;
  if(strcmp(dish, "FISH") == 0) return 2;
  if(strcmp(dish, "DESSERT") == 0) return 3;
  if(strcmp(dish, "DRINK") == 0) return 4;
}


