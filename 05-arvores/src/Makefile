ALL =				exemplo01 \
				exercicio03 \
				exercicio03-resp \
				exercicio04

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

clean:
				@rm -f ${ALL}
