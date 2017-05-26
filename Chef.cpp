#include "Chef.h"

using namespace std;

Chef::Chef(){

}

Chef::Chef(string platillo_favorito, double rating, int anio_contratacion, double sueldo, string username, string password, string nombre, int edad, int ID, int telefono){
	this -> platillo_favorito = platillo_favorito;
	this -> rating = rating;
	this -> anio_contratacion = anio_contratacion;
	this -> sueldo = sueldo;
	this -> username = username;
	this -> password = password;
	this -> nombre = nombre;
	this -> edad = edad;
	this -> ID = ID;
	this -> telefono = telefono;
}

string Chef::getPlatillo_Favorito(){
	return platillo_favorito;
}

void Chef::setPlatillo_Favorito(string tplatillo_favorito){
	platillo_favorito = tplatillo_favorito;
}

double Chef::getRating(){
	return rating;
}

void Chef::setRating(double trating){
	rating = trating
}