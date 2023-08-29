APP =			vetores \
			vetores2 \
			IntStackApp \
			questao2

all:			${APP}

vetores:		vetores.cpp
			@g++ -o vetores vetores.cpp

vetores2:		vetores2.cpp
			@g++ -o vetores2 vetores2.cpp

IntStackApp:		IntStack.cpp IntStack.hpp IntStackMain.cpp
			@g++ -o IntStackApp IntStackMain.cpp IntStack.cpp
			@./IntStackApp > IntStackApp.output

questao2:		questao2.cpp CharStack.hpp CharStack.hpp
			@g++ -o questao2 questao2.cpp CharStack.cpp

clean:
			@rm -f ${APP}
