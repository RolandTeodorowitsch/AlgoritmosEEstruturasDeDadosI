int pesquisa_linear(int *dados, int tam, int valor) {
  for (int i=0; i<tam; i++)
      if (valor == dados[i])
         return i;
  return -1;
}
