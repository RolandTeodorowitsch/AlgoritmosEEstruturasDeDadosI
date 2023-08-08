set terminal jpeg enhanced size 1280,960 font "arial,24.0"
set output "contagem11.jpg"
set xlabel "n"
set ylabel "operações" 
plot "contagem11.txt" with lines lw 5 lt 2 notitle
