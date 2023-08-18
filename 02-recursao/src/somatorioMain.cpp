#include <iostream>

using namespace std;

int somatorio(int *dados, int tam);
int somatorioRec(int *dados, int tam);

int main() {
  int vet[] = {1,2,3,4,5,6,7,8,9,10};
  int tam = sizeof(vet) / sizeof(int);
  for (int i=1; i<=tam; ++i)
      cout << i << " " << somatorio(vet,i) << " " << somatorioRec(vet,i) << endl;
  return 0;
}
