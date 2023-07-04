CC = gcc
CFLAGS = -Wall -Wextra

# Règle pour compiler le projet
build: calculator.c
    $(CC) $(CFLAGS) -o calculator calculator.c

# Règle pour exécuter les tests
test: calculator
    ./calculator

# Règle pour nettoyer les fichiers générés
clean:
    rm -f calculator

.PHONY: build test clean
