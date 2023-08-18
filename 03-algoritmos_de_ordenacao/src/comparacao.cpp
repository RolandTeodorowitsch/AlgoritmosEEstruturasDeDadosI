#include <iostream>

using namespace std;

void imprimeVetor(int *dados, int tam) {
  cout << "\\multicolumn{1}{|C|}{" << dados[0] << "}";
  for (int i=1; i<tam; ++i)
      cout << " & \\multicolumn{1}{|C|}{" << dados[i] << "}";
  cout << "\\\\" << endl;
}

void bubbleSort(int *dados, int tam) {
  int t = tam;
  int trocou;
  do {
     trocou = 0;
     --tam;
     for (int i=0; i<tam; ++i) {
         if (dados[i] > dados[i+1]) {
            int aux = dados[i];
            dados[i] = dados[i+1];
            dados[i+1] = aux;
            trocou = 1;
         }
     }
     imprimeVetor(dados,t);
  }  while (trocou);
}

void selectionSort(int *dados, int tam) {
  for (int i=0; i<tam-1; ++i) {
      int men = i;
      for (int j=i+1; j<tam; ++j)
          if ( dados[j] < dados[men] ) men = j;
      if ( men != i ) {
         int aux = dados[men];
         dados[men] = dados[i];
         dados[i] = aux;
      }
      imprimeVetor(dados,tam);
  }
}

void insertionSort(int *dados, int tam) {
  for (int i=1; i<tam; ++i) {
      int base = dados[i];
      int j = i-1;
      while ( j>=0 && base < dados[j] ) {
            dados[j+1] = dados[j];
            --j;
      }
      dados[j+1] = base;
      imprimeVetor(dados,tam);
  }
}

int main() {
  int v[] = { 5, 7, 8, 1, 10, 9, 4, 6, 3, 2 };
  int tam = sizeof(v) / sizeof(int);
  int vet[tam];

  for (int i=0; i<tam; ++i) vet[i] = v[i];
  imprimeVetor(vet,tam);
  bubbleSort(vet,tam);
  cout << endl;
  
  for (int i=0; i<tam; ++i) vet[i] = v[i];
  imprimeVetor(vet,tam);
  selectionSort(vet,tam);
  imprimeVetor(vet,tam);
  cout << endl;
  
  for (int i=0; i<tam; ++i) vet[i] = v[i];
  imprimeVetor(vet,tam);
  insertionSort(vet,tam);
  cout << endl;
  
  return 0;
}
