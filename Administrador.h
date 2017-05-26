#include "Personal.h"
#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include <string>

using namespace std;

class Administrador : public Personal{
	private:
		int empleados_contratados;
		int empleados_despedidos;
	public:
		Administrador();
		Administrador(int, int, int, double, string, string, string, int, int, int); 
		//contratados, despedidos //año, sueldo //username, password, nombre, edad, ID, telefono
		int getEmpleados_Contratados();
		void setEmpleados_Contratados(int);
		int getEmpleados_Despedidos();
		void setEmpleados_Despedidos(int);
};
#endif