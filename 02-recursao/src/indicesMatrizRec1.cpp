#include <iostream>
void indicesMatrizRec(int lin, int col) {
  if (lin < 1) return;
  indicesMatrizRec(--lin,col);
  for (int j=0; j<col; ++j)
      std::cout << lin << "," << j << std::endl;
}
