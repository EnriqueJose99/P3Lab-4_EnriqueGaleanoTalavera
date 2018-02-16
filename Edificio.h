#ifndef EDIFICIO_H
#define EDIFICIO_H
#include <string>

using namespace std;

class Edificio{
	private:
		int personaPiso;
		int cantidadPisos;

	public:
		//constructor sobrecargado
		Edificio(int, int);

		//contructor simple
		Edificio();
		//setters and getters
		int getPersonaPiso();
		void setPersonaPiso(int);
		//
		int getCantidadPisos();
		void setCantidadPisos(int);

		~Edificio();


};
#endif
