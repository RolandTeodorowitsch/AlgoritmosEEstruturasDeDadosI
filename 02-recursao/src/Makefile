APP =			bubbleSort \
			contagem \
			contagemRegressiva \
			euler \
			fatorial \
			indicesMatriz1 \
			indicesMatriz2 \
			inverteVetor \
			palindromo \
			pesquisaBinaria \
			pesquisaLinear \
			somatorio \
			loop.o	

all:			${APP}

loop.o:			loop.cpp
			@g++ -c loop.cpp

bubbleSort:		bubbleSortMain.cpp bubbleSortRec.cpp
			@g++ -o bubbleSort bubbleSortMain.cpp bubbleSortRec.cpp

contagem:		contagem.cpp contagemMain.cpp contagemRec.cpp
			@g++ -o contagem contagem.cpp contagemMain.cpp contagemRec.cpp	

contagemRegressiva:	contagemRegressiva.cpp contagemRegressivaMain.cpp contagemRegressivaRec.cpp
			@g++ -o contagemRegressiva contagemRegressiva.cpp contagemRegressivaMain.cpp contagemRegressivaRec.cpp

euler:			eulerMain.cpp eulerRec.cpp fatorial.cpp
			@g++ -o euler eulerMain.cpp eulerRec.cpp fatorial.cpp

fatorial:		fatorial.cpp fatorialMain.cpp fatorialRec.cpp
			@g++ -o fatorial fatorial.cpp fatorialMain.cpp fatorialRec.cpp

indicesMatriz1:		indicesMatriz.cpp indicesMatrizMain.cpp indicesMatrizRec1.cpp
			@g++ -o indicesMatriz1 indicesMatriz.cpp indicesMatrizMain.cpp indicesMatrizRec1.cpp 					

indicesMatriz2:		indicesMatriz.cpp indicesMatrizMain.cpp indicesMatrizRec2.cpp
			@g++ -o indicesMatriz2 indicesMatriz.cpp indicesMatrizMain.cpp indicesMatrizRec2.cpp 					

inverteVetor:		inverteVetor.cpp inverteVetorMain.cpp inverteVetorRec.cpp
			@g++ -o inverteVetor inverteVetor.cpp inverteVetorMain.cpp inverteVetorRec.cpp	

palindromo:		palindromo.cpp palindromoMain.cpp palindromoRec.cpp
			@g++ -o palindromo palindromo.cpp palindromoMain.cpp palindromoRec.cpp

pesquisaBinaria:	pesquisaBinaria.cpp pesquisaBinariaMain.cpp pesquisaBinariaRec.cpp
			@g++ -o pesquisaBinaria pesquisaBinaria.cpp pesquisaBinariaMain.cpp pesquisaBinariaRec.cpp

pesquisaLinear:		pesquisaLinear.cpp pesquisaLinearMain.cpp pesquisaLinearRec.cpp
			@g++ -o pesquisaLinear pesquisaLinear.cpp pesquisaLinearMain.cpp pesquisaLinearRec.cpp

somatorio:		somatorio.cpp somatorioMain.cpp somatorioRec.cpp
			@g++ -o somatorio somatorio.cpp somatorioMain.cpp somatorioRec.cpp

clean:
			@rm -f ${APP}		
