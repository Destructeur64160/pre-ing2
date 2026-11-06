exe: AVL.o main.o
	gcc -Wall AVL.o main.o -o exe

AVL.o: AVL.c
	gcc -c -Wall AVL.c -o AVL.o

main.o: main.c
	gcc -c -Wall main.c -o main.o

clean:
	clear
	rm -f *.o