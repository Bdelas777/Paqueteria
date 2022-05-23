#ifndef ENVIO_H
#define ENVIO_H
#include <stdio.h>
#include <string>
using namespace std;
class Envio
{
	public:
		// Metodo que calcula
		double calculaCosto();
		//constructores
		Envio();
		Envio(string _nombre,string _direccion,string _ciudad,string _estado,
		string _codigo_postal_remitente,string _codigo_postal_destinatario,int _costo);
		//setters
		void setNombre(string _nombre);
		void setDireccion(string _direccion);
		void setCiudad(string _ciudad);
		void setEstado(string _estado);
		void setCodigo_Postal_destinatario(string _codigo_postal_destinatario );
		void setCodigo_Postal_remitente(string _codigo_postal_remitente);
		void setCosto(int _costo);
		//getters
		string getNombre();
		string getDireccion();
		string getCiudad();
		string getEstado();
		string getCodigo_Postal_destinatario();
		string getCodigo_Postal_remitente();
		int getCosto();

	protected:
		string nombre;
		string direccion;
		string ciudad;
		string estado;
		string codigo_postal_remitente;
		string codigo_postal_destinatario;
		int costo;

};

#endif // ENVIO_H
