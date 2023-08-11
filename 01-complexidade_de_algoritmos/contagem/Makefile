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

%.jpg:		%.gnuplot %.txt
		@gnuplot $<

%.txt:		%.exe
		@./$< > $@

contagem01.exe:	contagem01.c main.c
		@gcc -o contagem01.exe contagem01.c main.c -DTAM=1000

contagem02.exe:	contagem02.c main.c
		@gcc -o contagem02.exe contagem02.c main.c -DTAM=1000

contagem03.exe:	contagem03.c main.c
		@gcc -o contagem03.exe contagem03.c main.c -DTAM=1000

contagem04.exe:	contagem04.c main.c
		@gcc -o contagem04.exe contagem04.c main.c -DTAM=1000

contagem05.exe:	contagem05.c main.c
		@gcc -o contagem05.exe contagem05.c main.c -DTAM=1000

contagem06.exe:	contagem06.c main.c
		@gcc -o contagem06.exe contagem06.c main.c -DTAM=30

contagem07.exe:	contagem07.c main.c
		@gcc -o contagem07.exe contagem07.c main.c -DTAM=1000

contagem08.exe:	contagem08.c main.c
		@gcc -o contagem08.exe contagem08.c main.c -DTAM=1000

contagem09.exe:	contagem09.c main.c
		@gcc -o contagem09.exe contagem09.c main.c -DTAM=1000

contagem10.exe:	contagem10.c main.c
		@gcc -o contagem10.exe contagem10.c main.c -DTAM=1000

contagem11.exe:	contagem11.c main.c
		@gcc -o contagem11.exe contagem11.c main.c -DTAM=1000

contagem12.exe:	contagem12.c main.c
		@gcc -o contagem12.exe contagem12.c main.c -DTAM=1000

clean:
		@rm -f *exe *.jpg *.txt
