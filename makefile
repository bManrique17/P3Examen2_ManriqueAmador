temp.o:	mainExamen2.o Simbolo.o Pila.o
	g++ mainExamen2.o Simbolo.o Pila.o

mainExamen2.o:	mainExamen2.cpp
	g++ -c -std=c++11 mainExamen2.cpp

Simbolo.o:	Simbolo.cpp
	g++ -c -std=c++11 Simbolo.cpp

Pila.o:	Pila.cpp Simbolo.h
	g++ -c -std=c++11 Pila.cpp
