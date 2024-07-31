all:		pior.txt melhor.txt

pior.txt:	pior
		./pior > pior.txt

pior:		main1.c maximo.c
		gcc -o pior maximo.c main1.c -DTIPO=double

melhor.txt:	melhor
		./melhor > melhor.txt

melhor:		main2.c maximo.c
		gcc -o melhor maximo.c main2.c -DTIPO=double


