set terminal jpeg
set output "grafico1.jpg"
set xlabel "n" font "Arial,16"
set ylabel "t(us)" font "Arial,16"
plot "curva1.txt" with lines title "bubble\\_sort()"
