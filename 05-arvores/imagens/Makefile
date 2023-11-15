PNG =	arvore_a-enc.png \
	arvore_binaria03-enc1.png \
	arvore_binaria03-enc2.png
	
EPS =	arvore1.eps \
	arvore2.eps \
	arvore3.eps \
	arvore4.eps \
	arvore4-v2.eps \
	floresta.eps \
	arvore_de_decisao.eps \
	arvore_de_decisao2.eps \
	arvore_de_decisao3.eps \
	exercicio01.eps \
	exercicio02.eps \
	arvore_de_diretorios.eps \
	expressao_aritmetica.eps \
	arvore_a.eps \
	arvore_a-cont.eps \
	arvore_binaria01.eps \
	arvore_binaria01-v2.eps \
	arvores_binarias_diferentes.eps \
	arvore_binaria02.eps \
	arvore_binaria03.eps \
	arvore_binaria04.eps \
	arvore_binaria05.eps \
	arvore_binaria06.eps \
	arvore_binaria07.eps \
	arvore_binaria08.eps \
	arvore_binaria09-expressao.eps \
	arvore_binaria10-expressao.eps \
	arvore_b.eps \
	arvore_b-v2.eps \
	arvore_b-v3.eps \
	arvore_c.eps \
	arvore_c-passo1.eps \
	arvore_c-passo2.eps \
	arvore_d.eps \
	arvore_e.eps \
	exercicio05.eps

all:	$(EPS) $(PNG)

%.eps:	%.gv
	@dot -Teps $< > $@

%.png:	%.gv
	@dot -Tpng -Gdpi=300 $< > $@

clean:
	@rm -f $(EPS) $(PNG) *.pdf
