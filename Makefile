Main:	Main.o Usuario.o Cliente.o Personal.o  Administrador.o Chef.o Lavaplatos.o Meseros.o 
	g++ Main.o Usuario.o Cliente.o Personal.o  Administrador.o Chef.o Lavaplatos.o Meseros.o -o Main

Main.o:	Main.cpp Usuario.h Cliente.h Personal.h  Administrador.h Chef.h Lavaplatos.h Meseros.h 
	g++ -c Main.cpp

Usuario.o:	Usuario.cpp Usuario.h
	g++ -c Usuario.cpp

Cliente.o:	Cliente.cpp Cliente.h Usuario.h
	g++ -c Cliente.cpp

Personal.o:	Personal.cpp Personal.h Usuario.h
	g++ -c Personal.cpp

Administrador.o:	Administrador.cpp Administrador.h Personal.h
	g++ -c Administrador.cpp

Chef.o:	Chef.cpp Chef.h Personal.h
	g++ -c Chef.cpp

Lavaplatos.o:	Lavaplatos.cpp Lavaplatos.h Personal.h
	g++ -c Lavaplatos.cpp

Meseros.o:	Meseros.cpp Meseros.h Personal.h
	g++ -c Meseros.cpp


clean:	
	rm -f *.o Main
