CC = gcc
OBJ = clistuff

all:  compile

compile:
	$(CC) -o $(OBJ) src/main.c