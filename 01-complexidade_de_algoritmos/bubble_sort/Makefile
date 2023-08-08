all:			grafico1.jpg grafico2.jpg

grafico1.jpg:		curva1.txt grafico1.gnuplot
			@gnuplot grafico1.gnuplot

grafico2.jpg:		curva2.txt grafico2.gnuplot
			@gnuplot grafico2.gnuplot

curva1.txt:		bubble_sort1
			@./bubble_sort1 > curva1.txt

curva2.txt:		bubble_sort2
			@./bubble_sort2 > curva2.txt

bubble_sort1:		bubble_sort1.c main.c
			@gcc -o bubble_sort1 bubble_sort1.c main.c

bubble_sort2:		bubble_sort2.c main.c
			@gcc -o bubble_sort2 bubble_sort2.c main.c
