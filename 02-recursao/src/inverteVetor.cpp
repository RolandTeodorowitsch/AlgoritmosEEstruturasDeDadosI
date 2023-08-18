void inverteVetor(int *dados, int ini, int fim) {
  while (ini < fim) {
        int aux = dados[ini];
        dados[ini] = dados[fim];
        dados[fim] = aux;
        ++ini;
        --fim;
  }
}
