#include <iostream>

void indicesMatriz(int lin, int col);
void indicesMatrizRec(int lin, int col);

int main() {
  indicesMatriz(3,5);
  std::cout << "---" << std::endl;
  indicesMatrizRec(3,5);
  return 0;
}
