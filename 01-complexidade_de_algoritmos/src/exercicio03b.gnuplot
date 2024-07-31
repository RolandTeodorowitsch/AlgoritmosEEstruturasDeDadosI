set terminal jpeg enhanced size 1280,960 font "arial,24.0"
set output "exercicio03b.jpg"
set xlabel "n"
set ylabel "operações" 
plot "exercicio03b.txt" with lines lw 5 lt 2 notitle
