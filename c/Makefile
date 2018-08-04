CC = gcc
CFLAGS = -ansi -pedantic-errors -Wall -Werror
PROGS = step0_repl step1_read_print

all: $(PROGS)


step1_read_print: step1_read_print.o reader.o
	$(CC) -o step1_read_print step1_read_print.o reader.o
	

step1_read_print.o: step1_read_print.c 
	$(CC) $(CFLAGS) step1_read_print.c  -c 

reader.o: reader.h reader.c
	$(CC) $(CFLAGS) reader.c -c

step0_repl: step0_repl.o
	$(CC) -o step0_repl step0_repl.o

step0_repl.o: step0_repl.c 
	$(CC) $(CFLAGS) step0_repl.c -c

clean:
	rm -f *.o $(PROGS)

