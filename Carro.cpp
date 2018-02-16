#include <iostream>
#include "Carro.h"

using namespace std;

Carro::Carro(){

}

Carro::Carro(string pMarca, string pCarro, int pAltura){
	this -> marca = pMarca;
	this -> carro = pCarro;
	this -> altura= pAltura;
}

void Carro:: setMarca(string pMarca){
	marca = pMarca;
}
string Carro::getMarca(){
	return marca;
}

void Carro:: setCarro(string pCarro){
	carro = pCarro;
}
string Carro::getCarro(){
	return carro;
}

void Carro:: setAltura(int pAltura){
	altura= pAltura;
}
int Carro::getAltura(){
	return altura;
}



