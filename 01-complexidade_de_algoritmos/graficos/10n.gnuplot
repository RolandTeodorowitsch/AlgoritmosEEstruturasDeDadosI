set terminal jpeg enhanced size 1280,960 font "arial,32.0"
set output "10n.jpg"
set xlabel "n"
set xtics 1,1,10
set ylabel "f(n)"
set style function linespoints
set style line 1 lw 8 lc rgb 'yellow' ps 4 pt 5 pi 10
plot [n=1:11][0:110] 10*n ls 1 notitle
