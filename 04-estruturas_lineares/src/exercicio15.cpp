#include <iostream>
using namespace std;
struct Node {
  char info;  Node *next;
  Node(char i) {  info = i;  next = nullptr;  cout << "+ Node(" << info << ") criado..." << endl;  }
  ~Node() {  cout << "- Node(" << info << ") destruido..." << endl;  }
};

int main() {
  string s = "ADCBE";  Node *head = nullptr, *tail = nullptr;  // Criação
  for (int i=0; i<s.length(); ++i) {
      Node *aux = new Node( s[i] );
      if ( tail == nullptr ) {  head = tail = aux;  }
      else {  tail->next = aux;  tail = aux;  }
  }

  // Coloque a solução aqui!

  cout << "head--> ";  // Exibição
  for (Node *aux = head; aux != nullptr; aux = aux->next)
      cout << "|" << aux->info << (aux->next==nullptr?"|X| ":"|| -> ");
  cout << " <--tail" << endl;
  while (head != nullptr) {  Node *aux = head;  head = head->next;  delete aux;  }  // Desalocação
  return 0;
}
