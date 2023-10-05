#include <iostream>

using namespace std;

struct Node {
  char info;  Node *prev, *next;
  Node(char i) {  info = i;  prev = next = nullptr;  }
};

int main() {
  Node *head = nullptr, *tail = nullptr, *aux;  char c;  bool fim = false;
  cout << "Fila ['+' = ENQUEUE / '-' = DEQUEUE / '.' = QUIT]" << endl;
  while (!fim) {
    aux = head;   // VARREDURA EM LISTA DUPLAMENTE ENCADEADA
    while ( aux != nullptr ) {  cout << "|" << aux->info;  aux = aux->next;  }
    cout << "|" << endl;
    cin >> c;
    switch(c) {
      case '-':
           if ( head == nullptr ) break;
           aux = head;          // DEQUEUE / EXCLUSÃO DE ELEMENTO DA FILA /
           head = head->next;   // EXCLUSÃO NO INÍCIO DE LISTA DUPLAMENTE ENCADEADA
           if ( head == nullptr) tail = nullptr;
           else                  head->prev = nullptr;
           cout << "> '" << aux->info << "' removido..." << endl;
           delete aux;
           break;
      case '+':
           cin >> c;
           aux = new Node(c);      // ENQUEUE / INSERÇÃO NA FILA /
           if ( head == nullptr )  // INSERÇÃO NO INÍCIO DE LISTA DUPLAMENTE ENCADEADA
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
