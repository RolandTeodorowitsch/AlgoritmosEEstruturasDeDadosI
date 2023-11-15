PDF =		\
		pucrs-ec-poo-unidade_05-arvores-laminas.pdf

all:		$(PDF) src.zip

%.pdf:		%.tex
		@pdflatex -shell-escape $<
		@pdflatex -shell-escape $<

src.zip:	src/exemplo01.cpp src/exercicio03.cpp src/exercicio05.cpp src/IntTree.hpp src/IntBTree.hpp \
		src/exercicio06/NodeCharTree.hpp src/exercicio06/app1.cpp src/exercicio06/app2.cpp \
		src/exercicio06/app1.output src/exercicio06/app2.output \
		src/exercicio08/app.output src/exercicio08/app.cpp src/exercicio08/NodeCharTree.hpp \
		src/exercicio09/app.output src/exercicio09/app.cpp \
		src/exercicio10/NodeCharTree.hpp src/exercicio10/app.output src/exercicio10/app.cpp \
		src/exercicio13/app.output src/exercicio13/app.cpp \
		src/exercicio15/app.output src/exercicio15/app.cpp
		@zip -r src.zip src/exemplo01.cpp src/exercicio03.cpp src/exercicio05.cpp src/IntTree.hpp src/IntBTree.hpp \
				src/exercicio06/NodeCharTree.hpp src/exercicio06/app1.cpp src/exercicio06/app2.cpp \
				src/exercicio06/app1.output src/exercicio06/app2.output \
				src/exercicio08/app.output src/exercicio08/app.cpp src/exercicio08/NodeCharTree.hpp \
				src/exercicio09/app.output src/exercicio09/app.cpp \
				src/exercicio10/NodeCharTree.hpp src/exercicio10/app.output src/exercicio10/app.cpp \
				src/exercicio13/app.output src/exercicio13/app.cpp \
				src/exercicio15/app.output src/exercicio15/app.cpp

clean:
		@rm -f *~ *.pyg *.log *.out *.aux *.toc *.nav *.snm *.vrb
		@rm -rf _minted-*
