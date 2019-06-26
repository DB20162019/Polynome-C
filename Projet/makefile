CXX = gcc

CFLAGS = -c -Wall -Wpedantic -ansi -g -fpic

FILES = polynome.c polynomemain.c

TARGET = test

$(TARGET): $(FILES:.c=.o)
	$(CXX) -o $@ $(FILES:.c=.o)
	
clean:
	rm *.o $(TARGET)
	
name.o: polynome.h polynome.c
main.o: polynomemain.c polynome.h polynome.c

%.o: %.c
	$(CXX) $(CFLAGS) $*.c
