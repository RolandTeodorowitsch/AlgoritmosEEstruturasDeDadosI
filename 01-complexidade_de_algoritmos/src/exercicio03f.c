int funcao(int n) {
  int op = 1;
  if (n == 1) return op;
  return op + funcao(n-1) + funcao(n-1);
}
