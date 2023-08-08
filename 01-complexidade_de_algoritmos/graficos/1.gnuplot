set terminal jpeg enhanced size 1280,960 font "arial,24.0"
set output "1.jpg"
set xlabel "n"
set ylabel "1" 
plot [n=1:100][0:5] 1 with lines lw 5 lt 1 notitle
