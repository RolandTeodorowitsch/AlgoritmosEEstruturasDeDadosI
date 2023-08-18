void bubbleSortRec(int *dados, int tam) {
  int trocou = 0;
  --tam;
  for (int i=0; i<tam; ++i)
      if (dados[i] > dados[i+1]) {
         int aux = dados[i];
         dados[i] = dados[i+1];
         dados[i+1] = aux;
         trocou = 1;
      }
  if (trocou) bubbleSortRec(dados, tam);
}
