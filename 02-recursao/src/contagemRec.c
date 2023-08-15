#include <stdio.h>
void contagemRec(int n) {
  if (n == 0) return;
  contagemRec(n-1);
  printf("%d\n", n);
}
