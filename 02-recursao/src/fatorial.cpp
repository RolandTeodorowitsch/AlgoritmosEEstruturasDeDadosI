unsigned int fatorial(unsigned int n) {
  unsigned int res = 1;
  for (unsigned int i=2; i<=n; ++i)
      res *= i;
  return res;
}
