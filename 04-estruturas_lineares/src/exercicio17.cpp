#include <iostream>
using namespace std;
struct Node {
  int info;  Node *next;
  Node(int i) {  info = i;  next = nullptr;  cout << "+ Node(" << info << ") criado..." << endl;  }
  ~Node() {  cout << "- Node(" << info << ") destruido..." << endl;  }
};

void reverse(Node **head, Node **tail) {
  Node *newHead = nullptr, *newTail = nullptr;
  while ( *head != nullptr ) {
        Node *aux = *head;  *head = (*head)->next;  // Retira o primeiro da lista
        aux->next = newHead;  newHead = aux;  if ( newTail == nullptr ) newTail = aux;  // Insere ele no início da "nova" lista
  }
  *head = newHead;  *tail = newTail;
}

int main() {
  Node *head = nullptr, *tail = nullptr;  // Criação
  for (int i=10; i<=50; i+=10) {  // Insere 10, 20, 30, 40, 50 pelo final da lista
      Node *aux = new Node( i ); 
      if ( tail == nullptr ) {  head = tail = aux;  }
      else {  tail->next = aux;  tail = aux;  }
  }
  reverse(&head, &tail);
  cout << "head--> ";  // Exibição a partir do início: 50, 40, 30, 20, 10
  for (Node *aux = head; aux != nullptr; aux = aux->next)
      cout << "|" << aux->info << (aux->next==nullptr?"|X| ":"|| -> ");
  cout << " <--tail" << endl;
  while (head != nullptr) {  Node *aux = head;  head = head->next;  delete aux;  }  // Desalocação
  return 0;
}
