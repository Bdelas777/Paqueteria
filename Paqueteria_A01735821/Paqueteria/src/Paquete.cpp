#include "Paquete.h"
#include "Envio.h"
//Constructores
Paquete::Paquete(){
	largo=100;
	ancho=250;
	profundidad=200;
	peso=200;
	costo_por_kilogramo=10;
}

Paquete::Paquete(string _nombre,string _direccion,string _ciudad,string _estado,string _codigo_postal_remitente,
		string _codigo_postal_destinatario,int _costo,int _largo, int _ancho,int _profundidad, float _peso,
		int _costo_por_kilogramo): Envio(  _nombre, _direccion, _ciudad, _estado,_codigo_postal_remitente,
		_codigo_postal_destinatario, _costo){
		largo= _largo;
		ancho=_ancho;
		profundidad=_profundidad;
		peso= _peso;
		costo_por_kilogramo= _costo_por_kilogramo;
}
//Setters
void Paquete::setLargo(int _largo){
	largo=_largo;
}

void Paquete::setAncho(int _ancho){
	ancho=_ancho;
}

void Paquete::setProfunidad(int _profundidad){
	profundidad=_profundidad;
}

void Paquete::setPeso(float _peso){
	peso=_peso;
}

void Paquete::setCosto_por_kilogramo(int _costo_por_kilogramo){
	costo_por_kilogramo=_costo_por_kilogramo;
}
//Getters
int Paquete::getLargo(){
	return largo;
}

int Paquete::getAncho(){
	return ancho;
}
int Paquete::getProfundidad(){
	return profundidad;
}
int Paquete::getPeso(){
	return peso;
}

int Paquete::getCosto_por_kilogramo(){
	return costo_por_kilogramo;
}
//Metodo calculaCosto
double Paquete::calculaCosto(){
	if(peso<0)
		peso*=-1;
	else if(costo_por_kilogramo<0)
		costo_por_kilogramo*=-1;
	else if(peso<0 && costo_por_kilogramo<0 ){
		costo_por_kilogramo*=-1;
		peso*=-1;
	}
	return costo_por_kilogramo*peso;
}
