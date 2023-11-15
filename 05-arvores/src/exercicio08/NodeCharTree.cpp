#ifdef DEBUG
#include <iostream>
#endif
#include <sstream>
#include "NodeCharTree.hpp"

NodeCharTree::NodeCharTree(char i) {
  info = i;  parent = nullptr;
  #ifdef DEBUG
  cerr << "+ NodeCharTree(" << info << ") created..." << endl;
  #endif
}

NodeCharTree::~NodeCharTree() {
  for (int i=0; i<childs.size(); ++i) delete childs[i];
  #ifdef DEBUG
  cerr << "- NodeCharTree(" << info << ") deleted..." << endl;
  #endif
}

char NodeCharTree::getInfo() const { return info; }
void NodeCharTree::setInfo(char i) { info = i; }
NodeCharTree *NodeCharTree::getParent() const { return parent; }
NodeCharTree *NodeCharTree::getChild(int index) const { return (index<0 || index>=childs.size())?nullptr:childs[index]; }
bool NodeCharTree::isRoot() const { return parent == nullptr; }
bool NodeCharTree::isInternal() const { return parent != nullptr && childs.size() != 0; }
bool NodeCharTree::isExternal() const { return childs.size()==0; }
int NodeCharTree::degree() const { return childs.size(); }

int NodeCharTree::depth() const {
  int res = 0;
  NodeCharTree *aux = parent;
  while (aux != nullptr) {
     ++res;
     aux = aux->getParent();
  }
  return res;
}

int NodeCharTree::height() const {
  int res = 0;
  for (int i=0; i<childs.size(); ++i) {
      int h = 1+childs[i]->height();
      if (h > res) res = h;
  }
  return res;
}

int NodeCharTree::size() const {
  int res = 1;
  if (childs.size() == 0) return res;
  for (int i=0; i<childs.size(); ++i)
      res += childs[i]->size();
  return res;
}

void NodeCharTree::addSubtree(NodeCharTree *subtree) {
  if (subtree == nullptr) return;
  childs.push_back(subtree);
  subtree->parent = this;
}

bool NodeCharTree::removeSubtree(NodeCharTree *subtree) {
  for (int i=0; i<childs.size(); ++i)
      if ( childs[i] == subtree ) { childs.erase( childs.begin() + i ); return true; }
  return false;
}

bool NodeCharTree::contains(char i) const {
  if ( info == i ) return true;
  for (int j=0; j<childs.size(); ++j)
      if ( childs[j]->contains(i) ) return true;
  return false;
}

NodeCharTree const *NodeCharTree::find(char i) const {
  if ( info == i ) return this;
  for (int j=0; j<childs.size(); ++j) {
      NodeCharTree const *child = childs[j]->find(i);
      if ( child != nullptr ) return child;
  }
  return nullptr;
}

string NodeCharTree::strGraphVizNode(NodeCharTree const *node) const {
  stringstream ss;
  for (int i=0; i<node->childs.size(); ++i)
      ss << "  " << node->info << " -- " << node->childs[i]->info << endl << strGraphVizNode(node->childs[i]);
  return ss.str();
}

string NodeCharTree::strGraphViz() const {
  stringstream ss;
  ss << "graph NodeCharTree {" << endl << "  node [shape=circle]" << endl << strGraphVizNode(this) << "}" << endl;
  return ss.str();
}

string NodeCharTree::preorder() const {
  stringstream ss;
  ss << info << endl;
  for (int i=0; i<childs.size(); ++i) ss << childs[i]->preorder();
  return ss.str();
}

string NodeCharTree::postorder() const {
  stringstream ss;
  for (int i=0; i<childs.size(); ++i) ss << childs[i]->postorder();
  ss << info << endl;
  return ss.str();
}

string NodeCharTree::levelorder() const {
  stringstream ss;
  vector<const NodeCharTree *> nodes;
  nodes.push_back(this);
  while (nodes.size() != 0) {
        const NodeCharTree *node = nodes[0];
        ss << node->getInfo() << endl;
        nodes.erase(nodes.begin());
        for (int i=0; i<node->degree(); ++i)
            nodes.push_back(node->getChild(i));
  }
  return ss.str();
}
