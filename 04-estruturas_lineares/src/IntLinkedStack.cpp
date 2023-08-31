#include <sstream>
#include "IntLinkedStack.hpp"

IntLinkedStack::IntLinkedStack() {  numElements = 0;  stack = nullptr;  }
IntLinkedStack::~IntLinkedStack() {  clear();  }
int IntLinkedStack::size() const {  return numElements;  }
bool IntLinkedStack::isEmpty() const {  return numElements == 0;  }

void IntLinkedStack::push(const int e) {
  Reg *novo = new Reg(e);
  novo->next = stack;   stack = novo;
  ++numElements;
}

bool IntLinkedStack::pop(int &e) {
  if ( numElements == 0 ) return false;
  --numElements;      e = stack->data;
  Reg *aux = stack;   stack = stack->next;    delete aux;
  return true;
}

bool IntLinkedStack::top(int &e) const {
  if ( numElements == 0 ) return false;
  else {  e = stack->data;  return true;  }
}

void IntLinkedStack::clear() {
  while (stack != nullptr) {  Reg *aux = stack;   stack = stack->next;   delete aux;  }
  numElements = 0;
}

string IntLinkedStack::str() const {
  int i;   stringstream ss;
  ss << "|";
  for (Reg *aux = stack; aux != nullptr; aux = aux->next)
      ss << aux->data << "|";
  return ss.str();
}
