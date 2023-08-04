PDF =								pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas.pdf

all:								pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas.pdf

pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas.pdf:	pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas.tex \
								pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_pesquisa_linear.jpg \
								pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort1.jpg \
								pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort2.jpg \
								pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-inicio_curva_pesquisa_linear.txt \
								pesquisa_linear/main.c \
								pesquisa_linear/pesquisa_linear.c \
								bubble_sort/main.c \
								bubble_sort/bubble_sort1.c \
								bubble_sort/bubble_sort2.c
								@pdflatex -shell-escape pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas.tex
								@pdflatex -shell-escape pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas.tex

pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_pesquisa_linear.jpg:	pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_pesquisa_linear.curva pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_pesquisa_linear.gnuplot
								@gnuplot pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_pesquisa_linear.gnuplot

pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort1.jpg:	pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort1.curva pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort1.gnuplot
								@gnuplot pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort1.gnuplot

pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort2.jpg:	pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort1.curva pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort2.curva pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort2.gnuplot
								@gnuplot pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort2.gnuplot

pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_pesquisa_linear.curva: pesquisa_linear/pesquisa_linear
								@pesquisa_linear/pesquisa_linear > pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_pesquisa_linear.curva

pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort1.curva: bubble_sort/bubble_sort1
								@bubble_sort/bubble_sort1 > pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort1.curva

pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort2.curva: bubble_sort/bubble_sort2
								@bubble_sort/bubble_sort2 > pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_bubble_sort2.curva

pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-inicio_curva_pesquisa_linear.txt:	pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_pesquisa_linear.curva
								@head -22 pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_pesquisa_linear.curva > pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-inicio_curva_pesquisa_linear.txt
								@echo "..." >> pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-inicio_curva_pesquisa_linear.txt

pesquisa_linear/pesquisa_linear:				pesquisa_linear/pesquisa_linear.c pesquisa_linear/main.c
										@gcc -o pesquisa_linear/pesquisa_linear pesquisa_linear/pesquisa_linear.c pesquisa_linear/main.c

bubble_sort/bubble_sort1:					bubble_sort/bubble_sort1.c bubble_sort/main.c
								@gcc -o bubble_sort/bubble_sort1 bubble_sort/bubble_sort1.c bubble_sort/main.c

bubble_sort/bubble_sort2:					bubble_sort/bubble_sort2.c bubble_sort/main.c
								@gcc -o bubble_sort/bubble_sort2 bubble_sort/bubble_sort2.c bubble_sort/main.c

clean:
	@rm -f *~ *.pyg *.log *.out *.aux *.toc *.nav *.snm *.vrb
	@rm -rf _minted-*
