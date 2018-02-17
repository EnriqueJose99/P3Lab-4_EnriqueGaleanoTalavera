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

void Parqueo::listar(){
	int ver;
	cout<<"Ingrese el piso que quiere ver donde esta parqueado: "<<endl;
	cin>>ver;
	for(int i=0;i!=n;i++){
		for(int j=0;j!=m;j++){
			if(matrizThreeDimen[i][j][ver] != NULL){
				cout<<"Aqui hay un carro "<<endl;
				cout<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<ver<<"]"<<endl;
			}
			
		}
	}
}
void Parqueo::parquear(Carro* carroPar){
	int pisoParqueo = 0;
	bool encontroParque = false;
	cout<<"Ingrese el donde quiere parquear: "<<endl;
	cin>> pisoParqueo;
	for(int i=0;i != n;i++){
		if(encontroParque==false){
			for(int j=0;j != m;j++){
				if(matrizThreeDimen[i][j][pisoParqueo] == NULL){
					matrizThreeDimen[i][j][pisoParqueo] = carroPar;
					cout<<"Se parqueo :)"<<endl;
					encontroParque = true;
				}
			}
		}
	}
}

void Parqueo::eliminarParqueo(){
	int n1 = 0;
	int m1 = 0;
	int pisoEncuentra = 0;
	cout<<"Ingrese el piso donde se encuentra el carro: "<<endl;
	cin>> pisoEncuentra;
	cout<<"Ingrese la posicion donde se encuentra(n): "<<endl;
	cin>> n1;
	cout<<"Ingrese la posicion donde se encuentra(m): "<<endl;
	cin>>m1;


}

void Parqueo:: setAltura(double pAltura){
	altura= pAltura;
}

double Parqueo :: getAltura(){
	return altura;
}

Parqueo :: ~Parqueo(){
	/*for(int i=0;i!=n;i++){
		for(int j=0;j!=z;j++){
			for(int k=0;k!=z;k++){
				matrizThreeDimen[i][j][k] = NULL;
				delete matrizThreeDimen[i][j][k];
			}
			delete[] matrizThreeDimen[i][j];
		}
		delete[] matrizThreeDimen[i];
	}
	delete[] matrizThreeDimen;*/

}
