#include "Envio.h"
#include <string>
using namespace std;
//Constructores
Envio::Envio()
{
	nombre="Pepe";
	direccion="Azul 404";
	ciudad="Monterrey";
	estado="Nuevo Leon";
	codigo_postal_remitente="64700";
	codigo_postal_destinatario="54667";
	costo=100;
}

Envio::Envio(string _nombre,string _direccion,string _ciudad,string _estado,
		string _codigo_postal_remitente,string _codigo_postal_destinatario,int _costo)
{
  nombre=_nombre;
  direccion=_direccion;
  ciudad=_ciudad;
  estado=_estado;
  codigo_postal_remitente=_codigo_postal_remitente;
  codigo_postal_destinatario=_codigo_postal_destinatario;
  costo=_costo;
}
//setters
void Envio::setNombre(string _nombre){
	nombre=_nombre;
}

void Envio::setDireccion(string _direccion){
	direccion=_direccion;
}
void Envio::setCiudad(string _ciudad){
	ciudad=_ciudad;
}

void Envio::setEstado(string _estado){
	estado=_estado;
}

void Envio::setCodigo_Postal_destinatario(string _codigo_postal_destinatario ){
	codigo_postal_destinatario=_codigo_postal_destinatario;
}

void Envio::setCodigo_Postal_remitente(string _codigo_postal_remitente){
	codigo_postal_remitente=codigo_postal_remitente;
}

void Envio::setCosto(int _costo){
	costo=_costo;
}
//getters
string Envio::getNombre(){
	return nombre;
}

string Envio::getDireccion(){
	return direccion;
}

string Envio::getCiudad(){
	return ciudad;
}

string Envio::getEstado(){
	return estado;
}

string Envio::getCodigo_Postal_destinatario(){
	return codigo_postal_destinatario;
}

string Envio::getCodigo_Postal_remitente(){
	return codigo_postal_remitente;
}

int Envio::getCosto(){
	return costo;
}
// Metodo calculaCosto
double Envio::calculaCosto(){
	return costo;
}
