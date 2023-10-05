#include <iostream>

using namespace std;

struct Node {
  char info;  Node *prev, *next;
  Node(char i) {  info = i;  prev = next = nullptr;  }
};

int main() {
  Node *head = nullptr, *tail = nullptr, *aux;  char c;  bool fim = false;
  cout << "Deque ['<' = ADDFIRST / '>' = ADDLAST / '{' = REMOVEFIRST / '}' = REMOVELAST / '.' = QUIT]" << endl;
  while (!fim) {
    aux = head;   // VARREDURA EM LISTA DUPLAMENTE ENCADEADA
    while ( aux != nullptr ) {  cout << "|" << aux->info;  aux = aux->next;  }
    cout << "|" << endl;
    cin >> c;
    switch(c) {
      case '{':
           if ( head == nullptr ) break;
           if ( head == tail ) {  // REMOVEFIRST / EXCLUSÃO DE ELEMENTO DO INÍCIO DO DEQUE /
              delete head;        // EXCLUSÃO NO INÍCIO DE LISTA DUPLAMENTE ENCADEADA
              head = tail = nullptr;
           }
           else {
              aux = head;
              head = head->next;
              head->prev = nullptr;
              delete aux;
           }
           break;
      case '}':
           if ( head == nullptr ) break;
           if ( head == tail ) {  // REMOVELAST / EXCLUSÃO DE ELEMENTO DO FINAL DO DEQUE /
              delete head;        // EXCLUSÃO NO FINAL DE LISTA DUPLAMENTE ENCADEADA
              head = tail = nullptr;
           }
           else {
              aux = tail;
              tail = tail->prev;
              tail->next = nullptr;
              delete aux;
           }
           break;
      case '<':
           cin >> c;
           aux = new Node(c);      // ADDFIRST / INSERÇÃO DE ELEMENTO DO INÍCIO DO DEQUE /
           if ( head == nullptr )  // INSERÇÃO NO INÍCIO DE LISTA DUPLAMENTE ENCADEADA
              head = tail = aux;
           else {
              aux->next = head;
              head->prev = aux;
              head = aux;
           }
           break;
      case '>':
           cin >> c;
           aux = new Node(c);      // ADDLAST / INSERÇÃO DE ELEMENTO DO FINAL DO DEQUE /
           if ( head == nullptr )  // INSERÇÃO NO FINAL DE LISTA DUPLAMENTE ENCADEADA
              head = tail = aux;
           else {
              tail->next = aux;
              aux->prev = tail;
              tail = aux;
           }
           break;
      case '.':
           fim = true;
           break;
    }
  }
  while ( head != nullptr ) {    // DESALOCAÇÃO DE LISTA DUPLAMENTE ENCADEADA
    aux = head;
    head = head->next;
    delete aux;
  }
  return 0;
}
