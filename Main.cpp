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
			cout << "1.- Cliente" << endl;
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
				if (edad < 18){
					cout << "La edad no puede ser menor a 18" << endl;
					cout << "Ingrese la edad: " << endl;
					cin >> edad;
				}
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
							int oprealizar;
							cout << "BIENVENIDO ADMINISTRADOR" << endl
							<< "1.- Contratar Empleado" << endl
							<< "2.- Despedir Empleado" << endl
							<< "3.- Aumentar/Decrementar Sueldo" << endl
							<< "4.- Conseguir Empleado con menor sueldo" << endl
							<< "5.- Conseguir Empleado con mayor sueldo" << endl
							<< "6.- Promedio de sueldo de todos los empleados" << endl
							<< "7.- Salir" << endl;
							cout << "Ingrese la opción que desea realizar: ";
							cin >> oprealizar;
							cout << endl;
							if (oprealizar == 1){
								string ausername, apassword, anombre, platillo_favorito;
								int aedad, aID, atelefono, aanio, tipopersonal, arating, nivel_motivacion = 50;
								double asueldo;
								vector <string> lista_platillos/* = {"Pollo", "Carne", "Hellbert"}*/;
								cout << "1.- Chef" << endl
								<< "2.- Lavaplatos" << endl
								<< "3.- Mesero" << endl;
								cout << "Ingrese que tipo de personal desea agregar: ";
								cin >> tipopersonal;
								cout << endl;
								if (tipopersonal == 1){
									cout << "Ingrese username: ";
									cin >> ausername;
									cout << endl;
									cout << "Ingrese contraseña: ";
									cin >> apassword;
									cout << endl;
									cout << "Ingrese nombre: ";
									cin >> anombre;
									cout << endl;
									cout << "Ingrese edad: ";
									cin >> aedad;
									cout << "Ingrese ID: ";
									cin >> aID;
									cout << endl;
									cout << "Ingrese telefono: ";
									cin >> atelefono;
									cout << endl;
									cout << "Ingrese el año en que empezó a trabajar: ";
									cin >> aanio;
									cout << endl;
									cout << "Ingrese el sueldo: ";
									cin >> asueldo;
									cout << endl;
									cout << "Ingrese el platillo favorito: ";
									cin >> platillo_favorito;
									cout << endl;
									cout << "Ingrese el rating: ";
									cin >> arating;
									cout << endl;
									listaUsuarios.push_back(new Chef(ausername, apassword, anombre, aedad, aID, atelefono, aanio, asueldo, platillo_favorito, arating));
									cout << "El chef ha sido contratado exitosamente" << endl;
								}
								if (tipopersonal == 2){
									cout << "Ingrese username: ";
									cin >> ausername;
									cout << endl;
									cout << "Ingrese contraseña: ";
									cin >> apassword;
									cout << endl;
									cout << "Ingrese nombre: ";
									cin >> anombre;
									cout << endl;
									cout << "Ingrese edad: ";
									cin >> aedad;
									cout << "Ingrese ID: ";
									cin >> aID;
									cout << endl;
									cout << "Ingrese telefono: ";
									cin >> atelefono;
									cout << endl;
									cout << "Ingrese el año en que empezó a trabajar: ";
									cin >> aanio;
									cout << endl;
									cout << "Ingrese el sueldo: ";
									cin >> asueldo;
									cout << endl;
									listaUsuarios.push_back(new Lavaplatos(ausername, apassword, anombre, aedad, aID, atelefono, aanio, asueldo, nivel_motivacion));
									cout << "El lavaplatos ha sido contratado exitosamente" << endl;
								}
								if (tipopersonal == 3){
									cout << "Ingrese username: ";
									cin >> ausername;
									cout << endl;
									cout << "Ingrese contraseña: ";
									cin >> apassword;
									cout << endl;
									cout << "Ingrese nombre: ";
									cin >> anombre;
									cout << endl;
									cout << "Ingrese edad: ";
									cin >> aedad;
									cout << "Ingrese ID: ";
									cin >> aID;
									cout << endl;
									cout << "Ingrese telefono: ";
									cin >> atelefono;
									cout << endl;
									cout << "Ingrese el año en que empezó a trabajar: ";
									cin >> aanio;
									cout << endl;
									cout << "Ingrese el sueldo: ";
									cin >> asueldo;
									cout << endl;
									listaUsuarios.push_back(new Meseros(ausername, apassword, anombre, aedad, aID, atelefono, aanio, asueldo, lista_platillos));
									cout << "El mesero ha sido contratado exitosamente" << endl;
								}
							}
							if (oprealizar == 2){
								int numero;
								cout << "Ingrese la posición que desea eliminar: " << endl;
								for (int j = 0; j < listaUsuarios.size(); j++){
									cout << j << " ---> " << listaUsuarios[j]->getNombre() << endl;
								}
								cin >> numero;
								listaUsuarios.erase(listaUsuarios.begin() + numero);
								cout << "Empleado despedido exitosamente" << endl;
							}
							if (oprealizar == 3){
								double porcentaje;
								int opt, sueldot;
								cout << "Ingrese el porcentaje (en decimales) que desea modificarle: ";
								cin >> porcentaje;
								cout << endl;
								cout << "Ingrese 1 si desea aumentar esa cantidad o 2 si desea decrementarla: ";
								cin >> opt;
								cout << endl;
								for (int j = 0; j < listaUsuarios.size(); ++i){
									Personal* temppersonal = dynamic_cast<Personal*>(listaUsuarios.at(j));
									if (opt == 1) {
										sueldot = temppersonal->getSueldo() + porcentaje;
									} else {
										sueldot = temppersonal->getSueldo() - porcentaje;
									}
									temppersonal->setSueldo(sueldot);
									listaUsuarios.at(j) = temppersonal;
								}

							}
							if (oprealizar == 4){
								double menor = 0;
								for (int j = 0; j < listaUsuarios.size() - 1; j++){
									Personal* tempsueldo = dynamic_cast<Personal*>(listaUsuarios.at(j));
									Personal* tempsueldo2 = dynamic_cast<Personal*>(listaUsuarios.at(j + 1));
									//double actuall = tempsueldo2->getSueldo();
									if (menor < tempsueldo2->getSueldo()){
										menor = tempsueldo2->getSueldo();
									}
								}
								cout << "El menor sueldo es: " << menor << endl;
							}
							if (oprealizar == 5){
								double mayor = 0;
								for (int j = 0; j <listaUsuarios.size() - 1; j++){
									Personal* tempsueldo = dynamic_cast<Personal*>(listaUsuarios.at(j));
									Personal* tempsueldo2 = dynamic_cast<Personal*>(listaUsuarios.at(j + 1));
									if (tempsueldo2->getSueldo() > mayor){
										mayor = tempsueldo2->getSueldo();
									}
								}
								cout << "El mayor sueldo es: " << mayor << endl;
							}
							if (oprealizar == 6){
								int promedio = 0;
								for (int j = 0; j < listaUsuarios.size() - 1; j++){
									Personal* tempsueldo = dynamic_cast<Personal*>(listaUsuarios.at(j));
									promedio += tempsueldo->getSueldo();
								}
								promedio = promedio / listaUsuarios.size();
								cout << "El promedio de sueldos es: " << promedio << endl;
							}
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
