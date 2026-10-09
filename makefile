exe: main.o liste.o
	gcc -Wall main.o liste.o -o exe

main.o: main.c
	gcc -c -Wall main.c -o main.o

liste.o: liste.c
	gcc -c -Wall liste.c -o liste.o

clean: 
	rm -f *.o
	clear