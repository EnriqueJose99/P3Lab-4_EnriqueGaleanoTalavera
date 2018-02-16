#include <iostream>
#include "Parqueo.h"

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
	for(int i=0;i<10;i++){
		matrizThreeDimen[i] =new Carro**[pisos];
		for(int j=0;j<10;j++){
			matrizThreeDimen[i][j] = new Carro*[z];
			for(int k=0;k<10;k++){
				matrizThreeDimen[i][j][k] = NULL;
			}
		}
	}
}

void Parqueo:: setAltura(double pAltura){
	altura= pAltura;
}

double Parqueo :: getAltura(){
	return altura;
}

Parqueo :: ~Parqueo(){

}
