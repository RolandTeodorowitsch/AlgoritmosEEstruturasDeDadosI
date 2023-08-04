void bubble_sort(int *dados, int tam) {
  int trocou;
  do {
     trocou = 0;
     for (int i=0; i<tam-1; ++i) {
         if (dados[i] > dados[i+1]) {
            int aux = dados[i];
            dados[i] = dados[i+1];
            dados[i+1] = aux;
            trocou = 1;
         }
     }
  }  while (trocou);
}
