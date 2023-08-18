#include <string>
int palindromo(std::string palavra, int ini, int fim) {
  while ( ini < fim ) {
        if ( palavra.at(ini) != palavra.at(fim) ) return 0;
        ini++;
        fim--;
  }
  return 1;
}
