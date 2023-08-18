#include <iostream>
void indicesMatriz(int lin, int col) {
  for (int i=0; i<lin; ++i)
      for (int j=0; j<col; ++j)
          std::cout << i << "," << j << std::endl;
}
