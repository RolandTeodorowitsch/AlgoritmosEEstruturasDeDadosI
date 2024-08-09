JPG =   	exercicio03a.jpg \
		exercicio03b.jpg \
		exercicio03c.jpg \
		exercicio03d.jpg \
		exercicio03e.jpg \
		exercicio03f.jpg \
		exercicio05a.jpg \
		exercicio05b.jpg \
		exercicio05c.jpg \
		exercicio05d.jpg \
		exercicio05e.jpg \
		exercicio05f.jpg

all:    	$(JPG)

%.jpg:		%.gnuplot %.txt
		@gnuplot $<

exercicio03a.txt:	exercicio03a.c main.c
			@gcc -o main $^ -DTAM=1000
			@./main > $@
			@rm -f main

exercicio03b.exe:	exercicio03b.c main.c
			@gcc -o main $^ -DTAM=1000
			@./main > $@
			@rm -f main

exercicio03c.exe:	exercicio03c.c main.c
			@gcc -o main $^ -DTAM=1000
			@./main > $@
			@rm -f main

exercicio03d.exe:	exercicio03d.c main.c
			@gcc -o main $^ -DTAM=1000
			@./main > $@
			@rm -f main

exercicio03e.exe:	exercicio03e.c main.c
			@gcc -o main $^ -DTAM=1000
			@./main > $@
			@rm -f main

exercicio03f.exe:	exercicio03f.c main.c
			@gcc -o main $^ -DTAM=1000
			@./main > $@
			@rm -f main

exercicio05a.txt:	exercicio05a.c main.c
			@gcc -o main $^ -DTAM=1000
			@./main > $@
			@rm -f main

exercicio05b.exe:	exercicio05b.c main.c
			@gcc -o main $^ -DTAM=1000
			@./main > $@
			@rm -f main

exercicio05c.exe:	exercicio05c.c main.c
			@gcc -o main $^ -DTAM=1000
			@./main > $@
			@rm -f main

exercicio05d.exe:	exercicio05d.c main.c
			@gcc -o main $^ -DTAM=1000
			@./main > $@
			@rm -f main

exercicio05e.exe:	exercicio05e.c main.c
			@gcc -o main $^ -DTAM=1000
			@./main > $@
			@rm -f main

exercicio05f.exe:	exercicio05f.c main.c
			@gcc -o main $^ -DTAM=1000
			@./main > $@
			@rm -f main

clean:
			@rm -f *.jpg *.txt
