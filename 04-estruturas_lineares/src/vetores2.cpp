#include <iostream>

using namespace std;

int main() {

  const int TAM = 10;
  int *vetorExpansivel = new int[TAM];  // VETOR PARCIALMENTE PREENCHIDO DINAMICAMENTE EXPANSIVEL
  int tamAtual = 0, tam_max = TAM;
  for (int i=0; i<TAM+5; ++i) {
      if ( tamAtual == tam_max) {
         int *novo = new int[tam_max + TAM];
         for (int j=0; j<tamAtual; ++j) novo[j] = vetorExpansivel[j];
         delete[] vetorExpansivel;
         vetorExpansivel = novo;
         tam_max += TAM;
      }
      vetorExpansivel[ tamAtual++ ] = i+1;
  }
  for (int i=0; i<tamAtual; ++i) cout << vetorExpansivel[i] << endl;
  delete[] vetorExpansivel;

  return 0;
}
