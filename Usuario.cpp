#include "Usuario.h"

Usuario::Usuario(string pusername,string ppass,string pnombre,int pedad,int pid,int ptelefono)
{
	username=pusername;
	pass=ppass;
	nombre=pnombre;
	edad=pedad;
	id=pid;
	telefono=ptelefono;


}
		
string Usuario::getUsername()
{
	return username;
}
void Usuario::setUsername(string tusername)
{
	username=tusername;
}

string Usuario::getPass()
{
	return pass;
}
void Usuario::setPass(string tpass)
{
	pass=tpass;
}

string Usuario::getNombre()
{
	return nombre;
}
void Usuario::setNombre(string tnombre)
{
	nombre=tnombre;
}

int Usuario::getEdad()
{
	return edad;
}
void Usuario::setEdad(int tedad)
{
	edad=tedad;
}

int Usuario::getTelefono()
{
	return telefono;
}
void Usuario::setTelefono(int ttelefono)
{
	telefono=ttelefono;
}


string Usuario::getTipoUsuario()
{
	return "";
}