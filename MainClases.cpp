#include <iostream>
#include "Edificio.h"
#include "Parqueo.h"
#include "Carro.h"
#include <string>
using namespace std;
//prototipos
int menu();


int main(){
	int op =0;
	int capacidadPersonas = 0;
	int cantidadPisos= 0;
	int alturaParqueo = 0;
	while(capacidadPersonas<50||capacidadPersonas>200){
		cout<<"Ingrese la capacidad de las personas: "<<endl;
		cin >>capacidadPersonas;
	}
	cout<<"Ingrese la cantidad de pisos: "<<endl;
	cin>>cantidadPisos;
	cout<<"Ingrese la altura del parque: "<<endl;
	cin>>alturaParqueo;
	Edificio* edificio = new Edificio(cantidadPisos, capacidadPersonas);
	Parqueo* parqueo = new Parqueo(edificio->getPersonaPiso(), edificio->getCantidadPisos(), alturaParqueo);
	while(op!=4){
		switch(op = menu()){
			case 1:{
					   string Color;
					   string Marca;
					   double Altura = 0;
					   cout<<"Ingrese el color del carro: "<<endl;
					   cin>> Color;
					   cout<<"Ingrese la marca del carro: "<<endl;
					   cin>> Marca;
					   cout<<"Ingrese la altura del carro: "<<endl;
					   cin>>Altura;
					   if(parqueo->getAltura()<Altura){
						   cout<<"Es muy grande el carro"<<endl;
						   break;
					   }
					   if(parqueo->getAltura()>= Altura){
						   Carro* carro = new Carro();
						   cout<<"Se creo exitosamente el Carro"<<endl;
						   parqueo->parquear(carro);
					   }
					   break;
				   }
			case 2:{
					   cout<<"No se elimina";
					   break;
				   }
			case 3:{
					   parqueo->listar();
					   break;
				   }
			case 4:{
					  
					   cout<<"Adios :)";
					   break;
				   }
				   
		}
	}
		
	
	
	
	return 0;
}

int menu(){
	int bandera = 0;
	int menuE = 0;
	while(bandera == 0){
		cout<<"1. Crea el Carro"<<endl;
		cout<<"2. Elimine el carro"<<endl;
		cout<<"3. Listar los parqueos"<<endl;
		cout<<"4.Salir"<<endl;
		cout<<"Ingrese donde quiere ingresar: "<<endl;
		cin>>menuE;
		return menuE;
	}
}

