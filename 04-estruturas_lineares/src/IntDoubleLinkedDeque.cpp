#include <sstream>
#include "IntDoubleLinkedDeque.hpp"

IntDoubleLinkedDeque::IntDoubleLinkedDeque() {  numElements = 0;  front = back = nullptr;  }
IntDoubleLinkedDeque::~IntDoubleLinkedDeque() {  clear();  }
int IntDoubleLinkedDeque::size() const {  return numElements;  }
bool IntDoubleLinkedDeque::isEmpty() const {  return numElements == 0;  }

void IntDoubleLinkedDeque::addFirst(const int e) {
  Node *aux = new Node(e);
  if ( front == nullptr) {  front = back = aux;  }
  else {  front->prev = aux;  aux->next = front;  front = aux;  }
  ++numElements;
}

void IntDoubleLinkedDeque::addLast(const int e) {
  Node *aux = new Node(e);
  if ( front == nullptr) {  front = back = aux;  }
  else {  aux->prev = back;  back->next = aux;  back = aux;  }
  ++numElements;
}

bool IntDoubleLinkedDeque::removeFirst(int &e) {
  if ( numElements == 0 ) return false;
  --numElements;  e = front->data;  Node *aux = front;  front = front->next;  delete aux;
  if ( front == nullptr) back = nullptr;
  else front->prev = nullptr;
  return true;
}

bool IntDoubleLinkedDeque::removeLast(int &e) {
  if ( numElements == 0 ) return false;
  --numElements;  e = back->data;  Node *aux = back;  back = back->prev;  delete aux;
  if ( back == nullptr ) front = nullptr;
  else back->next = nullptr;
  return true;
}

bool IntDoubleLinkedDeque::first(int &e) const {
  if ( numElements == 0 ) return false;
  else {  e = front->data;  return true; }
}

bool IntDoubleLinkedDeque::last(int &e) const {
  if ( numElements == 0 ) return false;
  else {  e = back->data;  return true; }
}

void IntDoubleLinkedDeque::clear() {
  while (front != nullptr) {  Node *aux = front;   front = front->next;   delete aux;  }
  numElements = 0;  back = nullptr;
}

string IntDoubleLinkedDeque::str() const {
  stringstream ss;
  ss << "|";
  for (Node *aux = front; aux != nullptr; aux = aux->next)
      ss << aux->data << "|";
  return ss.str();
}

string IntDoubleLinkedDeque::reverseStr() const {
  stringstream ss;
  ss << "|";
  for (Node *aux = back; aux != nullptr; aux = aux->prev)
      ss << aux->data << "|";
  return ss.str();
}
