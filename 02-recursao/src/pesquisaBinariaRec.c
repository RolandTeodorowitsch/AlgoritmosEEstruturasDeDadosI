int pesquisaBinariaRec(int *dados, int ini, int fim, int valor) {
  if ( ini > fim ) return -1;
  int meio = (ini + fim) / 2;
  if (valor == dados[meio])
     return meio;
  else if (valor < dados[meio])
     return pesquisaBinariaRec(dados, ini, meio-1, valor);
  else
     return pesquisaBinariaRec(dados, meio+1, fim, valor);
}
