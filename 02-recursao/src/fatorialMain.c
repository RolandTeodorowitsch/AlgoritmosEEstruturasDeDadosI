#include <stdio.h>

unsigned int fatorial(unsigned int n);
unsigned int fatorialRec(unsigned int n);

int main() {
  for (unsigned int i=0; i<10; ++i)
      printf("%u\t%u\t%u\n", i, fatorial(i), fatorialRec(i));
  return 0;
}
