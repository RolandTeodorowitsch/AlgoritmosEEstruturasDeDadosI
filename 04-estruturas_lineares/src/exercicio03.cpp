#include <iostream>
#include "CharStack.hpp"

using namespace std;

bool saoIguais(CharStack &p1, CharStack &p2) {
  int tam = p1.size();
  if ( tam != p2.size() ) return false;
  CharStack *aux = new CharStack(tam);
  bool res = true;
  while (tam > 0) {
        char t1, t2;  p1.pop(t1);  p2.pop(t2);
        if (t1 != t2) {  p1.push(t1); p2.push(t2);  res = false;  break;  }
        aux->push(t1);
	--tam;
  }
  while ( !aux->isEmpty() ) {  char c;  aux->pop(c);  p1.push(c);  p2.push(c);  }
  delete aux;
  return res;
}

int main() {
  CharStack p1(10), p2(15), p3(20), p4(5);
  for (int i=0; i<5; ++i) {  char c = 'A'+i;  p1.push(c);  p2.push(c);  p3.push(c);  p4.push(c);  }
  p1.push('F');  p2.push('G');  p3.push('F');
  for (int i=0; i<3; ++i) {  char c = 'H'+i;  p1.push(c);  p2.push(c);  p3.push(c);  p4.push(c);  }
  cout << "p1: " << p1.str() << endl << "p2: " << p2.str() << endl << "p3: " << p3.str() << endl << "p4: " << p4.str() << endl;
  cout << "p1 == p2? " << (saoIguais(p1,p2)?"S":"N") << endl;
  cout << "p1 == p3? " << (saoIguais(p1,p3)?"S":"N") << endl;
  cout << "p1 == p4? " << (saoIguais(p1,p4)?"S":"N") << endl;
  cout << "p2 == p3? " << (saoIguais(p2,p3)?"S":"N") << endl;
  cout << "p2 == p4? " << (saoIguais(p2,p4)?"S":"N") << endl;
  cout << "p3 == p4? " << (saoIguais(p3,p4)?"S":"N") << endl;
  cout << "p1: " << p1.str() << endl << "p2: " << p2.str() << endl << "p3: " << p3.str() << endl << "p4: " << p4.str() << endl;
  return 0;
}
