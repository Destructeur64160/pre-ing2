exe: main.o ABR.o
	gcc -Wall main.o ABR.o -o exe

main.o: main.c
	gcc -c -Wall main.c -o main.o

ABR.o: ABR.c
	gcc -c -Wall ABR.c -o ABR.o

clean:
	rm -f *.o
	clear
