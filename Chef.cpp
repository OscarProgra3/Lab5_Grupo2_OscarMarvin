#include "Chef.h"

using namespace std;

Chef::Chef(string pusername,string ppass,string pnombre,int pedad,int pid,int ptelefono,int panio, double psueldo, string platillo_favorito, int rating) : Personal( pusername, ppass, pnombre,pedad, pid, ptelefono,panio, psueldo){
	this -> platillo_favorito = platillo_favorito;
	this -> rating = rating;
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
	rating = trating;
}