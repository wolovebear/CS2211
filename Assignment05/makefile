#format is target-name: target dependencies
#{-tab-}actions

# MACRO definitions
CC  = gcc
CFLAG = -std=c99 -Wall

# All Targets
all: operation

#Executable addition depends on the files operation.o operation_functions.o
operation: operation.o operation_functions.o
	$(CC) $(CFLAG) -o operation operation.o operation_functions.o

# operation.o depends on the source and header files
operation.o: operation.c operation_functions.h
	$(CC) $(CFLAG) -c operation.c

# operation_functions.o depends on the source and header files
operation_functions.o: operation_functions.c operation_functions.h
	$(CC) $(CFLAG) -c operation_functions.c

# test cases
test: operation
	operation 7 5 10 15
	operation 0.57 0.9 3.5 9.12
	operation 0 -9 0 -3
	operation 0.467 13 0 -4
	operation 0 8 9 15
	operation 0 0 15 30
	operation 12 0 0 0

#Clean the build directory
clean:
	rm -f *.o operation
