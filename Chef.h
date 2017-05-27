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
		Chef(string, string, string, int, int, int, int, double, string, int);
		string getPlatillo_Favorito();
		void setPlatillo_Favorito(string);
		double getRating();
		void setRating(double);


		string getTipoUsuario();

		string getTipoPersonal();
};
#endif