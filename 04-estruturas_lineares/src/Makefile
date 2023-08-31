ALL =			vetores \
			vetores2 \
			IntStackApp \
			questao2 \
			lista_simplesmente_encadeada \
			lista_duplamente_encadeada \
			IntLinkedStackApp

CFLAGS =		-std=c++11

all:			${ALL}

vetores:		vetores.cpp
			@g++ ${CFLAGS} -o vetores vetores.cpp

vetores2:		vetores2.cpp
			@g++ ${CFLAGS} -o vetores2 vetores2.cpp

IntStackApp:		IntStack.cpp IntStack.hpp IntStackMain.cpp
			@g++ ${CFLAGS} -o IntStackApp IntStackMain.cpp IntStack.cpp
			@./IntStackApp > IntStackApp.output

questao2:		questao2.cpp CharStack.hpp CharStack.hpp
			@g++ ${CFLAGS} -o questao2 questao2.cpp CharStack.cpp

lista_simplesmente_encadeada:	lista_simplesmente_encadeada.cpp
			@g++ ${CFLAGS} -o lista_simplesmente_encadeada lista_simplesmente_encadeada.cpp

lista_duplamente_encadeada:	lista_duplamente_encadeada.cpp
			@g++ ${CFLAGS} -o lista_duplamente_encadeada lista_duplamente_encadeada.cpp

IntLinkedStackApp:	IntLinkedStack.cpp IntLinkedStack.hpp IntLinkedStackMain.cpp
			@g++ ${CFLAGS} -o IntLinkedStackApp IntLinkedStackMain.cpp IntLinkedStack.cpp
			@./IntLinkedStackApp > IntLinkedStackApp.output

clean:
			@rm -f ${ALL}
