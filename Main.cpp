#include <vector>
#include <string>
#include <iostream>


#include "Usuario.h"
#include "Cliente.h"
#include "Personal.h"
#include "Administrador.h"
#include "Chef.h"
#include "Mesero.h"
#include "Lavaplatos.h"


using namespace std;


void listarLavaplatos(vector <Usuario*> listaousuariosT);


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
				
				string temppass,tempusu;

				for (int i = 0; i < listaUsuarios.size(); ++i)
				{
					if (listaUsuarios.at(i)->getUsername()==tempusu && listaUsuarios.at(i)==temppass)
					{
						if (listaUsuarios.at(i)->getTipoUsuario()=="Cliente")
						{
							int ratingt;
							cout<<endl<<"Bienvenido "<<listaUsuarios.at(i)->getNombre()<<" del 1 al 5 cual es el rating que le da a el restaurante: ";
							cin>>ratingt;
							while(ratingt<=0 || ratingt>5)
							{
								cout<<endl<< "del 1 al 5 porfavor. vuelva a ingresar: ";
								cin>>ratingt;
							}

							listaUsuarios.at(i)->setRating(ratingt);

							cout<<endl<< "Muchas gracias por su opinion :3"<<endl;

							//fin cliente

						}else if(listaUsuarios.at(i)->getTipoUsuario()=="Personal")
						{

							if (listaUsuarios.at(i)->getTipoPersonal()=="Chef")
							{
								cout<<endl<<"Bienvenido Chef "<<listaUsuarios.at(i)->getNombre()<<endl;

								listarLavaplatos(listaUsuarios);

								cout<<"Que es lo que desea hacer"
							}
						
						}else if(listaUsuarios.at(i)->getTipoUsuario()=="Lavaplatos")
						{

						}else if(listaUsuarios.at(i)->getTipoUsuario()=="Meseros")
						{

						}else if(listaUsuarios.at(i)->getTipoUsuario()=="Administrador")
						{

						}

						
					}else
					{
						cout<<endl<<"¡¡¡El usuario no existe o la contraseña es incorrecta!!!"<<endl;
					}
				}

			}//fin login
		}
	
	return 0;
	
}



void listarLavaplatos(vector <Usuario*> listaousuariosT)
{
	cout<<endl<<"----------LISTA DE LOS LAVAPLATOS---------------------";
	for (int i = 0; i < listaousuariosT.size(); ++i)
	{
		if ( listaousuariosT.at(i)->getTipoPersonal()=="Lavaplatos")
		{
			cout << endl<<"        Numero del lavaplatos: " << (i) << endl;
			cout << endl<<"Nombre: "<< listaousuariosT.at(i)->getNombre()<<endl;
			cout << endl<<"Nivel de motivacion "<< listaousuariosT.at(i)->getNivel_Motivacion();
		
			cout <<endl<< "----------------------------------------------" << endl;
		}
	}
}

