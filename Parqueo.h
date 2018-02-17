#ifndef PARQUEO_H
#define PARQUEO_H
#include <string>
#include "Carro.h"

using namespace std;

class Parqueo{
	private:
		int n;
		int m;
		int z;
		double altura;
		Carro**** matrizThreeDimen;
	public:
		Parqueo();
		Parqueo(int, int, double);
		void eliminarParqueo();
		void parquear(Carro*);
		void listar();


		void setCapacidad(int);
		int getCapacidad();
		
		void setPisosZ(int);
		int getPisosZ();

		void setAltura(double);
		double getAltura();

		~Parqueo();

};

#endif
