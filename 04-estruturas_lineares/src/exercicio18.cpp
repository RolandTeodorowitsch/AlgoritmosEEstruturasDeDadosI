#include <iostream>
using namespace std;
struct Node {
  int info;  Node *prev, *next;
  Node(int i) {  info = i;  prev = next = nullptr;  cout << "+ Node(" << info << ") criado..." << endl;  }
  ~Node() {  cout << "- Node(" << info << ") destruido..." << endl;  }
};

void reverse(Node **head, Node **tail) {
  Node *aux = *head;
  while ( aux != nullptr ) {
        Node *sw = aux->prev;  aux->prev = aux->next;  aux->next = sw;
        aux = aux->prev;
  }
  Node *sw = *head;  *head = *tail;  *tail = sw;
}

int main() {
  Node *head = nullptr, *tail = nullptr;  // Criação
  for (int i=10; i<=50; i+=10) {  // Insere 10, 20, 30, 40, 50 pelo final da lista
      Node *aux = new Node( i ); 
      if ( tail == nullptr ) {  head = tail = aux;  }
      else {  aux->prev = tail; tail->next = aux;  tail = aux;  }
  }
  reverse(&head, &tail);
  cout << "head--> ";  // Exibição a partir do início: 50, 40, 30, 20, 10
  for (Node *aux = head; aux != nullptr; aux = aux->next)	
      cout << (aux->prev==nullptr?"|X|":" <==> ||") << aux->info << (aux->next==nullptr?"|X| ":"||");
  cout << " <--tail" << endl;
  cout << "tail--> ";  // Exibição a partir do final: 10, 20, 30, 40, 50
  for (Node *aux = tail; aux != nullptr; aux = aux->prev)
      cout << (aux->next==nullptr?"|X|":" <==> ||") << aux->info << (aux->prev==nullptr?"|X| ":"||");
  cout << " <--head" << endl;
  while (head != nullptr) {  Node *aux = head;  head = head->next;  delete aux;  }  // Desalocação
  return 0;
}
