#include <iostream>

using namespace std;
 
struct Nodo {
    char info;
    Nodo *ant, *prox;
    Nodo(char i) {  info = i;  ant = prox = nullptr;  }
};

void inserePelaDireita(Nodo **esquerda, Nodo **direita, string s) { // Adiciona no fim
  for (int i=0; i<s.size(); ++i) {
      Nodo *aux = new Nodo(s[i]);
      if ( *esquerda == nullptr) {  *esquerda = *direita = aux;  }
      else {  aux->ant	 = *direita;  (*direita)->prox = aux;  *direita = aux;  }
  }
}

void removePelaDireita(Nodo **esquerda, Nodo **direita, int n) { // Remove do fim
  for (int i=0; i<n; ++i) {
      Nodo *aux = *direita;  *direita = (*direita)->ant;  delete aux;
      if ( *direita == nullptr ) *esquerda = nullptr;
      else (*direita)->prox = nullptr;
  }
}

void inserePelaEsquerda(Nodo **esquerda, Nodo **direita, string s) { // Adiciona no início
  for (int i=0; i<s.size(); ++i) {
      Nodo *aux = new Nodo(s[i]);
      if ( *esquerda == nullptr) {  *esquerda = *direita = aux;  }
      else {  (*esquerda)	->ant = aux;  aux->prox = *esquerda;  *esquerda = aux;  }
  }
}	

void removePelaEsquerda(Nodo **esquerda, Nodo **direita, int n) { // Remove do início
  for (int i=0; i<n; ++i) {
      Nodo *aux = *esquerda;  *esquerda = (*esquerda)->prox;  delete aux;
      if ( *esquerda == nullptr) *direita = nullptr;
      else (*esquerda)->ant = nullptr;
  }
}

void mostra(Nodo *aux) {
  while ( aux != nullptr ) {
    cout << aux->info;
    aux = aux->prox;
  }
  cout << endl;
}

void exercicio11() {
  Nodo *esquerda = nullptr, *direita = nullptr;
  inserePelaDireita(&esquerda,&direita,"DESCARTES");    mostra(esquerda);
  removePelaEsquerda(&esquerda,&direita,3);             mostra(esquerda);
  removePelaDireita(&esquerda,&direita,4);              mostra(esquerda);
  inserePelaEsquerda(&esquerda,&direita,"EDISON");      mostra(esquerda);
  removePelaEsquerda(&esquerda,&direita,5);             mostra(esquerda);
  inserePelaEsquerda(&esquerda,&direita,"RUTHERFORD");  mostra(esquerda);
  removePelaEsquerda(&esquerda,&direita,8);             mostra(esquerda);
  inserePelaEsquerda(&esquerda,&direita,"EINSTEIN");    mostra(esquerda);
  removePelaEsquerda(&esquerda,&direita,7);             mostra(esquerda);
  Nodo *aux = esquerda;
  while ( aux != nullptr ) {
    aux = aux->prox;
    delete aux;
  }
}

void questao_1() {
  Nodo *esquerda = nullptr, *direita = nullptr;
  inserePelaEsquerda(&esquerda,&direita,"USERNAME");      mostra(esquerda);
  removePelaEsquerda(&esquerda,&direita,4);               mostra(esquerda);
  removePelaDireita(&esquerda,&direita,2);                mostra(esquerda);
  inserePelaDireita(&esquerda,&direita,"SENHA");          mostra(esquerda);
  removePelaDireita(&esquerda,&direita,3);                mostra(esquerda);
  inserePelaDireita(&esquerda,&direita,"TELNET");         mostra(esquerda);
  removePelaDireita(&esquerda,&direita,5);                mostra(esquerda);
  Nodo *aux = esquerda;
  while ( aux != nullptr ) {
    aux = aux->prox;
    delete aux;
  }
}

int main() {
  cout << "----- exercicio 11 -----" << endl;
  exercicio11();
  // cout << "----- RESET -----" << endl;
  // questao_1();	
  // cout << "-----" << endl;
  return 0;
}
