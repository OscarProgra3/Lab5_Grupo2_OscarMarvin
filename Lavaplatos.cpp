#include "Lavaplatos.h"

using namespace std;

Lavaplatos::Lavaplatos(){

}

Lavaplatos::Lavaplatos(int nivel_motivacion, int anio_contratacion, double sueldo, string username, string password, string nombre, int edad, int ID, int telefono){
	this -> nivel_motivacion = nivel_motivacion;
	this -> anio_contratacion = anio_contratacion;
	this -> sueldo = sueldo;
	this -> username = username;
	this -> password = password;
	this -> nombre = nombre;
	this -> edad = edad;
	this -> ID = ID;
	this -> telefono = telefono;
}

int getNivel_Motivacion(){
	return nivel_motivacion;
}

void setNivel_Motivacion(int tnivel_motivacion){
	nivel_motivacion = tnivel_motivacion;
}