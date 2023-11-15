#ifndef _NODETREE_HPP
#define _NODETREE_HPP
#ifdef DEBUG
#include <iostream>
#endif
#include <vector>
#include <sstream>

using namespace std;

template <typename T>
class NodeTree {
private:
  T info;   NodeTree *parent;   vector<NodeTree *> childs;
  string strGraphVizNode(NodeTree const *node) const;  // Imprime as conexões de um nodo com seus filhos em GraphViz
public:
  NodeTree(T const &i);                    // Cria um nodo com o caractere i, e sem pai
  ~NodeTree();                             // Destrói o nodo atual e seus descendentes
  T getInfo() const;                       // Retorna o caractere armazenado no nodo atual
  void setInfo(T &i);                      // Altera o caractere armazenado no nodo atual
  NodeTree *getParent() const;             // Retorna a referência para o nodo-pai do nodo atual
  NodeTree *getChild(int index) const;     // Retorna a referência para o nodo-fiho de índice index ou nullptr
  bool isRoot() const;                     // Retorna true se o nodo for raiz
  bool isInternal() const;                 // Retorna true se o nodo for interno
  bool isExternal() const;                 // Retorna true se o nodo for externo
  int degree() const;                      // Retorna o grau (número de filhos) do nodo atual
  int depth() const;                       // Retorna o nível do nodo atual
  int height() const;                      // Retorna a altura da subárvore/árvore a partir do nodo atual
  int size() const;                        // Retorna o número de nodos a partir do nodo atual
  void addSubtree(NodeTree *subtree);      // Adiciona uma subárvore como filho do nodo atual
  bool removeSubtree(NodeTree *subtree);   // Remove a subárvore dentre os filhos do atual (true indica sucesso)
  bool contains(T &i) const;               // Retorna true se o nodo atual ou algum de seus descendentes contivere i
  NodeTree const *find(T const &i) const;  // Retorna a referência para o nodo, a partir do atual, que contém i ou nullptr
  string strGraphViz() const;              // Gera uma representação da árvore a partir do nodo atual no formato GraphViz
  string preorder() const;                 // Gera uma cadeia de caracteres (um nodo por linha) em pré-ordem
  string postorder() const;                // Gera uma cadeia de caracteres (um nodo por linha) em pós-ordem
  string levelorder() const;               // Gera uma cadeia de caracteres (um nodo por linha) em largura
};

template <typename T>
NodeTree<T>::NodeTree(T const &i) {
  info = i;  parent = nullptr;
  #ifdef DEBUG
  cerr << "+ NodeTree<>(" << info << ") created..." << endl;
  #endif
}

template <typename T>
NodeTree<T>::~NodeTree() {
  for (int i=0; i<childs.size(); ++i) delete childs[i];
  #ifdef DEBUG
  cerr << "- NodeTree<>(" << info << ") deleted..." << endl;
  #endif
}

template <typename T> T NodeTree<T>::getInfo() const { return info; }
template <typename T> void NodeTree<T>::setInfo(T &i) { info = i; }
template <typename T> NodeTree<T> *NodeTree<T>::getParent() const { return parent; }
template <typename T> NodeTree<T> *NodeTree<T>::getChild(int index) const { return (index<0 || index>=childs.size())?nullptr:childs[index]; }
template <typename T> bool NodeTree<T>::isRoot() const { return parent == nullptr; }
template <typename T> bool NodeTree<T>::isInternal() const { return parent != nullptr && childs.size() != 0; }
template <typename T> bool NodeTree<T>::isExternal() const { return childs.size()==0; }
template <typename T> int NodeTree<T>::degree() const { return childs.size(); }

template <typename T>
int NodeTree<T>::depth() const {
  int res = 0;
  NodeTree *aux = parent;
  while (aux != nullptr) {
     ++res;
     aux = aux->getParent();
  }
  return res;
}

template <typename T>
int NodeTree<T>::height() const {
  int res = 0;
  for (int i=0; i<childs.size(); ++i) {
      int h = 1+childs[i]->height();
      if (h > res) res = h;
  }
  return res;
}

template <typename T>
int NodeTree<T>::size() const {
  int res = 1;
  if (childs.size() == 0) return res;
  for (int i=0; i<childs.size(); ++i)
      res += childs[i]->size();
  return res;
}

template <typename T>
void NodeTree<T>::addSubtree(NodeTree *subtree) {
  if (subtree == nullptr) return;
  childs.push_back(subtree);
  subtree->parent = this;
}

template <typename T>
bool NodeTree<T>::removeSubtree(NodeTree *subtree) {
  for (int i=0; i<childs.size(); ++i)
      if ( childs[i] == subtree ) { childs.erase( childs.begin() + i ); return true; }
  return false;
}

template <typename T>
bool NodeTree<T>::contains(T &i) const {
  if ( info == i ) return true;
  for (int j=0; j<childs.size(); ++j)
      if ( childs[j]->contains(i) ) return true;
  return false;
}
	
template <typename T>
NodeTree<T> const *NodeTree<T>::find(T const &i) const {
  if ( info == i ) return this;
  for (int j=0; j<childs.size(); ++j) {
      NodeTree const *child = childs[j]->find(i);
      if ( child != nullptr ) return child;
  }
  return nullptr;
}

template <typename T>
string NodeTree<T>::strGraphVizNode(NodeTree const *node) const {
  stringstream ss;
  for (int i=0; i<node->childs.size(); ++i)
      ss << "  " << node->info << " -- " << node->childs[i]->info << endl << strGraphVizNode(node->childs[i]);
  return ss.str();
}

template <typename T>
string NodeTree<T>::strGraphViz() const {
  stringstream ss;
  ss << "graph NodeTree {" << endl << "  node [shape=circle]" << endl << strGraphVizNode(this) << "}" << endl;
  return ss.str();
}

template <typename T>
string NodeTree<T>::preorder() const {
  stringstream ss;
  ss << info << endl;
  for (int i=0; i<childs.size(); ++i) ss << childs[i]->preorder();
  return ss.str();
}

template <typename T>
string NodeTree<T>::postorder() const {
  stringstream ss;
  for (int i=0; i<childs.size(); ++i) ss << childs[i]->postorder();
  ss << info << endl;
  return ss.str();
}

template <typename T>
string NodeTree<T>::levelorder() const {
  stringstream ss;
  vector<const NodeTree *> nodes;
  nodes.push_back(this);
  while (nodes.size() != 0) {
        const NodeTree *node = nodes[0];
        ss << node->getInfo() << endl;
        nodes.erase(nodes.begin());
        for (int i=0; i<node->degree(); ++i)
            nodes.push_back(node->getChild(i));
  }
  return ss.str();
}
#endif
