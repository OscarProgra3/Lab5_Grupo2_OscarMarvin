#include <vector>
#include <string>
#include <iostream>


#include "Usuario.h"
#include "Cliente.h"
#include "Personal.h"
#include "Admistrador.h"
#include "Chef.h"
#include "Mesero.h"
#include "Lavaplatos.h"


using namespace std;

int main()
{
	int resp=9;
	while(resp!=3)
	{
		cout<<endl<<endl<<"Bienvenido\n1.-Agregar\n2.-Entrar como administrador\n3.-Salir\nIngrese su opcion: ";
		cin>>resp;
		if (resp==1)//agregar
		{
			/* code */
		}//finagregar
		if (resp==2)//entrar administrador
		{
			/* code */
		}//fin entrar administrador
	}

		
	return 0;
	
}