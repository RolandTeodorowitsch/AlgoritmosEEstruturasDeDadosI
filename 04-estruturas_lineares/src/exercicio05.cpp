#include <iostream>
#include "CharStack.hpp"

using namespace std;

bool ehPalindromo(string s) {
  CharStack p( s.size() );
  char c;
  string sInv = "";
  for (int i=0; i<s.size(); ++i)
      p.push(s[i]);
  while ( !p.isEmpty() ) {  p.pop(c);  sInv.append(1,c);  }
  return s == sInv;
}

int main() {
  string s;
  s = "ABASEDOTETODESABA";  cout << s << ": " << (ehPalindromo(s)?"PALINDROMO":"-") << endl;
  s = "LUZAZUL";            cout << s << ": " << (ehPalindromo(s)?"PALINDROMO":"-") << endl;
  s = "oloboamaobolo";      cout << s << ": " << (ehPalindromo(s)?"PALINDROMO":"-") << endl;
  s = "ABCDEDCB";           cout << s << ": " << (ehPalindromo(s)?"PALINDROMO":"-") << endl;
  return 0;
}
