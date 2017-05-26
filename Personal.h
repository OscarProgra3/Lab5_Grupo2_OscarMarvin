#include "Usuario.h"
#include <string>


#ifndef PERSONAL_H
#define PERSONAL_H

using namespace std;

class Personal : public Usuario
{
	protected:
		int anio;
		double sueldo;

	public:
		Personal(string,string,string,int,int,int,int,double);

		int getAnio();
		void setAnio(int);

		double getSueldo();
		void setSueldo(double);
};
#endif