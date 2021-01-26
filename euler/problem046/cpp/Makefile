run: main
	./main
main: main.o
	g++ -o main main.o -lgmp
main.o: main.cpp
	g++ -g -c -std=c++11 main.cpp -lgmp
clean:
	rm -rf main main.o
