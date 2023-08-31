PDF =		\
		pucrs-ec-poo-unidade_04-estruturas_lineares-laminas.pdf

all:		$(PDF) src.zip

%.pdf:		%.tex
		@pdflatex -shell-escape $<
		@pdflatex -shell-escape $<

src.zip:	src/IntLinkedStack.hpp src/IntLinkedStackMain.cpp src/IntStack.cpp src/IntStack.hpp src/IntStackMain.cpp \
		src/lista_simplesmente_encadeada.cpp src/vetores2.cpp src/vetores.cpp
		@zip -r src.zip src/IntLinkedStack.hpp src/IntLinkedStackMain.cpp src/IntStack.cpp src/IntStack.hpp \
			src/IntStackMain.cpp src/lista_simplesmente_encadeada.cpp src/vetores2.cpp src/vetores.cpp

clean:
		@rm -f *~ *.pyg *.log *.out *.aux *.toc *.nav *.snm *.vrb
		@rm -rf _minted-*
