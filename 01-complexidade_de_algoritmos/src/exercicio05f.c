int funcao(int n) {
  int op = 0;
  for (int i=0; i<n; i++)
      for (int j=i; j <i+2; j++)
          for (int k=0; k<n; k++)
              op++;
  return op;
}
