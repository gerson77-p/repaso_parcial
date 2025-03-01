// repClubFutbol.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<string>
using namespace std;
class EquipoFutbol
{
private:
	string nombre, ciudad, estadio, apodoAficion;
	int anioFundacion, capacidadEstadio;

	


public:
	EquipoFutbol(string nom, string ciu, string est, string apod, int anio, int cap)
	{
		nombre = nom;
		ciudad = ciu;
		estadio = est;
		apodoAficion = apod;
		anioFundacion = anio;
		capacidadEstadio = cap;
	}
	void setNombre(string nom)
	{
		nombre = nom;
	}
	string getNombre()
	{
		return nombre;
	}
	void setCiudad(string ciu)
	{
		ciudad = ciu;
	}
	string getCiudad()
	{
		return ciudad;
	}
	void setEstadio(string est)
	{
		estadio = est;
	}
	string getEstadio()
	{
		return estadio;
	}
	void setApodoAficion(string apod)
	{
		apodoAficion = apod;
	}
	string getApodoAficion()
	{
		return apodoAficion;
	}
	void setAnioFundacion(int anio)
	{
		anioFundacion = anio;
	}
	int getAnioFundacion()
	{
		return anioFundacion;
	}	
	void setCapacidadEstadio(int cap)
	{
		capacidadEstadio = cap;
	}
	int getCapacidadEstadio()
	{
		return capacidadEstadio;
	}
	void mostrarDatos()
	{
		cout << "Nombre: " << nombre << endl;
		cout << "Ciudad: " << ciudad << endl;
		cout << "Estadio: " << estadio << endl;
		cout << "Apodo de la aficion: " << apodoAficion << endl;
		cout << "Anio de fundacion: " << anioFundacion << endl;
		cout << "Capacidad del estadio: " << capacidadEstadio << endl;
	}
	



};



int main()
{
	EquipoFutbol equipo1("Barcelona", "Barcelona", "Camp Nou", "Cules", 1899, 99354);
	equipo1.mostrarDatos();
	cout << "----------------------" << endl;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
