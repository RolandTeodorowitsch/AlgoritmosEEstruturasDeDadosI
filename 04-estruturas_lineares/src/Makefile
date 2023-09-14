ALL =				vetores \
				vetores2 \
				IntStackApp \
				exercicio02 \
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
				StringArrayListApp

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

clean:
				@rm -f ${ALL}
