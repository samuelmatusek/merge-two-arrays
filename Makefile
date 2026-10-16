CC = gcc
CFLAGS = -Wall -pedantic -Wextra -g
TARGET = spojeniDvouPoliDoJednoho

# Výchozí cíl (spustí se příkazem: make)
all: $(TARGET)

# Zkompiluje spojeniDvouPoliDoJednoho.c na binárku "spojeniDvouPoliDoJednoho"
$(TARGET): spojeniDvouPoliDoJednoho.c
	$(CC) $(CFLAGS) spojeniDvouPoliDoJednoho.c -o $(TARGET)

# Zkompiluje (pokud je potřeba) a spustí přes Valgrind (příkaz: make valgrind)
valgrind: $(TARGET)
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(TARGET)

# Smaže binárku (příkaz: make clean)
.PHONY: all valgrind clean
clean:
	rm -f $(TARGET)