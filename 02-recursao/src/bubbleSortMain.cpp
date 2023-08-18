#include <iostream>

using namespace std;

#define TAM  10000

void bubbleSortRec(int *dados, int tam);

int estaOrdenado(int *dados, int tam) {
  for (int i=0; i<tam-1; ++i) if (dados[i] > dados[i+1]) return 0;
  return 1;
}

int main() {
  int vetor[TAM];
  for (int i=0; i<TAM; i++) vetor[i] = TAM - i; //preenche o vetor
  bubbleSortRec(vetor,TAM);
  if (estaOrdenado(vetor,TAM)) cout << "> OK" << endl;
  else cout << "> FALHOU" << endl;
  return 0;
}
