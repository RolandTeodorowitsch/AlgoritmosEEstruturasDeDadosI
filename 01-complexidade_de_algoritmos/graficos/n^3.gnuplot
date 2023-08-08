set terminal jpeg enhanced size 1280,960 font "arial,24.0"
set output "n^3.jpg"
set xlabel "n"
set ylabel "n^3" 
plot [n=1:100][0:1000] n**3 with lines lw 5 lt 6 notitle
