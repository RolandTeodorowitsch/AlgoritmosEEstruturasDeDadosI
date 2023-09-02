#include <iostream>

using namespace std;
	
struct Nodo {
  char letra;
  Nodo *prox;
  Nodo(char l) {  letra = l;  prox = nullptr;  cout << "Nodo " << letra << " criado..." << endl;  }
  ~Nodo() {  cout << "Nodo " << letra << " destruido..." << endl;  }
};

int main() {
  Nodo *nodo1 = new Nodo('A');
  Nodo *nodo2 = new Nodo('B');
  Nodo *nodo3 = new Nodo('C');
  Nodo *nodo4 = new Nodo('D');
  Nodo *nodo5 = new Nodo('E');

  Nodo *topo = nodo5;
  nodo5->prox = nodo4;
  nodo4->prox = nodo3;
  nodo3->prox = nodo2;
  nodo2->prox = nodo1;

  for (Nodo *aux = topo; aux != nullptr; aux = aux->prox)
      cout << aux->letra << endl;

  while (topo != nullptr) {
        Nodo *aux = topo;
        topo = topo->prox;
        delete aux;
  }

  return 0;	
}
