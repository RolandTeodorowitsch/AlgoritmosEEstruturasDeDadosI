#include <stdio.h>
void contagemRegressivaRec(int n) {
  if (n == 0) return;
  printf("%d\n", n);
  contagemRegressivaRec(n-1);
}
