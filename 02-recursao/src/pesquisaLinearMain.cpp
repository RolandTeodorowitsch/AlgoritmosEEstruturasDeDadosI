#include <iostream>

using namespace std;

int pesquisaLinear(int *dados, int tam, int valor);
int pesquisaLinearRec(int *dados, int tam, int valor);

int main() {
  int vet[] = {2,4,6,8,10,12,14,16,18,20};
  int tam = sizeof(vet) / sizeof(int);
  for (int i=1; i<=2*tam+1; ++i)
      cout << i << " " << pesquisaLinear(vet,tam,i) << " " << pesquisaLinearRec(vet,tam,i) << endl;
  return 0;
}
