COMPILE=g++ -c -Wall
LINK=g++ -g

all: main

main: main.o character.o
	$(LINK) bin/*.o -o main


main.o: src/main.cpp src/main.hpp
	$(COMPILE) src/main.cpp -o bin/main.o

character.o: src/entities/character.cpp src/entities/character.hpp
	$(COMPILE) src/entities/character.cpp -o bin/entites.o

clean:
	rm bin/*.o
	rm main
