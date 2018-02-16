
exe: Edificio.o Parqueo.o Carro.o
	g++ Edificio.o Parqueo.o Carro.o -o exe


MainClases.o: MainClases.cpp Edificio.h Parqueo.h Carro.h
	g++ -c MainClases.cpp


Edificio.o: Edificio.cpp Edificio.h Parqueo.h
	g++ -c Edificio.cpp

Parqueo.o: Parqueo.cpp Parqueo.h
	g++ -c Parqueo.cpp

Carro.o: Carro.cpp Carro.h
	g++ -c Carro.cpp
