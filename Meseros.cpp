#include "Meseros.h"

using namespace std;

Meseros::Meseros(string pusername, string ppass, string pnombre, int pedad, int pid, int ptelefono, int panio, double psueldo, vector <string> lista_platillos) : Personal(pusername, ppass, pnombre, pedad, pid, ptelefono, panio, psueldo){
	this -> lista_platillos = lista_platillos;
}

string Meseros::getTipoPersonal()
{
	return "Meseros";
}