TARGET := bin/zadanie3
CC := gcc
CFLAGS :=  -Wall -Werror -c

 
all: $(TARGET)

$(TARGET): build/var2.o build/solution.o
		$(CC) build/var2.o build/solution.o -o $@

build/var2.o: src/var2.c
		$(CC) $(CFLAGS) src/var2.c -o $@   

build/solution.o: src/solution.c
		$(CC) $(CFLAGS) src/solution.c -o $@


.PHONY: all clean
clean:
	rm -f build/*.o
	rm -f bin/*
