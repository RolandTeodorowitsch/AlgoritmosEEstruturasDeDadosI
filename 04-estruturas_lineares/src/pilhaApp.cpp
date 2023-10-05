#include <iostream>

using namespace std;

struct Node {
  char info;  Node *next;
  Node(char i) {  info = i;  next = nullptr;  }
};

int main() {
  Node *top = nullptr, *aux;  char c;  bool fim = false;
  cout << "Pilha ['+' = PUSH / '-' = POP / '.' = QUIT]" << endl;
  while (!fim) {
    aux = top;   // VARREDURA EM LISTA SIMPLESMENTE ENCADEADA
    while ( aux != nullptr ) {  cout << "|" << aux->info;  aux = aux->next;  }
    cout << "|" << endl;
    cin >> c;
    switch(c) {
      case '-':
           if ( top == nullptr ) break;
           aux = top;         // POP / EXCLUSÃO DE ELEMENTO DA PILHA /
           top = top->next;   // EXCLUSÃO NO INÍCIO DE LISTA SIMPLESMENTE ENCADEADA
           cout << "> '" << aux->info << "' removido..." << endl;
           delete aux;
           break;
      case '+':
           cin >> c;
           aux = new Node(c);      // PUSH / INSERÇÃO NA PILHA /
           if ( top == nullptr )   // INSERÇÃO NO INÍCIO DE LISTA SIMPLESMENTE ENCADEADA
              top = aux;
           else {
              aux->next = top;
              top = aux;
           }
           break;
      case '.':
           fim = true;
           break;
    }
  }
  while ( top != nullptr ) {    // DESALOCAÇÃO DE LISTA SIMPLESMENTE ENCADEADA
    aux = top;
    top = top->next;
    delete aux;
  }
  return 0;
}
