#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define INI 1000000
#define FIM 8000000
#define INC 10000

int pesquisa_linear(int *dados, int tam, int valor);

int main() {
  struct timeval antes, depois;
  int *vetor = malloc( sizeof(int) * FIM );
  if (vetor == NULL) return 1;
  for (int i=0; i<FIM; i++) vetor[i] = i; //preenche o vetor
  for (int total=INI; total<=FIM; total+=INC) {
      unsigned long min;
      for (int j=0; j<10; ++j) {
          gettimeofday(&antes, NULL);
          int loc = pesquisa_linear(vetor, total, total); //pior caso: elemento NAO existe
          gettimeofday(&depois, NULL);
          if (loc != -1) return 1;
          unsigned long microssegundos = (depois.tv_sec - antes.tv_sec) * 1000000 + depois.tv_usec - antes.tv_usec;
          if (j == 0 || microssegundos < min) min = microssegundos;
      }
      printf("%d %lu\n", total, min);
  }
  free(vetor);
  return 0;
}
