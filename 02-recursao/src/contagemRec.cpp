#include <iostream>
void contagemRec(int n) {
  if (n == 0) return;
  contagemRec(n-1);
  std::cout << n << std::endl;
}
