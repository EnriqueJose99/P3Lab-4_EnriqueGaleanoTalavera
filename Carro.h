#ifndef CARRO_H
#define CARRO_H

#include <string>

using namespace std;

class Carro{
	private:
		string marca;
		string carro;
		int altura;
	public:
		Carro();
		Carro(string, string , int);

		void setMarca(string);
		string getMarca();

		void setCarro(string);
		string getCarro();

		void setAltura(int);
		int getAltura();

	//	~Carro();
};
#endif
