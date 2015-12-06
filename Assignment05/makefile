#format is target-name: target dependencies
#{-tab-}actions

# MACRO definitions
CC  = gcc
CFLAG = -std=c99 -Wall

# All Targets
all: operation

#Executable operation depends on the files operation.o operation_functions.o
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
	operation

#Clean the build directory
clean:
	rm -f *.o operation
