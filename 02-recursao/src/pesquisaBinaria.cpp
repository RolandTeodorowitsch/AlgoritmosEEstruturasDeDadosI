int pesquisaBinaria(int *dados, int ini, int fim, int valor) {
  while (ini <= fim) {
        int meio = (ini + fim) / 2;
        if (valor == dados[meio])
           return meio;
        else if (valor < dados[meio])
           fim = meio-1;
        else
           ini = meio+1;
  }
  return -1;
}
