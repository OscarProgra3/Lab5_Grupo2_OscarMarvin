#include "Personal.h"
#include <string>
#ifndef MESEROS_H
#define MESEROS_H
#include <vector>

using namespace std;

class Lavaplatos : public Personal{
	private:
		vector <string> lista_platillos;		
	public:
		Meseros();
		Meseros(int, double, string, string, string, int, int, int);
		//año, sueldo //username, password, nombre, edad, ID, telefono
}