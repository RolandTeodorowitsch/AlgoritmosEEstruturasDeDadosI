#ifdef DEBUG
#include <iostream>
#endif
#include <sstream>
#include "NodeCharTree.hpp"

NodeCharTree::NodeCharTree(char i) {
  info = i;
  parent = nullptr;
  #ifdef DEBUG
  cerr << "+ NodeCharTree(" << info << ") created..." << endl;
  #endif
}

NodeCharTree::~NodeCharTree() {
  for (int i=0; i<childs.size(); ++i)
      delete childs[i];
  #ifdef DEBUG
  cerr << "- NodeCharTree(" << info << ") deleted..." << endl;
  #endif
}

char NodeCharTree::getInfo() const { return info; }
NodeCharTree *NodeCharTree::getParent() const { return parent; }
NodeCharTree *NodeCharTree::getChild(int index) const { return (index<0 || index>=childs.size())?nullptr:childs[index]; }
bool NodeCharTree::isRoot() { return parent == nullptr; }
bool NodeCharTree::isInternal() { return parent != nullptr && childs.size() != 0; }
bool NodeCharTree::isExternal() { return childs.size()==0; }
int NodeCharTree::degree() { return childs.size(); }

int NodeCharTree::depth() {
  int res = 0;
  NodeCharTree *aux = parent;
  while (aux != nullptr) {
     ++res;
     aux = aux->getParent();
  }
  return res;
}

int NodeCharTree::size() {
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

NodeCharTree *NodeCharTree::remove(NodeCharTree *subtree) {
  NodeCharTree *parent = subtree->getParent();
  if ( parent == nullptr ) { delete subtree; return nullptr; }
  parent->removeSubtree(subtree);
  delete subtree;
  NodeCharTree *root = parent;
  while ( root->getParent() != nullptr )
        root = root->getParent();
  return root;
}

bool NodeCharTree::contains(char i) {
  if ( info == i ) return true;
  for (int j=0; j<childs.size(); ++j)
      if ( childs[j]->contains(i) ) return true;
  return false;
}

NodeCharTree *NodeCharTree::find(char i) {
  if ( info == i ) return this;
  for (int j=0; j<childs.size(); ++j) {
      NodeCharTree *child = childs[j]->find(i);
      if ( child != nullptr ) return child;
  }
  return nullptr;
}

string NodeCharTree::strGraphVizNode(NodeCharTree const *node) {
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

string NodeCharTree::str() const {
  stringstream ss;
  ss << info << endl;
  for (int i=0; i<childs.size(); ++i) ss << childs[i]->str();
  return ss.str();
}

string NodeCharTree::strTreeNode(NodeCharTree const *node, string s) {
  stringstream ss;
  ss << node->info;
  int nChilds = node->childs.size();
  if ( nChilds == 0 ) ss << endl; 
  else if ( nChilds == 1 ) ss << " ─── " << strTreeNode(node->childs[0],s+"      ");
  else {
     for (int i=nChilds-1; i>=0; --i) {
         if ( i == nChilds-1 ) ss << " ─┬─ " << strTreeNode(node->childs[i],s+"   │  ");
         else if ( i == 0 ) ss << s << "   └─ " << strTreeNode(node->childs[i],s+"      ");
         else ss << s << "   ├─ " << strTreeNode(node->childs[i],s+"   │  ");
     }
  }
  return ss.str();
}

string NodeCharTree::strTree() const {
  stringstream ss;
  ss << strTreeNode(this,"");
  return ss.str();
}
