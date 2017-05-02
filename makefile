CC = g++
CFLAGS = -fprofile-arcs -ftest-coverage  
LNK = -lgtest -lgcov

all: BoundaryTest EquivalenceTest PathTest 
BoundaryTest: BoundaryTest.cpp commission.o
	$(CC) -o BoundaryTest $(CFLAGS) $(LNK) BoundaryTest.cpp commission.o
EquivalenceTest: EquivalenceTest.cpp commission.o
	$(CC) -o EquivalenceTest $(CFLAGS) $(LNK) EquivalenceTest.cpp commission.o
PathTest: PathTest.cpp commission.o
	$(CC) -o PathTest $(CFLAGS) $(LNK) PathTest.cpp commission.o
commission.o: commission.h commission.cpp
	$(CC) -c -o commission.o $(CFLAGS) commission.cpp

clean:
	rm *.gcda
	rm *.gcov
	rm *.gcno
	rm *.o

