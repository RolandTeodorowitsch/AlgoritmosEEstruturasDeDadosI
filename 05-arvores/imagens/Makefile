EPS =	\
	arvore1.eps \
	arvore2.eps \
	arvore3.eps \
	arvore4.eps \
	arvore4-v2.eps \
	floresta.eps \
	arvore_de_decisao.eps \
	exercicio01.eps \
	exercicio02.eps \
	arvore_de_diretorios.eps \
	expressao_aritmetica.eps \
	arvore_a.eps \
	arvore_a-cont.eps \
	arvore_a-enc.eps

all:	$(EPS)

%.eps:	%.gv
	@dot -Teps $< > $@

clean:
	@rm -f $(EPS)
