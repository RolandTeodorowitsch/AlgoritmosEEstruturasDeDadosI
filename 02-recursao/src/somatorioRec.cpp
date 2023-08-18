int somatorioRec(int *dados, int tam) {
  if (tam == 0) return 0;
  --tam;
  return dados[tam] + somatorioRec(dados,tam);
}
