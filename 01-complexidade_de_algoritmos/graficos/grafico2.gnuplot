set terminal jpeg enhanced size 1280,960 font "arial,32.0"
set output "grafico2.jpg"
set key top left
set xlabel "n"
set ylabel "f(n)"
plot [n=1:250] n*n with lines title "n^2" lw 4, \
               1.5*n*n with lines title "(3/2)n^2" lw 4, \
               n*n+100*n with lines title "n^2+100n" lw 4
