#include "Usuario.h"
#include <string>

#ifndef CLIENTE_H
#define CLIENTE_H

using namespace std;

class Cliente : public Usuario
{
	private:
		string direccion;
		int rating;

	public:
		Cliente(string,string,string,int,int,int,string,int);
		//~Cliente();
	
		string getDireccion();
		void setDireccion(string);

		int getRating();
		void setRating(int);


};
#endif