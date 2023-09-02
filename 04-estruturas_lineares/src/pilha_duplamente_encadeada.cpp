#include <iostream>

using namespace std;
	
struct Nodo {
  int valor;
  Nodo *prev;
  Nodo *prox;
  Nodo(int v) {  valor = v;  prev = nullptr;  prox = nullptr;  cout << "Nodo " << valor << " criado..." << endl;  }
  ~Nodo() {  cout << "Nodo " << valor << " destruido..." << endl;  }
};

int main() {
  Nodo *nodo1 = new Nodo(1);
  Nodo *nodo2 = new Nodo(2);
  Nodo *nodo3 = new Nodo(3);
  Nodo *nodo4 = new Nodo(4);
  Nodo *nodo5 = new Nodo(5);

  Nodo *topo  = nodo5;      nodo5->prox = nodo4;
  nodo4->prev = nodo5;      nodo4->prox = nodo3;
  nodo3->prev = nodo4;      nodo3->prox = nodo2;
  nodo2->prev = nodo3;      nodo2->prox = nodo1;
  nodo1->prev = nodo2;      Nodo *base  = nodo1;

  for (Nodo *aux = topo; aux != nullptr; aux = aux->prox)
      cout << aux->valor << endl;
  for (Nodo *aux = base; aux != nullptr; aux = aux->prev)
      cout << aux->valor << endl;

  while (topo != nullptr) {
        Nodo *aux = topo;
        topo = topo->prox;
        delete aux;
  }

  return 0;	
}
