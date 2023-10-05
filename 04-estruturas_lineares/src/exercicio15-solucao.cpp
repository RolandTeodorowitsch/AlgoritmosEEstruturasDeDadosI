#include <iostream>
using namespace std;
struct Node {
  char info;  Node *next;
  Node(int i) {  info = i;  next = nullptr;  cout << "+ Node(" << info << ") criado..." << endl;  }
  ~Node() {  cout << "- Node(" << info << ") destruido..." << endl;  }
};

int main() {
  string s = "ADCBE";  Node *head = nullptr, *tail = nullptr;  // Criação
  for (int i=0; i<s.length(); ++i) {
      Node *aux = new Node( s[i] );
      if ( tail == nullptr ) {  head = tail = aux;  }
      else {  tail->next = aux;  tail = aux;  }
  }

  // Solução
  Node *prev_d = head,              *nodo_d = prev_d->next,
       *prev_b = head->next->next,  *nodo_b = prev_b->next;
  prev_d->next = nodo_b;     prev_b->next = nodo_d;
  Node *aux = nodo_b->next;  nodo_b->next = nodo_d->next;  nodo_d->next = aux;

  cout << "head--> ";  // Exibição
  for (Node *aux = head; aux != nullptr; aux = aux->next)
      cout << "|" << aux->info << (aux->next==nullptr?"|X| ":"|| -> ");
  cout << " <--tail" << endl;
  while (head != nullptr) {  Node *aux = head;  head = head->next;  delete aux;  }  // Desalocação
  return 0;
}
