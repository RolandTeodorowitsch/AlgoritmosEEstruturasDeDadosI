unsigned int fatorial(unsigned int n);

double eulerRec(unsigned int n) {
  if (n == 0) return 1;
  else return 1.0 / fatorial(n) + eulerRec(n-1);  
}
