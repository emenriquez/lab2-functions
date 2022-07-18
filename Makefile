all: a.out

a.out:
	g++ -std=c++11 FunctionsLab.cpp

test: a.out
	./a.out

clean:
	rm a.out
