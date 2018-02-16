#ifndef PARQUEO_H
#define PARQUEO_H
#include <string>

using namespace std;

class Parqueo{
	private:
		int pisosZ;
		int capacidad;
		int altura;
	public:
		Parqueo();
		Parqueo(int, int);

		void setCapacidad(int);
		int getCapacidad();
		p
		void setPisosZ(int);
		int getPisosZ();

		void setAltura(int);
		int getAltura();

		~Parqueo();

};

#endif
