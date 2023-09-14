#include <iostream>
#include "CharStack.hpp"

using namespace std;

string invertePalavrasDaFrase(string frase) {
  char ch;
  CharStack stack(frase.length());
  string res = "";
  for (int i=0; i<frase.size(); ++i) {
      char c = frase[i];
      if (c == '.' || c == ' ') {
         while ( stack.pop(ch) ) res += ch;
         res += c;
      }
      else if ( !stack.push(c) ) cerr << "ERRO!" << endl;
  }
  while ( stack.pop(ch) ) res += ch;
  return res;
}

int main() {
  string frase1 = "ETSE OICICREXE E OTIUM LICAF.";
  cout << frase1 << endl;
  cout << invertePalavrasDaFrase(frase1) << endl;
  return 0;
}
