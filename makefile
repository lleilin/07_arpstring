all.o:
	gcc -o arpstring.o arpstring.c

run:
	./arpstring.o

clean:
	-rm *.o
