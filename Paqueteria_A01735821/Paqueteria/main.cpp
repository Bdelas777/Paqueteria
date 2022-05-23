/*
Nombres:Bernardo de la Sierra
Matrícula:

Nombre: José Benvenuto
Matrícula:A00832948

Fecha:22/05/2022

Este codigo nos checa los precios de los paquetes en determinada clase
*/
#include <iostream>
#include "Envio.h"
#include "Paquete.h"
#include "Sobre.h"

using namespace std;

int main()
{
	Envio envio1("Pepe","Azul 404","Madrid","Madrid","44554","34454",100);
	cout<<"Ejemplo de costo con clase envio"<<endl;
	cout<<envio1.calculaCosto()<<endl;
	Paquete paquete1("Maria","Azucena 15","Seattle","Washington","47574","333454",100,20,5,3,20.88,5);
	cout<<"Ejemplo de costo con clase paquete"<<endl;
	cout<<paquete1.calculaCosto()<<endl;
	Sobre sobre1("Daniela","Nuevo Sur 424","Monterrey","Nuevo Leon","43454","35544",100,30,32,25);
	cout<<"Ejemplo de costo con clase sobre"<<endl;
	cout<<sobre1.calculaCosto()<<endl;
    return 0;
}
