set terminal jpeg enhanced size 1280,960 font "arial,32.0"
set output "grafico.jpg"
set xlabel "n"
set ylabel "t(ms)"
plot [10:100][3:4] "grafico.txt" with points lw 8 lt 5 ps 2 notitle
