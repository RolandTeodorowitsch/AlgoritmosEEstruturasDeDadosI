#include <iostream>

using namespace std;
	
struct Nodo {
  char letra;
  Nodo *prox;
  Nodo *prev;
  Nodo(char l) {  letra = l;  prev = nullptr;  prox = nullptr;  cout << "Nodo " << letra << " criado..." << endl;  }
  ~Nodo() {  cout << "Nodo " << letra << " destruido..." << endl;  }
};

int main() {
  Nodo *nodo1 = new Nodo('A');
  Nodo *nodo2 = new Nodo('B');
  Nodo *nodo3 = new Nodo('C');
  Nodo *nodo4 = new Nodo('D');
  Nodo *nodo5 = new Nodo('E');

  Nodo *primeiro = nodo1;   nodo1->prox = nodo2;
  nodo2->prev = nodo1;      nodo2->prox = nodo3;
  nodo3->prev = nodo2;      nodo3->prox = nodo4;
  nodo4->prev = nodo3;      nodo4->prox = nodo5;
  nodo5->prev = nodo4;      Nodo *ultimo = nodo5;

  for (Nodo *aux = primeiro; aux != nullptr; aux = aux->prox)
      cout << aux->letra << endl;
  for (Nodo *aux = ultimo; aux != nullptr; aux = aux->prev)
      cout << aux->letra << endl;

  while (primeiro != nullptr) {
        Nodo *aux = primeiro;
        primeiro = primeiro->prox;
        delete aux;
  }

  return 0;	
}
