#include "Cliente.h"

Cliente::Cliente(string pusername,string ppass,string pnombre,int pedad,int pid,int ptelefono, string pdireccion, int prating) : Usuario( pusername, ppass, pnombre, pedad, pid, ptelefono)
{
	direccion=pdireccion;
	rating=prating;
}
	
string Cliente::getDireccion()
{
	return direccion;
}
void Cliente::setDireccion(string tdireccion)
{
	direccion=tdireccion;
}

int Cliente::getRating()
{
	return rating;
}
void Cliente::setRating(int trating)
{
	rating=trating;
}

string Cliente::getTipoUsuario()
{
	return "Cliente";
}
