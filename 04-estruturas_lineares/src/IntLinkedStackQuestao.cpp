#include <iostream>
#include "IntLinkedStack.hpp"

using namespace std;

void print(IntLinkedStack &stack) {
  cout << "  " << stack.str() << "  size=" << stack.size() << "  top=";
  int t;   bool res = stack.top(t);
  if (res) cout << t; else cout << "X";
  cout << "  isEmpty=" << stack.isEmpty() << endl;
}

int main() {
/*
O enunciado a seguir foi adaptado de uma questão de concurso (questão 33, da prova do concurso da UFG realizado em 2023 para Técnico de Tecnologia da Informação, elaborada pelo Instituto Verbena.

Considere duas estruturas de dados do tipo pilha, denominadas A e B, com as sequências de valores (11, 33, 22) e (44, 22, 11) respectivamente, em que o elemento mais à direita de cada sequência refere-se ao topo da pilha. Sejam as operações:
\begin{enumerate}{i}
	\item \texttt{desempilha(P)}, que remove um elemento da pilha \texttt{P} e retorna esse elemento;
	\item \texttt{empilha(P, E)}, que insere o elemento \texttt{E} na pilha \texttt{P}; e
	\item \texttt{topo(P)}, que retorna o elemento que está no topo da pilha \texttt{P}.
\end{enumerate}
Após executar a expressão "\texttt{empilha(B, desempilha(A) + desempilha(A) - desempilha(B) + topo(B))}", qual será a sequência de elementos de B?
	=(44, 22, 66).#
*/
  IntLinkedStack a;  a.push(11);  a.push(33);  a.push(22);
  IntLinkedStack b;  b.push(44);  b.push(22);  b.push(11);
  int a_pop1, a_pop2, b_pop, b_top;
  a.pop(a_pop1);
  a.pop(a_pop2);
  b.pop(b_pop);
  b.top(b_top);
  b.push( a_pop1 + a_pop2 - b_pop + b_top );
  print(b);
  return 0;
}

