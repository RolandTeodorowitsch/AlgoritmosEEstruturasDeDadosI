ALL =				exemplo01 \
				exercicio03 \
				exercicio03-resp \
				exercicio04 \
				exercicio05 \
				exercicio05-resp \
				exercicio06/app1 \
				exercicio06/app2 \
				exercicio08/app \
				exercicio09/app \
				exercicio10/app \
				exercicio13/app \
				exercicio15/app

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

exercicio06/app1:		exercicio06/NodeCharTree.cpp exercicio06/NodeCharTree.hpp exercicio06/app1.cpp
				@g++ ${CFLAGS} -o exercicio06/app1 exercicio06/NodeCharTree.cpp exercicio06/app1.cpp
				@exercicio06/app1 > exercicio06/app1.output

exercicio06/app2:		exercicio06/NodeCharTree.cpp exercicio06/NodeCharTree.hpp exercicio06/app2.cpp
				@g++ ${CFLAGS} -o exercicio06/app2 exercicio06/NodeCharTree.cpp exercicio06/app2.cpp
				@exercicio06/app2 > exercicio06/app2.output

exercicio08/app:		exercicio08/NodeCharTree.cpp exercicio08/NodeCharTree.hpp exercicio08/app.cpp
				@g++ ${CFLAGS} -o exercicio08/app exercicio08/NodeCharTree.cpp exercicio08/app.cpp
				@exercicio08/app > exercicio08/app.output

exercicio09/app:		exercicio09/NodeTree.hpp exercicio09/app.cpp
				@g++ ${CFLAGS} -o exercicio09/app exercicio09/app.cpp
				@exercicio09/app > exercicio09/app.output

exercicio10/app:		exercicio10/NodeCharTree.cpp exercicio10/NodeCharTree.hpp exercicio10/app.cpp
				@g++ ${CFLAGS} -o exercicio10/app exercicio10/NodeCharTree.cpp exercicio10/app.cpp
				@exercicio10/app > exercicio10/app.output

exercicio13/app:		exercicio13/NodeBT.hpp exercicio13/app.cpp
				@g++ ${CFLAGS} -o exercicio13/app exercicio13/app.cpp
				@exercicio13/app > exercicio13/app.output

exercicio15/app:		exercicio15/NodeBT.hpp exercicio15/BST.hpp exercicio15/app.cpp
				@g++ ${CFLAGS} -o exercicio15/app exercicio15/app.cpp
				@exercicio15/app > exercicio15/app.output

clean:
				@rm -f ${ALL}
