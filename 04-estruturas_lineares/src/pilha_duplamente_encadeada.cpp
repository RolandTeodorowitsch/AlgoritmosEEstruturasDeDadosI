#include <iostream>

using namespace std;

struct Node {
  int info;
  Node *prev, *next;
  Node(int i) {  info = i;  prev = next = nullptr;  cout << "+ Node(" << info << ") criado..." << endl;  }
  ~Node() {  cout << "- Node(" << info << ") destruido..." << endl;  }
};

int main() {
  Node *node1 = new Node(1);
  Node *node2 = new Node(2);
  Node *node3 = new Node(3);
  Node *node4 = new Node(4);
  Node *node5 = new Node(5);

  Node *topo  = node5;      node5->next = node4;
  node4->prev = node5;      node4->next = node3;
  node3->prev = node4;      node3->next = node2;
  node2->prev = node3;      node2->next = node1;
  node1->prev = node2;      Node *base  = node1;

  for (Node *aux = topo; aux != nullptr; aux = aux->next)
      cout << aux->info << endl;
  for (Node *aux = base; aux != nullptr; aux = aux->prev)
      cout << aux->info << endl;

  while (topo != nullptr) {
        Node *aux = topo;
        topo = topo->next;
        delete aux;
  }

  return 0;	
}
