#include "Personal.h"
#include <string>
#ifndef LAVAPLATOS_H
#define LAVAPLATOS_H

using namespace std;

class Lavaplatos : public Personal{
	private:
		int nivel_motivacion;
	public:
		Lavaplatos(string, string, string, int, int, int, int, double, int);
		//nivel_motivacion //año, sueldo //username, password, nombre, edad, ID, telefono
		int getNivel_Motivacion();
		void setNivel_Motivacion(int);


		string getTipoPersonal();
};
#endif