#include <stdio.h>

int funcao(int n);

int main() {
  for (int n=1; n<=1000; ++n)
      printf("%d %d\n", n, funcao(n) );
  return 0;
}
