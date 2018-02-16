#include <iostream>
#define "Edificio.h"

using namespace std;

Edificio::Edificio(){

}
Edificio::Edificio(int pisos, int personas){
	this -> pisos= pisos;
	this -> personas = personas;
}

void Edificio::setPersonaPisos(int pisos){
	this -> pisos= pisos;
}
int Edificio::getPersoanPisos(){
	return pisos;
}
void Edificio::setCantidadPisos(int persona){
	this -> persona = persona;
}
int Edificio::getCantidadPisos(){
	return persona;
}
