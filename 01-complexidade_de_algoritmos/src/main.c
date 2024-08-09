#include <stdio.h>

int funcao(int n);

int main() {
  for (int n=1; n<=TAM; ++n)
      printf("%d %d\n", n, funcao(n) );
  return 0;
}
