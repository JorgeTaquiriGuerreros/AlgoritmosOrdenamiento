#ifndef BOUNTY_H
#define BOUNTY_H
#define STRING_SIZE 40 //constante simbolica

typedef struct{
  char name[STRING_SIZE];
  long long bounty;//para anticipar si la recompensa puede ser mas grande, puede ser long long mejor al long int, long long es mayor al long
  int age;
  char crew[STRING_SIZE];
} Pirate;

int comparePirates(const void* x, const void* y);
#endif
