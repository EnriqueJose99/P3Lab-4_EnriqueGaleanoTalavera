#include <iostream>
#include "Carro.h"

using namespace std;

Carro::Carro(){

}

Carro::Carro(string pMarca, string pCarro, int pAltura){
	this -> pMarca = pMarca;
	this -> pCarro = pCarro;
	this -> pAltura = pAltura;
}

void Alumno:: setMarca(string pMarca){
	this-> pMarca = pMarca;
}
string Alumno::getMarca(){
	return pMarca;
}



