int particiona(int *dados, int ini, int fim) {
  int pivo = dados[fim];
  int i = ini-1;
  for (int j=ini; j<fim; ++j) {
      if (dados[j] < pivo) {
         ++i;
         int aux = dados[i]; dados[i] = dados[j]; dados[j] = aux;
      }
  }
  if (pivo < dados[i+1]) {
     int aux = dados[i+1]; dados[i+1] = dados[fim]; dados[fim] = aux;
  }
  return i+1;
}

void quickSort(int *dados, int ini, int fim) {
  if (ini < fim) {
     int pivo = particiona(dados, ini, fim);
     quickSort(dados, ini, pivo-1);
     quickSort(dados, pivo+1, fim);
  }
}
