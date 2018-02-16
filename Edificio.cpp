#include <iostream>
#include "Edificio.h"

using namespace std;

Edificio::Edificio(){

}
Edificio::Edificio(int pisos, int personas){
	this-> personaPiso = personas;
	this-> cantidadPisos = pisos;
}

void Edificio::setPersonaPiso(int persona){
	personaPiso= persona;
}
int Edificio::getPersonaPiso(){
	return personaPiso;
}
void Edificio::setCantidadPisos(int pisos){
	 cantidadPisos= pisos;
}
int Edificio::getCantidadPisos(){
	return cantidadPisos;
}
