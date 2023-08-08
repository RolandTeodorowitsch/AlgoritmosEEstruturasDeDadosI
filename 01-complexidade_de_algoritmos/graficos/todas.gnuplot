set terminal jpeg enhanced size 1280,960 font "arial,24.0"
set output "todas.jpg"
set xlabel "n"
set ylabel "f(n)"
plot [n=1:100][-100:1000] 1        with lines lw 1 lt 1 title "1", \
                          log(n)   with lines lw 1 lt 2 title "log(n)", \
                          n        with lines lw 1 lt 3 title "n", \
                          n*log(n) with lines lw 1 lt 4 title "n.log(n)", \
                          n**2     with lines lw 1 lt 5 title "n^2", \
                          n**3     with lines lw 1 lt 6 title "n^3", \
                          2**n     with lines lw 1 lt 7 title "2^n"
