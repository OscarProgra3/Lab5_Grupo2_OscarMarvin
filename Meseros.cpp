#include "Meseros.h"

using namespace std;

Meseros::Meseros(){

}

Meseros::Meseros(int anio_contratacion, double sueldo, string username, string password, string nombre, int edad, int ID, int telefono){
	this -> anio_contratacion = anio_contratacion;
	this -> sueldo = sueldo;
	this -> username = username;
	this -> password = password;
	this -> nombre = nombre;
	this -> edad = edad;
	this -> ID = ID;
	this -> telefono = telefono;
}