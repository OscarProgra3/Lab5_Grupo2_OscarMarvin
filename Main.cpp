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

int main(){
	int resp=9;

	string nombre, direccion, username, password;
	int edad, ID, telefono, rating = 0, empleados_contratados, empleados_despedidos, anio;
	double sueldo;
	
	vector<Usuario*> listaUsuarios;
	while(resp!=3){
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
		/*if (resp==2)//opcion 2
		{
				/* code 
		}//fin login*/
	}
	return 0;
}