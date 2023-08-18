#include <iostream>
#include <string>

using namespace std;

int palindromo(string palavra, int ini, int fim);
int palindromoRec(string palavra, int ini, int fim);

int main() {
  string s;
  size_t t;
  s = "socorrammesubinoonibusemmarrocos";
  t = s.length();
  if ( !palindromo(s,0,t-1) || !palindromoRec(s,0,t-1) ) cout << "> FALHOU" << endl;
  s = "reviver";
  t = s.length();
  if ( !palindromo(s,0,t-1) || !palindromoRec(s,0,t-1) ) cout << "> FALHOU" << endl;
  s = "anilina";
  t = s.length();
  if ( !palindromo(s,0,t-1) || !palindromoRec(s,0,t-1) ) cout << "> FALHOU" << endl;
  s = "anilinas";
  t = s.length();
  if ( palindromo(s,0,t-1) || palindromoRec(s,0,t-1) ) cout << "> FALHOU" << endl;
  s = "amor a roma";
  t = s.length();
  if ( !palindromo(s,0,t-1) || !palindromoRec(s,0,t-1) ) cout << "> FALHOU" << endl;
  s = "lava esse aval";
  t = s.length();
  if ( !palindromo(s,0,t-1) || !palindromoRec(s,0,t-1) ) cout << "> FALHOU" << endl;
  s = "lava esse lava";
  t = s.length();
  if ( palindromo(s,0,t-1) || palindromoRec(s,0,t-1) ) cout << "> FALHOU" << endl;
  s = "01234543210";
  t = s.length();
  if ( !palindromo(s,0,t-1) || !palindromoRec(s,0,t-1) ) cout << "> FALHOU" << endl;
  s = "012345A3210";
  t = s.length();
  if ( palindromo(s,0,t-1) || palindromoRec(s,0,t-1) ) cout << "> FALHOU" << endl;
  s = "ooooooovooooooo";
  t = s.length();
  if ( !palindromo(s,0,t-1) || !palindromoRec(s,0,t-1) ) cout << "> FALHOU" << endl;
  s = "ooooooovoooooooo";
  t = s.length();
  if ( palindromo(s,0,t-1) || palindromoRec(s,0,t-1) ) cout << "> FALHOU" << endl;

  cout << "> OK" << endl;
  return 0;
}
