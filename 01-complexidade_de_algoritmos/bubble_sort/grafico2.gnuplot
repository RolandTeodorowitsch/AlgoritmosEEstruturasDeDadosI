set terminal jpeg
set output "grafico2.jpg"
set xlabel "n" font "Arial,16"
set ylabel "t(us)" font "Arial,16"
plot "curva1.txt" with lines title "Bubble Sort", \
     "curva2.txt" with lines title "Bubble Sort Otimizado"
