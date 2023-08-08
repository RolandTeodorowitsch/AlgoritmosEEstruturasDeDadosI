set terminal jpeg enhanced size 1280,960 font "arial,24.0"
set output "log_n.jpg"
set xlabel "n"
set ylabel "log(n)" 
plot [n=1:100][0:5] log(n) with lines lw 5 lt 2 notitle
