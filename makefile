exe: pile.o main.o
	gcc -Wall pile.o main.o -o exe

pile.o: pile.c
	gcc -c -Wall pile.c -o pile.o

main.o: main.c
	gcc -c -Wall main.c -o main.o

clean:
	rm -f *.o
	clear