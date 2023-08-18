#include <iostream>
#include <iomanip>

using namespace std;

double eulerRec(unsigned n);

int main() {
   for (unsigned int i=0; i<10; ++i)
       cout << i << " " << fixed << setprecision(20) << eulerRec(i) << endl;
   return 0;
}

