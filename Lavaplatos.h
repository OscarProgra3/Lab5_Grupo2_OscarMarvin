#include "Personal.h"
#include <string>
#ifndef LAVAPLATOS_H
#define LAVAPLATOS_H

using namespace std;

class Lavaplatos : public Personal{
	private:
		int nivel_motivacion;
	public:
		Lavaplatos();
		Lavaplatos(int, int, double, string, string, string, int, int, int);
		//nivel_motivacion //año, sueldo //username, password, nombre, edad, ID, telefono
		int getNivel_Motivacion();
		void setNivel_Motivacion(int);
}