#include <iostream>
void indicesMatrizRec(int lin, int col) {
  if (lin < 1) return;
  indicesMatrizRec(lin-1,col);
  if (col < 1) return;
  indicesMatrizRec(lin,col-1);
  std::cout << lin-1 << "," << col-1 << std::endl;
}
