set terminal jpeg
set output "pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_pesquisa_linear.jpg"
set xlabel "n" font "Arial,16"
set ylabel "t(us)" font "Arial,16"
plot "pucrs-ec-poo-unidade_01-complexidade_de_algoritmos-laminas-grafico_pesquisa_linear.curva" with lines title "pesquisa\\_linear()"
