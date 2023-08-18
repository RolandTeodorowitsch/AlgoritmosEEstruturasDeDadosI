#include <string>
int palindromoRec(std::string palavra, int ini, int fim) {
  if (ini >= fim) return 1;
  else if ( palavra.at(ini) != palavra.at(fim) ) return 0;
  else return palindromoRec(palavra,ini+1,fim-1);
}
