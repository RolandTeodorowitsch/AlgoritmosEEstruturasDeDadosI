#include <sstream>
#include "IntLinkedQueue.hpp"

IntLinkedQueue::IntLinkedQueue() {  numElements = 0;  queueHead = queueTail = nullptr;  }
IntLinkedQueue::~IntLinkedQueue() {  clear();  }
int IntLinkedQueue::size() const {  return numElements;  }
bool IntLinkedQueue::isEmpty() const {  return numElements==0;  }

void IntLinkedQueue::enqueue(const int e) {
  Reg *aux = new Reg(e);
  if ( queueHead == nullptr) {  queueHead = queueTail = aux;  }
  else {  queueTail->next = aux;   queueTail = aux;  }
  ++numElements;
}

bool IntLinkedQueue::dequeue(int &e) {
  if ( numElements == 0 ) return false;
  --numElements;  e = queueHead->data;  Reg *aux = queueHead;  queueHead = queueHead->next;  delete aux;
  return true;
}

bool IntLinkedQueue::head(int &e) const {
  if ( numElements == 0 ) return false;
  else {  e = queueHead->data;  return true; }
}

void IntLinkedQueue::clear() {
  while (queueHead != nullptr) {  Reg *aux = queueHead;   queueHead = queueHead->next;   delete aux;  }
  numElements = 0;
}

string IntLinkedQueue::str() const {
  stringstream ss;
  ss << "|";
  for (Reg *aux = queueHead; aux != nullptr; aux = aux->next)
      ss << aux->data << "|";
  return ss.str();
}
