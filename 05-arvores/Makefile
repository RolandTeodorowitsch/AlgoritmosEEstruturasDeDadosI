PDF =		\
		pucrs-ec-poo-unidade_05-arvores-laminas.pdf

all:		$(PDF) src.zip

%.pdf:		%.tex
		@pdflatex -shell-escape $<
		@pdflatex -shell-escape $<

src.zip:	src/exemplo01.cpp src/exercicio03.cpp src/exercicio05.cpp
		@zip -r src.zip src/exemplo01.cpp src/exercicio03.cpp src/exercicio05.cpp

clean:
		@rm -f *~ *.pyg *.log *.out *.aux *.toc *.nav *.snm *.vrb
		@rm -rf _minted-*
