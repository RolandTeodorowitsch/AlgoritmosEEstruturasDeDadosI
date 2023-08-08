set terminal jpeg
set output "grafico.jpg"
set xlabel "n" font "Arial,16"
set ylabel "t(us)" font "Arial,16"
plot "curva.txt" with lines title "pesquisa\\_linear()"
