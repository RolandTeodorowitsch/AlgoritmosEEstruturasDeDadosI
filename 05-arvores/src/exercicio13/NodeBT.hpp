#ifndef _NODEBT_HPP
#define _NODEBT_HPP
#ifdef DEBUG
#include <iostream>
#endif
#include <vector>
#include <sstream>

using namespace std;

template <typename T>
class NodeBT {
private:
  T info;   NodeBT *parent, *left, *right;
  string strGraphVizNode(NodeBT const *node) const;  // Imprime as conexões de um nodo com seus filhos em GraphViz
public:
  NodeBT(T const &i);                    // Cria um nodo com a informalção i, e sem pai
  ~NodeBT();                             // Destrói o nodo atual e seus descendentes
  T getInfo() const;                     // Retorna a informação armazenada no nodo atual
  void setInfo(T &i);                    // Altera a informação armazenada no nodo atual
  NodeBT *getParent() const;             // Retorna a referência para o nodo-pai do nodo atual
  NodeBT *getLeft() const;               // Retorna a referência para o nodo-fiho/subárvore da esquerda
  NodeBT *getRight() const;              // Retorna a referência para o nodo-fiho/subárvore da direita
  void setLeft(NodeBT *subtree);         // Adiciona uma subárvore como subárvore da esquerda do nodo atual
  void setRight(NodeBT *subtree);        // Adiciona uma subárvore como subárvore da direita do nodo atual
  void removeLeft();                     // Remove a subárvore da esquerda (desalocando-a, se necessário)
  void removeRight();                    // Remove a subárvore da direita (desalocando-a, se necessário)
  bool isRoot() const;                   // Retorna true se o nodo for raiz
  bool isInternal() const;               // Retorna true se o nodo for interno
  bool isExternal() const;               // Retorna true se o nodo for externo
  int degree() const;                    // Retorna o grau (número de filhos) do nodo atual
  int depth() const;                     // Retorna o nível do nodo atual
  int height() const;                    // Retorna a altura da subárvore/árvore a partir do nodo atual
  int size() const;                      // Retorna o número de nodos a partir do nodo atual
  bool contains(T &i) const;             // Retorna true se o nodo atual ou algum de seus descendentes contivere i
  NodeBT const *find(T const &i) const;  // Retorna a referência para o nodo, a partir do atual, que contém i ou nullptr
  string strGraphViz() const;            // Gera uma representação da árvore a partir do nodo atual no formato GraphViz
  string preorder() const;               // Gera uma cadeia de caracteres (um nodo por linha) em pré-ordem
  string postorder() const;              // Gera uma cadeia de caracteres (um nodo por linha) em pós-ordem
  string inorder() const;                // Gera uma cadeia de caracteres (um nodo por linha) em in-ordem
  string levelorder() const;             // Gera uma cadeia de caracteres (um nodo por linha) em largura
};

template <typename T>
NodeBT<T>::NodeBT(T const &i) {
  info = i;  parent = left = right = nullptr;
  #ifdef DEBUG
  cerr << "+ NodeBT<>(" << info << ") created..." << endl;
  #endif
}

template <typename T>
NodeBT<T>::~NodeBT() {
  delete left;  delete right;
  #ifdef DEBUG
  cerr << "- NodeBT<>(" << info << ") deleted..." << endl;
  #endif
}

template <typename T> T NodeBT<T>::getInfo() const { return info; }
template <typename T> void NodeBT<T>::setInfo(T &i) { info = i; }
template <typename T> NodeBT<T> *NodeBT<T>::getParent() const { return parent; }
template <typename T> NodeBT<T> *NodeBT<T>::getLeft() const { return left; }
template <typename T> NodeBT<T> *NodeBT<T>::getRight() const { return right; }

template <typename T> void NodeBT<T>::setLeft(NodeBT *subtree) {
  left = subtree;
  if (subtree != nullptr) subtree->parent = this;
}

template <typename T> void NodeBT<T>::setRight(NodeBT *subtree) {
  right = subtree;
  if (subtree != nullptr) subtree->parent = this;
}

template <typename T> void NodeBT<T>::removeLeft() { if (left != nullptr) { delete left;  left = nullptr; } }
template <typename T> void NodeBT<T>::removeRight() { if (right != nullptr) { delete right;  right = nullptr; } }
template <typename T> bool NodeBT<T>::isRoot() const { return parent == nullptr; }
template <typename T> bool NodeBT<T>::isInternal() const { return parent != nullptr && (left!=nullptr || right!=nullptr); }
template <typename T> bool NodeBT<T>::isExternal() const { return left==nullptr && right==nullptr; }

template <typename T> int NodeBT<T>::degree() const {
  int res = 0;
  if (left != nullptr) ++res;
  if (right != nullptr) ++res;
  return res;
}

template <typename T>
int NodeBT<T>::depth() const {
  int res = 0;
  NodeBT *aux = parent;
  while (aux != nullptr) {
     ++res;
     aux = aux->getParent();
  }
  return res;
}

template <typename T>
int NodeBT<T>::height() const {
  int l = (left == nullptr)? 0 : (1+left->height());
  int r = (right == nullptr)? 0 : (1+right->height());
  return (l>r)?l:r;
}

template <typename T>
int NodeBT<T>::size() const {
  int res = 1;
  if (left != nullptr) res += left->size();
  if (right != nullptr) res += right->size();
  return res;
}

template <typename T>
bool NodeBT<T>::contains(T &i) const {
  if ( info == i ) return true;
  if ( left != nullptr && left->contains(i) ) return true;
  if ( right != nullptr && right->contains(i) ) return true;
  return false;
}
	
template <typename T>
NodeBT<T> const *NodeBT<T>::find(T const &i) const {
  if ( info == i ) return this;
  if ( left != nullptr ) {
     NodeBT const *child = left->find(i);
     if ( child != nullptr ) return child;
  }
  if ( right != nullptr ) {
     NodeBT const *child = right->find(i);
     if ( child != nullptr ) return child;
  }
  return nullptr;
}

template <typename T>
string NodeBT<T>::strGraphVizNode(NodeBT const *node) const {
  stringstream ss;
  if ( node->left != nullptr ) ss << "  " << node->info << " -- " << node->left->info << endl << strGraphVizNode(node->left);
  if ( node->right != nullptr ) ss << "  " << node->info << " -- " << node->right->info << endl << strGraphVizNode(node->right);
  return ss.str();
}

template <typename T>
string NodeBT<T>::strGraphViz() const {
  stringstream ss;
  ss << "graph NodeBT {" << endl << "  node [shape=circle]" << endl << strGraphVizNode(this) << "}" << endl;
  return ss.str();
}

template <typename T>
string NodeBT<T>::preorder() const {
  stringstream ss;
  ss << info << endl;
  if (left != nullptr) ss << left->preorder();
  if (right != nullptr) ss << right->preorder();
  return ss.str();
}

template <typename T>
string NodeBT<T>::postorder() const {
  stringstream ss;
  if (left != nullptr) ss << left->postorder();
  if (right != nullptr) ss << right->postorder();
  ss << info << endl;
  return ss.str();
}

template <typename T>
string NodeBT<T>::inorder() const {
  stringstream ss;
  if (left != nullptr) ss << left->inorder();
  ss << info << endl;
  if (right != nullptr) ss << right->inorder();
  return ss.str();
}

template <typename T>
string NodeBT<T>::levelorder() const {
  stringstream ss;
  vector<const NodeBT *> nodes;
  nodes.push_back(this);
  while (nodes.size() != 0) {
        const NodeBT *node = nodes[0];
        ss << node->getInfo() << endl;
        nodes.erase(nodes.begin());
        if (node->left != nullptr) nodes.push_back(node->left);
        if (node->right != nullptr) nodes.push_back(node->right);
  }
  return ss.str();
}
#endif
