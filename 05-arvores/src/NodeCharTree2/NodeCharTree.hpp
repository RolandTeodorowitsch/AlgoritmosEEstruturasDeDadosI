#include <vector>
#include <string>

using namespace std;

#ifndef _NODECHARTREE_HPP
#define _NODECHARTREE_HPP
class NodeCharTree {
private:
  char info;
  NodeCharTree *parent;
  vector<NodeCharTree *> childs;
  static string strGraphVizNode(NodeCharTree const *node);
  static string strTreeNode(NodeCharTree const *node,string s);
public:
  NodeCharTree(char i);
  ~NodeCharTree();
  char getInfo() const;
  NodeCharTree *getParent() const;
  NodeCharTree *getChild(int index) const;
  bool isRoot();
  bool isInternal();
  bool isExternal();
  int degree();
  int depth();
  int size();
  void addSubtree(NodeCharTree *subtree);
  bool removeSubtree(NodeCharTree *subtree);
  NodeCharTree *remove(NodeCharTree *child);
  bool contains(char i);
  NodeCharTree *find(char i);
  string strGraphViz() const;
  string str() const;
  string strTree() const;
};
#endif
