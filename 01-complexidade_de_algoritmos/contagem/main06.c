#include <stdio.h>

int funcao(int n);

int op = 0;

int main() {
  for (int n=1; n<=30; ++n) {
      op = 0;
      int res = funcao(n);
      printf("%d %d\n", n, op );
  }
  return 0;
}
