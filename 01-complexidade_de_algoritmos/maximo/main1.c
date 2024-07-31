#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define INI 10000
#define FIM 100000
#define INC 100

int maximo(TIPO *dados, int tam);

int main() {
  struct timeval antes, depois;
  TIPO *vetor = malloc( sizeof(TIPO) * FIM );
  if (vetor == NULL) return 1;
  for (int i=0; i<FIM; i++) vetor[i] = (TIPO)i; //preenche o vetor (pior caso)
  for (int total=INI; total<=FIM; total+=INC) {
      unsigned long min;
      for (int j=0; j<10; ++j) {
          gettimeofday(&antes, NULL);
          TIPO max = maximo(vetor, total);
          gettimeofday(&depois, NULL);
          if (max != (TIPO)(total-1)) return 1;
          unsigned long microssegundos = (depois.tv_sec - antes.tv_sec) * 1000000 + depois.tv_usec - antes.tv_usec;
          if (j == 0 || microssegundos < min) min = microssegundos;
      }
      printf("%d %lu\n", total, min);
  }
  free(vetor);
  return 0;
}
