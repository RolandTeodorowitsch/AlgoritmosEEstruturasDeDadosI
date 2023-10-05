ALL =				vetores \
				vetores2 \
				IntStackApp \
				exercicio02 \
				exercicio03 \
				exercicio04 \
				exercicio05 \
				exercicio14 \
				exercicio14-solucao \
				exercicio15 \
				exercicio15-solucao \
				exercicio17 \
				exercicio18 \
				pilhaApp \
				filaApp \
				dequeApp \
				pilha_simplesmente_encadeada \
				pilha_simplesmente_encadeada2 \
				pilha_duplamente_encadeada \
				IntLinkedStackApp \
				IntLinkedStackQuestao \
				IntQueueApp \
				IntLinkedQueueApp \
				exercicio11 \
				IntDoubleLinkedDequeApp \
				StringArrayListApp \
				exercicio16 \
				exercicio16-template

CFLAGS =			-std=c++11

all:				${ALL}

vetores:			vetores.cpp
				@g++ ${CFLAGS} -o vetores vetores.cpp

vetores2:			vetores2.cpp
				@g++ ${CFLAGS} -o vetores2 vetores2.cpp

IntStackApp:			IntStack.cpp IntStack.hpp IntStackMain.cpp
				@g++ ${CFLAGS} -o IntStackApp IntStackMain.cpp IntStack.cpp
				@./IntStackApp > IntStackApp.output

exercicio02:			exercicio02.cpp CharStack.hpp CharStack.hpp
				@g++ ${CFLAGS} -o exercicio02 exercicio02.cpp CharStack.cpp

exercicio03:			exercicio03.cpp CharStack.hpp CharStack.hpp
				@g++ ${CFLAGS} -o exercicio03 exercicio03.cpp CharStack.cpp

exercicio04:			exercicio04.cpp CharStack.hpp CharStack.hpp
				@g++ ${CFLAGS} -o exercicio04 exercicio04.cpp CharStack.cpp

exercicio05:			exercicio05.cpp CharStack.hpp CharStack.hpp
				@g++ ${CFLAGS} -o exercicio05 exercicio05.cpp CharStack.cpp

exercicio14:			exercicio14.cpp
				@g++ ${CFLAGS} -o exercicio14 exercicio14.cpp

exercicio14-solucao:		exercicio14-solucao.cpp
				@g++ ${CFLAGS} -o exercicio14-solucao exercicio14-solucao.cpp

exercicio15:			exercicio15.cpp
				@g++ ${CFLAGS} -o exercicio15 exercicio15.cpp

exercicio15-solucao:		exercicio15-solucao.cpp
				@g++ ${CFLAGS} -o exercicio15-solucao exercicio15-solucao.cpp

exercicio17:			exercicio17.cpp
				@g++ ${CFLAGS} -o exercicio17 exercicio17.cpp

exercicio18:			exercicio18.cpp
				@g++ ${CFLAGS} -o exercicio18 exercicio18.cpp

pilhaApp:			pilhaApp.cpp
				@g++ ${CFLAGS} -o pilhaApp pilhaApp.cpp

filaApp:			filaApp.cpp
				@g++ ${CFLAGS} -o filaApp filaApp.cpp

dequeApp:			dequeApp.cpp
				@g++ ${CFLAGS} -o dequeApp dequeApp.cpp

pilha_simplesmente_encadeada:	pilha_simplesmente_encadeada.cpp
				@g++ ${CFLAGS} -o pilha_simplesmente_encadeada pilha_simplesmente_encadeada.cpp

pilha_simplesmente_encadeada2:	pilha_simplesmente_encadeada2.cpp
				@g++ ${CFLAGS} -o pilha_simplesmente_encadeada2 pilha_simplesmente_encadeada2.cpp

pilha_duplamente_encadeada:	pilha_duplamente_encadeada.cpp
				@g++ ${CFLAGS} -o pilha_duplamente_encadeada pilha_duplamente_encadeada.cpp

IntLinkedStackApp:		IntLinkedStack.cpp IntLinkedStack.hpp IntLinkedStackMain.cpp
				@g++ ${CFLAGS} -o IntLinkedStackApp IntLinkedStackMain.cpp IntLinkedStack.cpp
				@./IntLinkedStackApp > IntLinkedStackApp.output

IntLinkedStackQuestao:		IntLinkedStack.cpp IntLinkedStack.hpp IntLinkedStackQuestao.cpp
				@g++ ${CFLAGS} -o IntLinkedStackQuestao IntLinkedStackQuestao.cpp IntLinkedStack.cpp

IntQueueApp:			IntQueue.cpp IntQueue.hpp IntQueueMain.cpp
				@g++ ${CFLAGS} -o IntQueueApp IntQueueMain.cpp IntQueue.cpp
				@./IntQueueApp > IntQueueApp.output

IntLinkedQueueApp:		IntLinkedQueue.cpp IntLinkedQueue.hpp IntLinkedQueueMain.cpp
				@g++ ${CFLAGS} -o IntLinkedQueueApp IntLinkedQueueMain.cpp IntLinkedQueue.cpp
				@./IntLinkedQueueApp > IntLinkedQueueApp.output

exercicio11:			exercicio11.cpp
				@g++ ${CFLAGS} -o exercicio11 exercicio11.cpp

IntDoubleLinkedDequeApp:	IntDoubleLinkedDeque.cpp IntDoubleLinkedDeque.hpp IntDoubleLinkedDequeMain.cpp
				@g++ ${CFLAGS} -o IntDoubleLinkedDequeApp IntDoubleLinkedDequeMain.cpp IntDoubleLinkedDeque.cpp
				@./IntDoubleLinkedDequeApp > IntDoubleLinkedDequeApp.output

StringArrayListApp:		StringArrayList.cpp StringArrayList.hpp StringArrayListMain.cpp
				@g++ ${CFLAGS} -o StringArrayListApp StringArrayListMain.cpp StringArrayList.cpp
				@./StringArrayListApp > StringArrayListApp.output

exercicio16:			exercicio16.cpp
				@g++ ${CFLAGS} -o exercicio16 exercicio16.cpp
				@./exercicio16 < exercicio16.input > exercicio16.output

exercicio16-template:		exercicio16-template.cpp
				@g++ ${CFLAGS} -o exercicio16-template exercicio16-template.cpp

clean:
				@rm -f ${ALL}
