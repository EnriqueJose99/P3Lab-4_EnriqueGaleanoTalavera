#include <iostream>
#include "Parqueo.h"
#include "Carro.h"

using namespace std;



Parqueo::Parqueo(){

}

Parqueo::Parqueo(int capacidad, int pisos, double altura){	
	n = capacidad/10;
	this -> altura= altura;
	if(n < 12){
		m = n*0.7;
	}
	if(n>=12){
		m=n*0.4;
	}
	z = pisos;
	matrizThreeDimen = new Carro***[capacidad];
	for(int i=0;i<capacidad;i++){
		matrizThreeDimen[i] =new Carro**[pisos];
		for(int j=0;j<pisos;j++){
			matrizThreeDimen[i][j] = new Carro*[z];
			for(int k=0;k<z;k++){
				matrizThreeDimen[i][j][k] = NULL;
			}
		}
	}
}

void Parqueo::parquear(Carro* carro1){
	int pisoParqueo = 0;
	cout<<"Ingrese el donde quiere parquear: "<<endl;
	cin>> pisoParqueo;


}

void Parqueo:: setAltura(double pAltura){
	altura= pAltura;
}

double Parqueo :: getAltura(){
	return altura;
}

Parqueo :: ~Parqueo(){

}
