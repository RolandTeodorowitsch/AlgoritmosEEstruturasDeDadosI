set terminal jpeg enhanced size 1280,960 font "arial,24.0"
set output "exercicio05d.jpg"
set xlabel "n"
set ylabel "operações" 
plot "exercicio05d.txt" with lines lw 5 lt 2 notitle
