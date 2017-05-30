TARGET := bin/zadanie3
EXE_TEST := bin/test
CC := gcc
CFLAGS :=  -Wall -Werror -c
LFLAGS := -I thirdparty -I src -c
 
all: $(EXE_TEST) $(TARGET)

$(TARGET): build/src/var2.o build/src/solution.o
		$(CC) build/src/var2.o build/src/solution.o -o $@

build/src/var2.o: src/var2.c
		$(CC) $(CFLAGS) src/var2.c -o $@   

build/src/solution.o: src/solution.c
		$(CC) $(CFLAGS) src/solution.c -o $@

$(EXE_TEST): build/test/function_test.o build/test/validation_test.o build/test/main.o build/src/solution.o
		$(CC) build/test/function_test.o build/test/validation_test.o build/test/main.o build/src/solution.o -o $@

build/test/function_test.o: test/function_test.c       
		$(CC) $(LFLAGS) test/function_test.c -o $@   

build/test/validation_test.o: test/validation_test.c   
		$(CC) $(LFLAGS) test/validation_test.c -o $@

build/test/main.o: test/main.c 
		$(CC) -I thirdparty -c test/main.c -o $@

.PHONY: all clean
clean:
	rm -f build/src/*.o
	rm -f build/test/*.o 
	rm -f bin/*.o