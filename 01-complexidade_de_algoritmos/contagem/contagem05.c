int funcao(int n) {
  int op = 0;
  for (int i=0; i<n; i++)
      for (int j=i; j<i+3; j++)
          for (int k=i; k<j; k++)
              op++;
  return op;
}
