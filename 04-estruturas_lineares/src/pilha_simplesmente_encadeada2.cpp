#include <iostream>

using namespace std;

struct Node {
  char info;
  Node *next;
  Node(char i) {  info = i;  next = nullptr;  cout << "+ Node(" << info << ") criado..." << endl;  }
  ~Node() {  cout << "- Node(" << info << ") destruido..." << endl;  }
};

int main() {
  Node *topo = nullptr;
  for (char c = 'A'; c <= 'E'; ++c) {
      Node *aux = new Node(c);
      aux->next = topo;
      topo = aux;
  }

  for (Node *aux = topo; aux != nullptr; aux = aux->next)
      cout << aux->info << endl;

  while (topo != nullptr) {
        Node *aux = topo;
        topo = topo->next;
        delete aux;
  }

  return 0;
}
