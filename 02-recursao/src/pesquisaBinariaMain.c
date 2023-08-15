#include <stdio.h>

int pesquisaBinaria(int *dados, int ini, int fim, int valor);
int pesquisaBinariaRec(int *dados, int ini, int fim, int valor);

int main() {
  int vet[] = {2,4,6,8,10,12,14,16,18,20};
  int tam = sizeof(vet) / sizeof(int);
  for (int i=1; i<=2*tam+1; ++i)
      printf("%d\t%d\t%d\n", i, pesquisaBinaria(vet,0,tam-1,i), pesquisaBinariaRec(vet,0,tam-1,i));
  return 0;
}
