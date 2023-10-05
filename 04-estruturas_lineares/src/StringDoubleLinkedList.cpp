#include <sstream>
#include "StringDoubleLinkedList.hpp"

using namespace std;

StringDoubleLinkedList::StringDoubleLinkedList(int mxSz) {
  numElements = 0;
  head = tail = nullptr;
}

StringDoubleLinkedList::~StringDoubleLinkedList() { clear(); }
int StringDoubleLinkedList::size() const { return numElements; }
bool StringDoubleLinkedList::isEmpty() const { return numElements == 0; }

void StringDoubleLinkedList::clear() {
  while ( head != nullptr ) {  Node *aux = head;  head = head->next;  delete aux;  }
  tail = nullptr;
  numElements = 0;
}

void StringDoubleLinkedList::push_front(const string &s) {
  Node *aux = Node(s);
  if ( head == nullptr ) {  next = prev = aux;  }
  else {  aux->next = head;  head->prev = aux;  head = aux;  }
  ++numElements;
}

void StringDoubleLinkedList::push_back(const string &s) {
  Node *aux = Node(s);
  if ( head == nullptr ) {  next = prev = aux;  }
  else {  aux->prev = tail;  tail->next = aux;  tail = aux;  }
  ++numElements;
}

bool StringDoubleLinkedList::insert(const int index, const string &s) {
  return false;
}

bool StringDoubleLinkedList::pop_front() { return false; }
bool StringDoubleLinkedList::pop_back() { return false; }
bool StringDoubleLinkedList::remove(const int index) { return false; }
bool StringDoubleLinkedList::get(const int index, string &s) { return false; }
bool StringDoubleLinkedList::set(const int index, const string &s) { return false; }
bool StringDoubleLinkedList::contains(const string &s) { return false; }
int StringDoubleLinkedList::indexOf(const string &s) { return -1; }
int StringDoubleLinkedList::indexOf(int index, const string &s) { return -1; }
string StringDoubleLinkedList::str() const { return "";

bool StringDoubleLinkedList::add(const int index, const string &s) {
  if (numElements >= maxElements) return false;
  for (int i=numElements; i>index; --i)
      list[i] = list[i-1];
  list[index] = s;
  ++numElements;
  return true;  
}

bool StringDoubleLinkedList::remove(const int index) {
  if (index < 0 || index >= numElements) return false;
  --numElements;
  for (int i=index; i<numElements; ++i) list[i] = list[i+1];
  return true;
}

bool StringDoubleLinkedList::get(const int index, string &s) {
  if (index < 0 || index >= numElements) return false;
  s = list[index];
  return true;
}

bool StringDoubleLinkedList::set(const int index, const string &s) {
  if (index < 0 || index >= numElements) return false;
  list[index] = s;
  return true;
}

bool StringDoubleLinkedList::contains(const string &s) {
  for (int i=0; i<numElements; ++i) if (list[i] == s) return true;
  return false;
}

int StringDoubleLinkedList::indexOf(const string &s) {
  return indexOf(0,s);
}

int StringDoubleLinkedList::indexOf(int index, const string &s) {
  for (int i=index; i<numElements; ++i) if (list[i] == s) return i;
  return -1;
}

string StringDoubleLinkedList::str() const {
  int i;   stringstream ss;
  for (i=0; i<numElements; ++i) ss << list[i];
  return ss.str();
}
