CC = gcc
CFLAGS = -std=c99 --pedantic -Wall

compile: main.o
	$(CC) $^ $(TARGET) $(LDFLAGS) -o main
	rm -rf *.o

clean:
	rm -rf main *.o