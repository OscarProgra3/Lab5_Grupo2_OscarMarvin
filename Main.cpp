#include <vector>
#include <string>
#include <iostream>


#include "Usuario.h"
#include "Cliente.h"
#include "Personal.h"
#include "Administrador.h"
#include "Chef.h"
#include "Meseros.h"
#include "Lavaplatos.h"


using namespace std;


void listarLavaplatos(vector <Usuario*> listaousuariosT);


int main()
{
		vector<Usuario*> listaUsuarios;

		int resp=9;

			string nombre, direccion, username, password;
	int edad, ID, telefono, rating = 0, empleados_contratados, empleados_despedidos, anio;
	double sueldo;
		while(resp!=3)
		{
			cout<<endl<<endl<<"Bienvenido\n1.-Agregar\n2.-Login\n3.-Salir\ningrese su opcion: ";
			cin>>resp;
			cout<<endl;
			if (resp==1)//opcionagregar
			{

			int option;
			cout << "1.- CLiente" << endl;
			cout << "2.- Admistrador" << endl;
			cout << "Ingrese una opción: " << endl;
			cin >> option;
			cout << endl;
			if (option == 1){
				cout << "Ingrese un username: " << endl;
				cin >> username;
				cout << "Ingrese la password: " << endl;
				cin >> password;
				cout << "Ingrese el nombre: " << endl;
				cin >> nombre;
				do {
					cout << "Ingrese la edad: " << endl;
					cin >> edad;
				} while (edad >= 18);
				cout << "Ingrese la ID: " << endl;
				cin >> ID;
				cout << "Ingrese el telefono: " << endl;
				cin >> telefono;
				cout << "Ingrese la dirección: " << endl;
				cin >> direccion;
				listaUsuarios.push_back(new Cliente(username, password, nombre, edad, ID, telefono, direccion, rating));
				cout << "Cliente agregado exitosamente" << endl;
			}
			if (option == 2){
				cout << "Ingrese un username: " << endl;
				cin >> username;
				cout << "Ingrese la password: " << endl;
				cin >> password;
				cout << "Ingrese el nombre: " << endl;
				cin >> nombre;
				do {
					cout << "Ingrese la edad: " << endl;
					cin >> edad;
				} while (edad >= 18);
				cout << "Ingrese la ID: " << endl;
				cin >> ID;
				cout << "Ingrese el telefono: " << endl;
				cin >> telefono;
				cout << "Ingrese el año en el que empezó a trabajar: " << endl;
				cin >> anio;
				cout << "Ingrese el sueldo: " << endl;
				cin >> sueldo;
				listaUsuarios.push_back(new Administrador(username, password, nombre, edad, ID, telefono, anio, sueldo, empleados_contratados, empleados_despedidos));
				cout << "El Administrador ha sido agregado exitosamente";
			}
				
			}//fin agregar
			if (resp==2)//opcion 2
			{
				
				string temppass,tempusu;

				for (int i = 0; i < listaUsuarios.size(); ++i)
				{
					if (listaUsuarios.at(i)->getUsername()==tempusu && listaUsuarios.at(i)->getPass()==temppass)
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

							Cliente* tempchef=dynamic_cast<Cliente*>(listaUsuarios.at(i));

							tempchef->setRating(ratingt);

							listaUsuarios.at(i)=tempchef;

							cout<<endl<< "Muchas gracias por su opinion :3"<<endl;

							//fin cliente

						}else if(listaUsuarios.at(i)->getTipoUsuario()=="Personal")
						{

							if (listaUsuarios.at(i)->getTipoUsuario()=="Chef")
							{
								cout<<endl<<"Bienvenido Chef "<<listaUsuarios.at(i)->getNombre()<<endl;

								listarLavaplatos(listaUsuarios);

								cout<<"Que es lo que desea hacer";
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
		if (listaousuariosT.at(i)->getTipoUsuario()=="Lavaplatos")
		{
			cout << endl<<"        Numero del lavaplatos: " << (i) << endl;
			cout << endl<<"Nombre: "<< listaousuariosT.at(i)->getNombre()<<endl;


			Lavaplatos* templavaplatos=dynamic_cast<Lavaplatos*>(listaousuariosT.at(i));

			
			cout << endl<<"Nivel de motivacion "<< templavaplatos->getNivel_Motivacion();
		
			cout <<endl<< "----------------------------------------------" << endl;
		}
	}
}
