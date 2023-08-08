int funcao(int n) {
  extern int op;
  ++op;
  if (n == 1) return 1;
  return funcao(n-1) + funcao(n-1);
}
