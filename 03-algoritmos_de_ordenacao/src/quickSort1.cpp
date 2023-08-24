void quickSort(int *dados, int ini, int fim) {
  int i = ini, j = fim, pivo = dados[(ini+fim)/2];
  while (i <= j) {
        while (dados[i] < pivo)
              ++i;
        while (dados[j] > pivo)
              --j;
        if (i <= j) {
           int aux = dados[i];
           dados[i] = dados[j];
           dados[j] = aux;
           ++i;
           --j;
        }
   }
   if (ini < j) quickSort(dados,ini,j);
   if (i < fim) quickSort(dados,i,fim);
}
