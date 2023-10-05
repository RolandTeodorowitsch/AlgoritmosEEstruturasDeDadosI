#ifndef _STRINGDOUBLELINKEDLIST_HPP
#define _STRINGDOUBLELINKEDLIST_HPP

#include <string>

using namespace std;

class StringDoubleLinkedList {
private:
  int numElements;
  struct Node {
    string data;
    Node *prev, *next;
    Node(string d) {  data = d;  prev = next = nullptr;  }
  };
  Node *head, *tail;
  Node *at(int index);
public:
  StringDoubleLinkedList();
  ~StringDoubleLinkedList();
  int size() const;
  bool isEmpty() const;
  void clear();
  void push_front(const string &s);
  void push_back(const string &s);
  bool insert(const int index, const string &s);
  bool pop_front();
  bool pop_back();
  bool remove(const int index);
  bool get(const int index, string &s);
  bool set(const int index, const string &s);
  bool contains(const string &s);
  int indexOf(const string &s);
  int indexOf(int index, const string &s);
  string str() const;
};
#endif
