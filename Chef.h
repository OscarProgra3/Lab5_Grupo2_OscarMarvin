#include "Personal.h"
#include <string>
#ifndef CHEF_H
#define CHEF_H

using namespace std;

class Chef : public Personal{
	private:
		string platillo_favorito;
		double rating;
	public:
		Chef();
		Chef(string, double, int, double, string, string, string, int, int, int);
		//platillo_favorito, rating //año, sueldo //username, password, nombre, edad, ID, telefono
		string getPlatillo_Favorito();
		void setPlatillo_Favorito(string);
		double getRating();
		void setRating(double);
};
#endif