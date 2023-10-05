#include <iostream>
#include "CharStack.hpp"

using namespace std;

CharStack *copia(CharStack &p) {
  char c;
  int tam = p.size(), tamMax = p.maxSize();
  CharStack *res = new CharStack(tamMax);
  CharStack *aux = new CharStack(tam);
  while ( !p.isEmpty() ) {  p.pop(c);  aux->push(c);  }
  while ( !aux->isEmpty() ) {  aux->pop(c);  p.push(c);  res->push(c);  }
  delete aux;
  return res;
}

int main() {
  CharStack p1(28), *p2;
  for (int i=0; i<26; ++i) {  char c = 'A'+i;  p1.push(c);  }
  cout << "p1: " << p1.str() << "  " << p1.size() << "/" << p1.maxSize() << endl;
  cout << "Copiando..." << endl;
  p2 = copia(p1);
  cout << "p1: " << p1.str() << "  " << p1.size() << "/" << p1.maxSize() << endl;
  cout << "p2: " << p2->str() << "  " << p2->size() << "/" << p2->maxSize() << endl;
  delete p2;
  return 0;
}
