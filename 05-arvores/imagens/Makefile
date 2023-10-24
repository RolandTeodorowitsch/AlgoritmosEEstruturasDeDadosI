PNG =	arvore_a-enc.png \
	arvore_binaria3-enc1.png \
	arvore_binaria3-enc2.png
	
EPS =	arvore1.eps \
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
	arvore_binaria1.eps \
	arvore_binaria1-v2.eps \
	arvores_binarias_diferentes.eps \
	arvore_binaria2.eps \
	arvore_de_decisao2.eps \
	arvore_binaria3.eps \
	arvore_b.eps \
	arvore_b-v2.eps \
	arvore_b-v3.eps \
	arvore_c.eps \
	exercicio05.eps

all:	$(EPS) $(PNG)

%.eps:	%.gv
	@dot -Teps $< > $@

%.png:	%.gv
	@dot -Tpng -Gdpi=300 $< > $@

clean:
	@rm -f $(EPS) $(PNG) *.pdf
