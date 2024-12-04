#include <stdio.h>

int soma_v(int v) {
  int seq = 0;
  int op = 0;
  for (int i=1; i<=v; ++i) {
      int soma = i;
      for (int j=i+1; soma <= v; ++j) {
          if (soma == v)
             seq++;
          soma += j;
	  ++op;
      }	
  }
  // return seq;
  return op;
}

int main() {
  // printf("%d\n", soma_v(15) );
  for (int i=1; i<=10000; ++i)
      printf("%d %d\n", i, soma_v(i) );
  return 0;
}

