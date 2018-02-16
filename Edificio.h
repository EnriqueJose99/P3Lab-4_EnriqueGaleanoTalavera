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
		void setPersonaPiso(int);
		int getPersonaPiso();
		//	
		void setCantidadPisos(int);
		int getCantidadPisos();

		~Edificio();


};
#endif
