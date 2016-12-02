CC=gcc
DEPS = hellomake.h
CFLAGS = -Wall -Wextra -std=c11
all: hellomake

%.o: %c $(DEPS)
	$(CC) -c -o $@ $<$(CFLAGS)

hellomake: hellomake.o hellofunc.o
	$(CC) -o hellomake hellomake.o hellofunc.o $(CFLAGS)
	
clean:
	rm -f hellomake *.o
	
remake: clean hellomake
