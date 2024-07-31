int funcao(int n) {
  int op = 0;
  for (int i=1; i<n; i++)
      for (int j=1; j<n; j=j+j)
          op++;
  return op;
}
