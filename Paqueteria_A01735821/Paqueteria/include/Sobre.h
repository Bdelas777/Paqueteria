#ifndef SOBRE_H
#define SOBRE_H
#include"Envio.h"
#include <stdio.h>
#include <string>
class Sobre: public Envio
{
	public:
    //constructores
      Sobre(string ,string ,string ,string ,string ,string ,int,int _largo,int _ancho,int _cargo_adicional);
      Sobre();
		//setters
      void setLargo(int);
      void setAncho(int);
      void setCargo_adicional(int);
    //getters
      int getLargo();
      int getAncho();
      int getCargo_adicional();
		// Metodo calcula costo
		double calculaCosto();

private:
    int largo;
    int ancho;
    int cargo_adicional;
};

#endif // SOBRE_H
