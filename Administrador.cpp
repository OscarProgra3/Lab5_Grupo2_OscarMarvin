#include "Administrador.h"

using namespace std;

Administrador::Administrador(string pusername, string ppass, string pnombre, int pedad, int pid, int ptelefono, int panio, double psueldo, int empleados_contratados, int empleados_despedidos) : Personal(username, ppass, pnombre, pedad, pid, ptelefono, panio, psueldo){
	this -> empleados_contratados = empleados_contratados;
	this -> empleados_despedidos = empleados_despedidos;
}

int Administrador::getEmpleados_Contratados(){
	return empleados_contratados;
}

void Administrador::setEmpleados_Contratados(int templeados_contratados){
	empleados_contratados = templeados_contratados;
}

int Administrador::getEmpleados_Despedidos(){
	return empleados_despedidos;
}

void Administrador::setEmpleados_Despedidos(int templeados_despedidos){
	empleados_despedidos = templeados_despedidos;
}