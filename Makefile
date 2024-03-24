CC=gcc

CFLAGS=-Wall -Wextra -std=c11

TARGET=main

all: $(TARGET)

$(TARGET): main.o
	$(CC) $(CFLAGS) main.o -o $(TARGET)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o $(TARGET)

run: $(TARGET)
	./$(TARGET)