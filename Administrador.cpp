#include "Administrador.h"

using namespace std;

Administrador::Administrador(){

}

Administrador::Administrador(int empleados_contratados, int empleados_despedidos, int anio_contratacion, double sueldo, string username, string password, string nombre, int edad, int ID, int telefono){
	this -> empleados_contratados = empleados_contratados;
	this -> empleados_despedidos = empleados_despedidos;
	this -> anio_contratacion = anio_contratacion;
	this -> sueldo = sueldo;
	this -> username = username;
	this -> password = password;
	this -> nombre = nombre;
	this -> edad = edad;
	this -> ID = ID;
	this -> telefono = telefono;
}

int Administrador::getEmpleados_Contratados(){
	return empleados_contratados;
}

void Administrador::setEmpleados_Contratados(int templeados_contratados){
	empleados_contratados = templeados_contratados;
}

int Administrador::getEmpleados_Despedidos(){
	return empleados_despedidos
}

void Administrador::setEmpleados_Despedidos(int templeados_despedidos){
	empleados_despedidos = templeados_despedidos;
}