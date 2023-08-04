#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define INI  1000
#define FIM 10000
#define INC    10

void bubble_sort(int *dados, int tam);

int esta_ordenado(int *dados, int tam) {
  for (int i=0; i<tam-1; ++i) if (dados[i] > dados[i+1]) return 0;
  return 1;
}

int main() {
  struct timeval antes, depois;
  int *vetor = malloc( sizeof(int) * FIM );
  if (vetor == NULL) return 1;
  for (int total=INI; total<=FIM; total+=INC) {
      for (int pos=0; pos<total; pos++) vetor[pos] = total - pos; //preenche o vetor
      gettimeofday(&antes, NULL);
      bubble_sort(vetor,total);
      gettimeofday(&depois, NULL);
      if (!esta_ordenado(vetor,total)) return 1;
      unsigned long microssegundos = (depois.tv_sec - antes.tv_sec) * 1000000 + depois.tv_usec - antes.tv_usec;
      printf("%d %lu\n", total, microssegundos	);
  }
  free(vetor);
  return 0;
}
