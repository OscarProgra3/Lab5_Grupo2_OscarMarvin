#include "Lavaplatos.h"

using namespace std;

Lavaplatos::Lavaplatos(string pusername, string ppass, string pnombre, int pedad, int pid, int ptelefono, int panio, double psueldo, int pnivel_motivacion) : Personal(username, ppass, pnombre, pedad, pid, ptelefono, panio, psueldo){
	nivel_motivacion = pnivel_motivacion;
}

int Lavaplatos::getNivel_Motivacion(){
	return nivel_motivacion;
}

void Lavaplatos::setNivel_Motivacion(int tnivel_motivacion){
	nivel_motivacion = tnivel_motivacion;
}


string Lavaplatos::getTipoPersonal()
{
	return "Lavaplatos";
}