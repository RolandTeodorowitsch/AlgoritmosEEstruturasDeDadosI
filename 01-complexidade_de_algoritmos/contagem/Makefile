JPG =   	contagem01.jpg \
		contagem02.jpg \
		contagem03.jpg \
		contagem04.jpg \
		contagem05.jpg \
		contagem06.jpg \
		contagem07.jpg \
		contagem08.jpg \
		contagem09.jpg \
		contagem10.jpg \
		contagem11.jpg \
		contagem12.jpg

all:    	$(JPG)

contagem06.jpg:	contagem06.gnuplot contagem06.txt
		@gnuplot contagem06.gnuplot

contagem06.txt:	contagem06.exe
		@./contagem06.exe > contagem06.txt

contagem06.exe:	contagem06.c main06.c
		@gcc -o contagem06.exe contagem06.c main06.c

%.jpg:		%.gnuplot %.txt
		@gnuplot $<

%.txt:		%.exe
		@./$< > $@

%.exe:		%.c main.c
		@gcc -o $@ $< main.c

clean:
		@rm -f *exe *.jpg *.txt
