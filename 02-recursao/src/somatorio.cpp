int somatorio(int *dados, int tam) {
  int soma = 0;
  for (int i=0; i<tam; i++)
      soma += dados[i];
  return soma;
}
