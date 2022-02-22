SRC = src/main.c src/decleration.c

OBJ = src/main.o src/decleration.o

INC = inc
CFLAGS = -I$(INC)
a.out : $(OBJ)
	gcc $^ -I$(INC) -o $@

run: a.out
	./a.out

clean:
	rm a.out 
