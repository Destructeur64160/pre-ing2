exe: main.o arbre.o
	gcc -Wall main.o arbre.o -o exe

main.o: main.c
	gcc -c -Wall main.c -o main.o

arbre.o: arbre.c
	gcc -c -Wall arbre.c -o arbre.o

clean:
	rm -f *.o
	clear