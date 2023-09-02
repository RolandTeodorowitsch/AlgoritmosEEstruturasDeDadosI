#include <iostream>

using namespace std;
	
struct Nodo {
  char letra;
  Nodo *prox;
  Nodo(char l) {  letra = l;  prox = nullptr;  cout << "Nodo " << letra << " criado..." << endl;  }
  ~Nodo() {  cout << "Nodo " << letra << " destruido..." << endl;  }
};

int main() {
  Nodo *topo = nullptr;
  for (char c = 'A'; c <= 'E'; ++c) {
      Nodo *nodo = new Nodo(c);
      nodo->prox = topo;
      topo = nodo;
  }

  for (Nodo *aux = topo; aux != nullptr; aux = aux->prox)
      cout << aux->letra << endl;

  while (topo != nullptr) {
        Nodo *aux = topo;
        topo = topo->prox;
        delete aux;
  }

  return 0;	
}
