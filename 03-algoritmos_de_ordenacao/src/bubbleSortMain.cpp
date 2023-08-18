#include <iostream>
#include <sys/time.h>

#define TAM  10000

using namespace std;

void bubbleSort(int *dados, int tam);

int estaOrdenado(int *dados, int tam) {
  for (int i=0; i<tam-1; ++i) if (dados[i] > dados[i+1]) return 0;
  return 1;
}

int main() {
  int vetor[TAM];
  struct timeval antes, depois;
  for (int i=0; i<TAM; i++) vetor[i] = TAM - i; //preenche o vetor
  gettimeofday(&antes, NULL);
  bubbleSort(vetor,TAM);
  gettimeofday(&depois, NULL);
  unsigned long microssegundos = (depois.tv_sec - antes.tv_sec) * 1000000 + depois.tv_usec - antes.tv_usec;
  if (estaOrdenado(vetor,TAM)) cout << "> OK (" << microssegundos << ")" << endl;
  else cout << "> FALHOU" << endl;
  return 0;
}
