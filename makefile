SRC = main.c leitura.c controle.c opart.c oplog.c opmem.c saida.c
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall

main: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o main

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm main $(OBJ)