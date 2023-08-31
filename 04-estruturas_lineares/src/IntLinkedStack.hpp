#ifndef _INTLINKEDSTACK_HPP
#define _INTLINKEDSTACK_HPP

#include <string>

using namespace std;

class IntLinkedStack {
private:
  int numElements;
  struct Reg {
    int data;
    Reg *next;
    Reg(int d) {  data = d;  next = nullptr;  }
  };
  Reg *stack;
public:
  IntLinkedStack();
  ~IntLinkedStack();
  void push(const int e);
  bool pop(int &e);
  bool top(int &e) const;
  int size() const;
  bool isEmpty() const;
  void clear();
  string str() const;
};
#endif
