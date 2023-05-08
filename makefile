all: main.c calc.c calc.h #creates the voltMain file
	gcc main.c calc.c calc.h -lm -o calc