#include "Sobre.h"
#include "Envio.h"

//constructores

Sobre::Sobre()
{
  largo=0;
  ancho=0;
  cargo_adicional=0;
}
Sobre::Sobre(string _nombre,string _direccion,string _ciudad,string _estado,string _codigo_postal_remitente,
		string _codigo_postal_destinatario,int _costo,int _largo,int _ancho,int _cargo_adicional) : Envio(  _nombre,
		_direccion, _ciudad, _estado,_codigo_postal_remitente,_codigo_postal_destinatario, _costo)
{
    largo=_largo;
    ancho=_ancho;
    cargo_adicional=_cargo_adicional;
}

//setters
void Sobre::setLargo(int _largo)
{
    largo=_largo;
}
void Sobre::setAncho(int _ancho)
{
    ancho=_ancho;
}
void Sobre::setCargo_adicional(int _cargo_adicional)
{
    cargo_adicional=_cargo_adicional;
}
//getters
int Sobre::getLargo()
{
    return largo;
}
int Sobre::getAncho()
{
  return ancho;
}
int Sobre::getCargo_adicional()
{
    return cargo_adicional;
}
//Metodo calculaCosto
double Sobre::calculaCosto()
{
    int cost=costo;
    if(ancho>30 || largo>25)
    {
       cost= cargo_adicional+costo;
    }
    else if(largo>30 || ancho>25)
    {
       cost= cargo_adicional+costo;
    }
  return cost;
}
