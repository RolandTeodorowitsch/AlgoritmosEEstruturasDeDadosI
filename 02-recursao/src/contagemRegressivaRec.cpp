#include <iostream>
void contagemRegressivaRec(int n) {
  if (n == 0) return;
  std::cout << n << std::endl;
  contagemRegressivaRec(n-1);
}
