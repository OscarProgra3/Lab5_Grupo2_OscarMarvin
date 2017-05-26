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
		vector<Usuario*> listaUsuarios;

		int resp=9;
		while(resp!=3)
		{
			cout<<endl<<endl<<"Bienvenido\n1.-Agregar\n2.-Login\n3.-Salir\ningrese su opcion: ";
			cin>>resp;
			cout<<endl;
			if (resp==1)//opcionagregar
			{
				
			}//fin agregar
			if (resp==2)//opcion 2
			{
				/* code */
			}//fin login
		}
	

		
	return 0;
	
}