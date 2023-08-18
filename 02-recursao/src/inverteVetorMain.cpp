#include <iostream>

#define TAM  100

using namespace std;

void inverteVetor(int *dados, int ini, int fim);
void inverteVetorRec(int *dados, int ini, int fim);

int main() {
  int vetor[TAM];
  for (int k=1; k<TAM; ++k) {
      for (int i=0; i<k; i++) vetor[i] = i; //preenche o vetor
      inverteVetor(vetor,0,k-1);
      inverteVetorRec(vetor,0,k-1);
      for (int i=0; i<k; i++)
          if (vetor[i] != i) {
             cout << "> FALHOU" << endl;
             return 1;
          }
  }
  cout << "> OK" << endl;
  return 0;
}
