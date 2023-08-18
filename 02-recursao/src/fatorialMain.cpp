#include <iostream>

using namespace std;

unsigned int fatorial(unsigned int n);
unsigned int fatorialRec(unsigned int n);

int main() {
  for (unsigned int i=0; i<10; ++i)
      cout << i << " " << fatorial(i) << " " << fatorialRec(i) << endl;
  return 0;
}
