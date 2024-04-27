CC = gcc
CFLAGS = -std=c99 --pedantic -Wall
LDFLAGS = -lncurses -ltinfo

compile: main.o list.o
	$(CC) $^ $(TARGET) $(LDFLAGS) -o main
	rm -rf *.o

clean:
	rm -rf main *.o