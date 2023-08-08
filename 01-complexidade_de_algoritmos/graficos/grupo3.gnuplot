set terminal jpeg enhanced size 1280,960 font "arial,24.0"
set output "grupo3.jpg"
set key top left
set xlabel "n"
set ylabel "f(n)"
plot [n=1:20][-100:5000] n**2     with lines lw 3 lt 5 title "n^2", \
                         n**3     with lines lw 3 lt 6 title "n^3", \
                         2**n     with lines lw 3 lt 7 title "2^n"
