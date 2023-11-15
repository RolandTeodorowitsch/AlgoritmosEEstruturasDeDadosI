#include <iostream>
#include <sstream>

using namespace std;

struct Node {
  char info;  Node *parent;  Node *left, *right;
  Node(char i, Node *l = nullptr, Node *r = nullptr) {
    info = i;  left = l;  right = r;  parent = nullptr;
    if ( left != nullptr ) left->parent = this;
    if ( right != nullptr ) right->parent = this;
    #ifdef DEBUG
    cerr << "+ Node("<< info << ") criado..." << endl;
    #endif
  }
  ~Node() {
    if ( left != nullptr ) delete left;
    if ( right != nullptr ) delete right;
    #ifdef DEBUG
    cerr << "- Node("<< info << ") destruido..." << endl;
    #endif
  }
};

string strNode(Node *Node) {
  stringstream ss;
  if ( Node->left != nullptr ) ss << "  " << Node->info << " -- " << Node->left->info << endl << strNode(Node->left);
  if ( Node->right != nullptr ) ss << "  " << Node->info << " -- " << Node->right->info << endl << strNode(Node->right);
  return ss.str();
}

string strGraphViz(Node *root) {
  stringstream ss; 
  ss << "graph \"Arvore Binária\" {" << endl << "  Node [shape=circle]" << endl << strNode(root) << "}" << endl;
  return ss.str();
}

int degree(Node *subtree) {
  int res = 0;
  if ( subtree->left != nullptr ) ++res;
  if ( subtree->right != nullptr ) ++res;
  return res;
}

int depth(Node *subtree) {
  int res = 0;
  Node *aux = subtree->parent;
  while (aux != nullptr) {
     ++res;
     aux = aux->parent;
  }
  return res;
}
	
int height(Node *subtree) {
  if (subtree == nullptr) return -1;     // Somente pode ocorrer se a árvore estiver vazia
  int l = (subtree->left == nullptr)? 0 : (1 + height(subtree->left));
  int r = (subtree->right == nullptr)? 0 : (1 + height(subtree->right));
  return (l > r)?l:r;
}

int size(Node *subtree) {
  if (subtree == nullptr) return 0; // Somente pode ocorrer na primeira chamada,
  int res = 1;                      // ou seja, se a árvore estiver vazia
  if ( subtree->left != nullptr ) res += size(subtree->left);
  if ( subtree->right != nullptr ) res += size(subtree->right);
  return res;
}

int main() {
  Node *d = new Node('D');
  Node *b = new Node('B',d,new Node('E'));
  Node *f = new Node('F',new Node('H'),new Node('I'));
  Node *c = new Node('C',f,new Node('G'));
  Node *root = new Node('A',b,c);
  cout << strGraphViz(root);
  cout << "degree(root): " << degree(root) << " [2]" << endl;
  cout << "degree(b):    " << degree(b) << " [2]" << endl;
  cout << "degree(d):    " << degree(d) << " [0]" << endl;
  cout << "depth(root):  " << depth(root) << " [0]" << endl;
  cout << "depth(b):     " << depth(b) << " [1]" << endl;
  cout << "depth(f):     " << depth(f) << " [2]" << endl;
  cout << "size(root):   " << size(root) << " [9]" << endl;
  cout << "size(b):      " << size(b) << " [3]" << endl;
  cout << "size(c):      " << size(c) << " [5]" << endl;
  cout << "height(root): " << height(root) << " [3]" << endl;
  cout << "height(b):    " << height(b) << " [1]" << endl;
  cout << "height(c):    " << height(c) << " [2]" << endl;
  delete root;
  return 0;
}
