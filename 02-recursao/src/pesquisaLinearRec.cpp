int pesquisaLinearRec(int *dados, int tam, int valor) {
  if (tam == 0) return -1;
  --tam;
  if (dados[tam] == valor) return tam;
  return pesquisaLinearRec(dados,tam,valor);
}
