CC = gcc
CFLAGS = -Wall

# Règle pour compiler le projet
build: ./calculator.c
	$(CC) $(CFLAGS) -o ./calculator ./calculator.c


test: ./calculator
	./calculator


clean: ./calculator
	rm -f ./calculator