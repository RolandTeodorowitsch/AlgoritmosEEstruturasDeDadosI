int funcao(int n) {
  int op = 0;
  for (int i=0; i<n; ++i)
      for (int j=i+1; j<n; ++j)
          op++;
  return op;
}
