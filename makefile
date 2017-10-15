all: nodeList.o main.o
	gcc-4.8 -o listo nodeList.o main.o

main.o: main.c
	gcc-4.8 -c main.c

nodeList.o: nodeList.c
	gcc-4.8 -c nodeList.c

run: all
	./listo

clean:
	rm -rf *.o listo
