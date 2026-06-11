#ifndef BARATIE_H
#define BARATIE_H
#define MAX_TEXT 40
typedef struct{
  char customer[MAX_TEXT];
  char dish[MAX_TEXT];
  int arrivalOrder;
} Order;

int compareOrders(const void* x, const void* y);
int dishPriority(const char* dish);
int printOrders(const void* o);
#endif
