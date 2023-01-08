CC = gcc
CFLAGS = -Wall -g

all: txtfind isort

# create o files
txtfind: txtfind.o
		$(CC) $(CFLAGS) -o txtfind txtfind.o
txtfind.o: txtfind.c 	
	$(CC) $(CFLAGS) -c txtfind.c
isort: isort.o
		$(CC) $(CFLAGS) -o isort isort.o
isort.o: isort.c 
	$(CC) $(CFLAGS) -c isort.c



	.PHONY: all clean 

clean:
	rm -f *.o *.so *.a connections