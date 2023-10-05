#include <iostream>

using namespace std;
 
struct Node {
    char info;
    Node *prev, *next;
    Node(char i) {  info = i;  prev = next = nullptr;  }
};

void inserePelaDireita(Node **esquerda, Node **direita, string s) { // Adiciona no fim
  for (int i=0; i<s.size(); ++i) {
      Node *aux = new Node(s[i]);
      if ( *esquerda == nullptr) {  *esquerda = *direita = aux;  }
      else {  aux->prev = *direita;  (*direita)->next = aux;  *direita = aux;  }
  }
}

void removePelaDireita(Node **esquerda, Node **direita, int n) { // Remove do fim
  for (int i=0; i<n; ++i) {
      Node *aux = *direita;  *direita = (*direita)->prev;  delete aux;
      if ( *direita == nullptr ) *esquerda = nullptr;
      else (*direita)->next = nullptr;
  }
}

void inserePelaEsquerda(Node **esquerda, Node **direita, string s) { // Adiciona no início
  for (int i=0; i<s.size(); ++i) {
      Node *aux = new Node(s[i]);
      if ( *esquerda == nullptr) {  *esquerda = *direita = aux;  }
      else {  (*esquerda)->prev = aux;  aux->next = *esquerda;  *esquerda = aux;  }
  }
}

void removePelaEsquerda(Node **esquerda, Node **direita, int n) { // Remove do início
  for (int i=0; i<n; ++i) {
      Node *aux = *esquerda;  *esquerda = (*esquerda)->next;  delete aux;
      if ( *esquerda == nullptr) *direita = nullptr;
      else (*esquerda)->prev = nullptr;
  }
}

void mostra(Node *aux) {
  while ( aux != nullptr ) {
    cout << aux->info;
    aux = aux->next;
  }
  cout << endl;
}

void exercicio11() {
  Node *esquerda = nullptr, *direita = nullptr;
  inserePelaDireita(&esquerda,&direita,"DESCARTES");    mostra(esquerda);
  removePelaEsquerda(&esquerda,&direita,3);             mostra(esquerda);
  removePelaDireita(&esquerda,&direita,4);              mostra(esquerda);
  inserePelaEsquerda(&esquerda,&direita,"EDISON");      mostra(esquerda);
  removePelaEsquerda(&esquerda,&direita,5);             mostra(esquerda);
  inserePelaEsquerda(&esquerda,&direita,"RUTHERFORD");  mostra(esquerda);
  removePelaEsquerda(&esquerda,&direita,8);             mostra(esquerda);
  inserePelaEsquerda(&esquerda,&direita,"EINSTEIN");    mostra(esquerda);
  removePelaEsquerda(&esquerda,&direita,7);             mostra(esquerda);
  Node *aux = esquerda;
  while ( aux != nullptr ) {
    aux = aux->next;
    delete aux;
  }
}

void questao_1() {
  Node *esquerda = nullptr, *direita = nullptr;
  inserePelaEsquerda(&esquerda,&direita,"USERNAME");      mostra(esquerda);
  removePelaEsquerda(&esquerda,&direita,4);               mostra(esquerda);
  removePelaDireita(&esquerda,&direita,2);                mostra(esquerda);
  inserePelaDireita(&esquerda,&direita,"SENHA");          mostra(esquerda);
  removePelaDireita(&esquerda,&direita,3);                mostra(esquerda);
  inserePelaDireita(&esquerda,&direita,"TELNET");         mostra(esquerda);
  removePelaDireita(&esquerda,&direita,5);                mostra(esquerda);
  Node *aux = esquerda;
  while ( aux != nullptr ) {
    aux = aux->next;
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
