void inverteVetorRec(int *dados, int ini, int fim) {
  if (ini >= fim) return;
  int aux = dados[ini];
  dados[ini] = dados[fim];
  dados[fim] = aux;
  inverteVetorRec(dados,ini+1,fim-1);
}
