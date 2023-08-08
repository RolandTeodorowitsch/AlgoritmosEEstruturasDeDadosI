set terminal jpeg enhanced size 1280,960 font "arial,24.0"
set output "n.jpg"
set xlabel "n"
set ylabel "n" 
plot [n=1:100][0:100] n with lines lw 5 lt 3 notitle
