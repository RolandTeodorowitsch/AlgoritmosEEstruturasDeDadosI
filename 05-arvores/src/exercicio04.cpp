#include <iostream>
#include <sstream>

using namespace std;

struct Node {
  char info;  Node *child1, *child2, *child3;
  Node(char i, Node *c1 = nullptr, Node *c2 = nullptr, Node *c3 = nullptr) {
    info = i;  child1 = c1;  child2 = c2;  child3 = c3;
    cerr << "+ Node("<< info << ") criado..." << endl;
  }
  ~Node() { cerr << "- Node("<< info << ") destruido..." << endl; }	
};

string strNode(Node *node) {
  stringstream ss;
  if ( node->child1 != nullptr ) ss << "  " << node->info << " -- " << node->child1->info << endl << strNode(node->child1);
  if ( node->child2 != nullptr ) ss << "  " << node->info << " -- " << node->child2->info << endl << strNode(node->child2);
  if ( node->child3 != nullptr ) ss << "  " << node->info << " -- " << node->child3->info << endl << strNode(node->child3);
  return ss.str();
}

string strGraphViz(Node *root) {
  stringstream ss;
  ss << "graph Arvore {" << endl << "  node [shape=circle]" << endl << strNode(root) << "}" << endl;
  return ss.str();
}
	
void clean(Node *root) {
  if ( root->child1 != nullptr ) clean(root->child1);
  if ( root->child2 != nullptr ) clean(root->child2);
  if ( root->child3 != nullptr ) clean(root->child3);
  delete root;
}

int main() {
  Node    *e = new Node('E'),   *f = new Node('F'),       *g = new Node('G'),       *k = new Node('K'),
          *i = new Node('I'),   *j = new Node('J'),       *b = new Node('B',e,f),   *c = new Node('C',g),
          *h = new Node('H',k), *d = new Node('D',h,i,j), *a = new Node('A',b,c,d);
  cout << strGraphViz(a);  clean(a);
  return 0;
}
