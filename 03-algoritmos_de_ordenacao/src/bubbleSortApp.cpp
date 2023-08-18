#include <iostream>
#include <sys/time.h>

using namespace std;

class Pessoa {
private:
  string nome;
  double altura, peso;
public:
  Pessoa(string n, double a, double p) {
    nome = n;
    altura = a;
    peso = p;
  }
  string obtemNome() { return nome; }
  double obtemAltura() { return altura; }
  double obtemPeso() { return peso; }
};

void bubbleSort(Pessoa *dados, int tam) {
  int trocou;
  do {
     trocou = 0;
     --tam;
     for (int i=0; i<tam; ++i) {
         if (dados[i].obtemAltura() > dados[i+1].obtemAltura()) {
            Pessoa aux = dados[i];
            dados[i] = dados[i+1];
            dados[i+1] = aux;
            trocou = 1;
         }
     }
  }  while (trocou);
}

int main() {
  Pessoa vetor[] = {
    Pessoa("Alberto", 1.9, 98.0),
    Pessoa("Beatriz", 1.7, 75.0),
    Pessoa("Claudio", 1.7, 70.0),
    Pessoa("Doneide", 1.6, 50.0),
    Pessoa("Everton", 1.8, 85.0)
  };
  int tam = sizeof(vetor) / sizeof(Pessoa);
  bubbleSort(vetor,tam);
  for (int i=0; i<tam; ++i)
      cout << vetor[i].obtemNome() << " / " << vetor[i].obtemAltura() << " / " << vetor[i].obtemPeso() << endl;	
  return 0;
}
