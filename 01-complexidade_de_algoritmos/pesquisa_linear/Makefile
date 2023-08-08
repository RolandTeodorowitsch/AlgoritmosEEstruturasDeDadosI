all:			grafico.jpg curva-inicio.txt

grafico.jpg:		curva.txt grafico.gnuplot
			@gnuplot grafico.gnuplot


curva.txt:		pesquisa_linear
			@./pesquisa_linear > curva.txt


pesquisa_linear:	pesquisa_linear.c main.c
			@gcc -o pesquisa_linear pesquisa_linear.c main.c

curva-inicio.txt:	curva.txt
			@head -22 curva.txt > curva-inicio.txt
			@echo "..." >> curva-inicio.txt
