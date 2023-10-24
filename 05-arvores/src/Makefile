ALL =				exemplo01 \
				exercicio03 \
				exercicio03-resp \
				exercicio04 \
				exercicio05 \
				exercicio05-resp \
				NodeCharTree1/app1 \
				NodeCharTree1/app2 \
				NodeCharTree2/app

CFLAGS =			-std=c++11

all:				${ALL}

exemplo01:			exemplo01.cpp
				@g++ ${CFLAGS} -o exemplo01 exemplo01.cpp

exercicio03:			exercicio03.cpp
				@g++ ${CFLAGS} -o exercicio03 exercicio03.cpp

exercicio03-resp:		exercicio03-resp.cpp
				@g++ ${CFLAGS} -o exercicio03-resp exercicio03-resp.cpp

exercicio04:			exercicio04.cpp
				@g++ ${CFLAGS} -o exercicio04 exercicio04.cpp

exercicio05:			exercicio05.cpp
				@g++ ${CFLAGS} -o exercicio05 exercicio05.cpp

NodeCharTree1/app1:		NodeCharTree1/NodeCharTree.cpp NodeCharTree1/NodeCharTree.hpp NodeCharTree1/main1.cpp
				@g++ ${CFLAGS} -o NodeCharTree1/app1 NodeCharTree1/NodeCharTree.cpp NodeCharTree1/main1.cpp
				@NodeCharTree1/app > NodeCharTree1/app1.output

NodeCharTree1/app2:		NodeCharTree1/NodeCharTree.cpp NodeCharTree1/NodeCharTree.hpp NodeCharTree1/main2.cpp
				@g++ ${CFLAGS} -o NodeCharTree1/app2 NodeCharTree1/NodeCharTree.cpp NodeCharTree1/main2.cpp
				@NodeCharTree1/app > NodeCharTree1/app2.output

NodeCharTree2/app:		NodeCharTree2/NodeCharTree.cpp NodeCharTree2/NodeCharTree.hpp NodeCharTree2/main.cpp
				@g++ ${CFLAGS} -o NodeCharTree2/app NodeCharTree2/NodeCharTree.cpp NodeCharTree2/main.cpp
				@NodeCharTree2/app > NodeCharTree2/app.output

clean:
				@rm -f ${ALL}
