# Define variables
CC = gcc
CFLAGS = -std=c99 --pedantic -Wall
LDFLAGS = -lncurses -ltinfo

# Define targets
TARGET = main

# Define source and object files
SRCS = main.c list.c iterator.c
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Compile the target
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(TARGET)

# Clean target to remove the compiled files and the executable
clean:
	rm -rf $(TARGET) $(OBJS)

# Compile .c files to .o files (implicit rule)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Define the PHONY targets to avoid confusion with files
.PHONY: all clean
