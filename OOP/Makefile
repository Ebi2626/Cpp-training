.PHONY = all clean

CC := g++
CC := ${CC}

SRCS := $(wildcard *.cpp) # function for filenames with .cpp extension assigned to var SRCS
BINS := $(SRCS:%.cpp=%) # substitution refrence it allow to change "file.cpp" to "file"

all: clean main clean.o

person.o:
	${CC} -c ./Person.cpp -o ./Person.o

bankAccount.o:
	${CC} -c ./BankAccount.cpp -o ./BankAccount.o

oop2.o:
	${CC} -c ./oop2.cpp -o ./oop2.o

main: oop2.o BankAccount.o Person.o
	g++ oop2.o BankAccount.o Person.o -o main

clean:
	@echo "Cleaning up..."
	make clean.o && make clean.bins

clean.o:
	@echo "Cleaning *.o"
	rm -rvf *.o 

clean.bins:
	@echo "Cleaning bins"
	rm -rvf ${BINS} main