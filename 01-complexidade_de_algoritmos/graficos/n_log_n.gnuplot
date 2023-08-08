set terminal jpeg enhanced size 1280,960 font "arial,24.0"
set output "n_log_n.jpg"
set xlabel "n"
set ylabel "n.log(n)" 
plot [n=1:100][0:500] n*log(n) with lines lw 5 lt 4 notitle
