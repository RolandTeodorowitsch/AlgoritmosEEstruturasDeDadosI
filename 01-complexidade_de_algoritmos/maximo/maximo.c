TIPO maximo(TIPO *dados, int tam) {
  TIPO max = dados[0];
  for (int i=1; i<tam; i++)
      if (dados[i] > max)
         max = dados[i];
  return max;
}
