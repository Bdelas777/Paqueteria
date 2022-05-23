#ifndef PAQUETE_H
#define PAQUETE_H
#include "Envio.h"
#include <stdio.h>
#include <string>
class Paquete: public Envio
{
	public:
		Paquete();
		Paquete(string ,string ,string ,string ,string ,string ,int ,int _largo, int _ancho,
				 int _profundidad, float _peso, int _costo_por_kilogramo);
		//setters
		void setLargo(int _largo);
		void setAncho(int _ancho);
		void setProfunidad(int _profundidad);
		void setPeso(float _peso);
		void setCosto_por_kilogramo(int _costo_por_kilogramo);
		//getters
		int getLargo();
		int getAncho();
		int getProfundidad();
		int getPeso();
		int getCosto_por_kilogramo();
		// Metodo calcula costo
		double calculaCosto();

	private:
		int largo;
		int ancho;
		int profundidad;
		float peso;
		int costo_por_kilogramo;
};

#endif // PAQUETE_H
