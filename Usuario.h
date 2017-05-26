#include <string>

#ifndef USUARIO_H
#define USUARIO_H

using namespace std;

class Usuario
{
	protected:
		string username;
		string pass;
		string nombre;
		int edad;
		int id;
		int telefono;


	public:
		
		Usuario(string,string,string,int,int,int );
		//~Usuario();

		string getUsername();
		void setUsername(string);

		string getPass();
		void setPass(string);

		string getNombre();
		void setNombre(string);

		int getEdad();
		void setEdad(int);

		int getTelefono();
		void setTelefono(int);



};
#endif