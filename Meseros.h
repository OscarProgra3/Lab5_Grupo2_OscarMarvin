#include "Personal.h"
#include <string>
#ifndef MESEROS_H
#define MESEROS_H
#include <vector>

using namespace std;

class Meseros : public Personal{
	private:
		vector <string> lista_platillos;		
	public:
		Meseros(string, string, string, int, int, int, int, double, vector <string>);
		//año, sueldo //username, password, nombre, edad, ID, telefono
};
#endif