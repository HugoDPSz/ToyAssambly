main: main.o leitura.o controle.o opart.o
	cc -Wall main.o leitura.o controle.o opart.o -o main

main.o: main.c
	cc -Wall -c main.c

leitura.o: leitura.c
	cc -Wall -c leitura.c

controle.o: controle.c
	cc -Wall -c controle.c

opart.o: opart.c
	cc -Wall -c opart.c

clean:
	rm main main.o leitura.o controle.o opart.o