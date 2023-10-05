#include <iostream>

using namespace std;

struct Node {
  char info;  Node *next;
  Node(char i) {  info = i;  next = nullptr;  }
};

int main() {
  Node *head = nullptr, *tail = nullptr, *prev, *aux, *node;  char c;  bool fim = false;  unsigned pos;
  // cout << "'<' = PUSH_FRONT / '>' = PUSH_BACK / '{' = POP_FRONT / '}' = POP_BACK / '+' = INSERT / '-' = REMOVE / '.' = QUIT" << endl;
  while (!fim) {
    aux = head;   // VARREDURA EM LISTA SIMPLESMENTE ENCADEADA
    while ( aux != nullptr ) {  cout << "|" << aux->info;  aux = aux->next;  }
    cout << "|" << endl;
    cin >> c;
    switch(c) {
      case '<':
           cin >> c;
           node = new Node(c);  // ADDFIRST / INSERÇÃO DE ELEMENTO DO INÍCIO DA LISTA /
           if ( head == nullptr )     // INSERÇÃO NO INÍCIO DE LISTA SIMPLESMENTE ENCADEADA
              head = tail = node;
           else {
              node->next = head;
              head = node;
           }
           break;
      case '>':
           cin >> c;
           node = new Node(c);  // ADDLAST / INSERÇÃO DE ELEMENTO DO FINAL DA LISTA /
           if ( head == nullptr )     // INSERÇÃO NO FINAL DE LISTA SIMPLESMENTE ENCADEADA
              head = tail = node;
           else {
              tail->next = node;
              tail = node;
           }
           break;
      case '+':
           cin >> c >> pos;
           node = new Node(c);
           if ( head == nullptr ) {  head = tail = node;  break;  }
           prev = nullptr;
           aux = head;
           for (unsigned i=0; i<pos && aux!=nullptr; ++i) {  prev = aux;  aux = aux->next; }
           if ( prev == nullptr ) {      // INSERCÃO NO INÍCIO
              node->next = head;
              head = node;
           }
           else if ( aux == nullptr ) {  // INSERCÃO NO FIM
              prev->next = node;
              tail = node;
           }
           else {                        // INSERÇÃO NO MEIO
              prev->next = node;
              node->next = aux;
           }
           break;
      case '}':
           if ( head == nullptr ) {  cout << "ERRO" <<  endl;  break;  }
           if ( head == tail ) {  // REMOVEFIRST / EXCLUSÃO DE ELEMENTO DO FIM DA LISTA /
              delete head;        // EXCLUSÃO NO FIM DE LISTA SIMPLESMENTE ENCADEADA
              head = tail = nullptr;
           }
           else {
              prev = nullptr;  aux = head;
              while ( aux->next != nullptr ) {  prev = aux;  aux = aux->next;  }
              prev->next = nullptr;
              delete tail;
              tail = prev;
           }
           break;
      case '{':
           if ( head == nullptr ) {  cout << "ERRO" <<  endl;  break;  }
           if ( head == tail ) {  // REMOVEFIRST / EXCLUSÃO DE ELEMENTO DO INÍCIO DA LISTA /
              delete head;        // EXCLUSÃO NO INÍCIO DE LISTA SIMPLESMENTE ENCADEADA
              head = tail = nullptr;
           }
           else {
              aux = head;
              head = head->next;
              if ( head == nullptr ) tail = nullptr;
              delete aux;
           }
           break;
      case '-':
           cin >> pos;
           prev = nullptr;
           aux = head;
           for (unsigned i=0; i<pos && aux!=nullptr; ++i) {  prev = aux;  aux = aux->next; }
           if ( aux == nullptr  ) {  cout << "ERRO" << endl;  break;  }
           if ( prev == nullptr ) {  // REMOVEFIRST / EXCLUSÃO DE ELEMENTO DO INÍCIO DA LISTA /
              if ( head == tail ) {  // EXCLUSÃO NO INÍCIO DE LISTA SIMPLESMENTE ENCADEADA
                 delete head;
                 head = tail = nullptr;
              }
              else {
                 aux = head;
                 head = head->next;
                 if ( head == nullptr ) tail = nullptr;
                 delete aux;
              }
           }
           else {                      // REMOVE / EXCLUSÃO DE ELEMENTO DO MEIO DA LISTA /
              prev->next = aux->next;  // EXCLUSÃO NO MEIO DE LISTA SIMPLESMENTE ENCADEADA
              if ( aux->next == nullptr ) tail = prev;
              delete aux;
           }
           break;
      case '.':
           fim = true;
           break;
    }
  }
  while ( head != nullptr ) {    // DESALOCAÇÃO DE LISTA SIMPLESMENTE ENCADEADA
    aux = head;
    head = head->next;
    delete aux;
  }
  return 0;
}
