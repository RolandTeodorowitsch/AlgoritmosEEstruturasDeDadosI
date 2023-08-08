set terminal jpeg enhanced size 1280,960 font "arial,24.0"
set output "grupo1.jpg"
set key top left
set xlabel "n"
set ylabel "f(n)"
plot [n=1:10][-1:10] 1      with lines lw 3 lt 1 title "1", \
                     log(n) with lines lw 3 lt 2 title "log(n)", \
                     n      with lines lw 3 lt 3 title "n"
