#include "Personal.h"

Personal::Personal(string pusername,string ppass,string pnombre,int pedad,int pid,int ptelefono,int panio, double psueldo) : Usuario (pusername, ppass, pnombre, pedad, pid, ptelefono)
{
	anio=panio;
	sueldo=psueldo;
}

int Personal::getAnio()
{
	return anio;
}
void Personal::setAnio(int tanio)
{
	anio=tanio;
}

double Personal::getSueldo()
{
	return sueldo;
}
void Personal::setSueldo(double tsueldo)
{
	sueldo=tsueldo;
}