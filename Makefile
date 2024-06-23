.PHONY = all clean

CC := g++
CC := ${CC}

LINKERFLAG = -lm # Flags used with compiler

SRCS := $(wildcard *.cpp) # function for filenames with .cpp extension assigned to var SRCS
BINS := $(SRCS:%.cpp=%) # substitution refrence it allow to change "file.cpp" to "file"

all: clean oop ${BINS} # set phony target all call values in BINS as individual targets

# $< is pattern to match preresquisites
# $@ is pattern to match target

%: %.o # % match source and target file name
	@echo "Checking..."
	${CC} ${LINKERFLAG} $< -o $@ 

%.o: %.cpp 
	@echo "Creating object..."
	${CC} -c $<

oop:
	cd ./OOP && make && cd ..

clean:
	@echo "Cleaning up..."
	rm -rvf *.o ${BINS}
