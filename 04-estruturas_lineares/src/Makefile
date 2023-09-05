ALL =			vetores \
			vetores2 \
			IntStackApp \
			questao2 \
			pilha_simplesmente_encadeada \
			pilha_simplesmente_encadeada2 \
			pilha_duplamente_encadeada \
			IntLinkedStackApp \
			IntLinkedStackQuestao \
			IntQueueApp \
			IntLinkedQueueApp

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

pilha_simplesmente_encadeada:	pilha_simplesmente_encadeada.cpp
			@g++ ${CFLAGS} -o pilha_simplesmente_encadeada pilha_simplesmente_encadeada.cpp

pilha_simplesmente_encadeada2:	pilha_simplesmente_encadeada2.cpp
			@g++ ${CFLAGS} -o pilha_simplesmente_encadeada2 pilha_simplesmente_encadeada2.cpp

pilha_duplamente_encadeada:	pilha_duplamente_encadeada.cpp
			@g++ ${CFLAGS} -o pilha_duplamente_encadeada pilha_duplamente_encadeada.cpp

IntLinkedStackApp:	IntLinkedStack.cpp IntLinkedStack.hpp IntLinkedStackMain.cpp
			@g++ ${CFLAGS} -o IntLinkedStackApp IntLinkedStackMain.cpp IntLinkedStack.cpp
			@./IntLinkedStackApp > IntLinkedStackApp.output

IntLinkedStackQuestao:	IntLinkedStack.cpp IntLinkedStack.hpp IntLinkedStackQuestao.cpp
			@g++ ${CFLAGS} -o IntLinkedStackQuestao IntLinkedStackQuestao.cpp IntLinkedStack.cpp

IntQueueApp:		IntQueue.cpp IntQueue.hpp IntQueueMain.cpp
			@g++ ${CFLAGS} -o IntQueueApp IntQueueMain.cpp IntQueue.cpp
			@./IntQueueApp > IntQueueApp.output

IntLinkedQueueApp:	IntLinkedQueue.cpp IntLinkedQueue.hpp IntLinkedQueueMain.cpp
			@g++ ${CFLAGS} -o IntLinkedQueueApp IntLinkedQueueMain.cpp IntLinkedQueue.cpp
			@./IntLinkedQueueApp > IntLinkedQueueApp.output

clean:
			@rm -f ${ALL}
