set terminal jpeg enhanced size 1280,960 font "arial,24.0"
set output "n^2.jpg"
set xlabel "n"
set ylabel "n^2" 
plot [n=1:100][0:1000] n**2 with lines lw 5 lt 5 notitle
