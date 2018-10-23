all: fileio.o
	gcc fileio.o
fileio: fileio.c
	gcc -c fileio.c
run:
	./a.out
	cat in.txt
	cat out.txt 