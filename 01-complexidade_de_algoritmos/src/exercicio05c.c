int funcao(int n) {
  int op = 0;
  for (int i=1; i<n; i=i+i)
      op++;
  return op;
}
