// ConsoleApplication3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;
class Banco {
private:
	string nombre, direccion, ciudad;
	int telefono;
public:
	Banco(string nombre, string direccion, string ciudad, int telefono) {
		this->nombre = nombre;
		this->direccion = direccion;
		this->ciudad = ciudad;
		this->telefono = telefono;
	}
	void setNombre(string nombre) {
		this->nombre = nombre;
	}
	string getNombre() {
		return nombre;
	}
	void setDireccion(string direccion) {
		this->direccion = direccion;
	}
	string getDireccion() {
		return direccion;
	}
	void setCiudad(string ciudad) {
		this->ciudad = ciudad;
	}
	string getCiudad() {
		return ciudad;
	}
	void setTelefono(int telefono) {
		this->telefono = telefono;
	}
	int getTelefono() {
		return telefono;
	}
	void mostrarDatos() {
		cout << "Nombre del banco: " << nombre << endl;
		cout << "Direccion: " << direccion << endl;
		cout << "Ciudad: " << ciudad << endl;
		cout << "Telefono: " << telefono << endl;
	}
	void prestamo() {
		cout << "el Banco " << nombre << " autoriza el prestamo" << endl;
	}
	void cobrar() {
		cout << "el Banco " << nombre << " cobra el prestamo" << endl;
	}
};

class Cliente : public Banco {
private:
	string nombreCliente, direccionCliente, ciudadCliente;
	int telefonoCliente;
public:
	Cliente(string nombre, string direccion, string ciudad, int telefono, string nombreCliente, string direccionCliente, string ciudadCliente, int telefonoCliente)
		:Banco(nombre, direccion, ciudad, telefono) {
		this->nombreCliente = nombreCliente;
		this->direccionCliente = direccionCliente;
		this->ciudadCliente = ciudadCliente;
		this->telefonoCliente = telefonoCliente;
	}
};

int main()
{
	cout << "Datos del Banco y el cliente" << endl;
	Cliente cliente1("Banco GYT", "Zona 10", "Guatemala", 12345678, "Juan Perez", "Zona 1", "Guatemala", 98765432);
	cliente1.mostrarDatos();
	cliente1.prestamo();
	cliente1.cobrar();
	cout << endl;
	cout << "Datos del Banco" << endl;
	Banco banco1("Banco Industrial", "Zona 4", "Guatemala", 12345678);
	banco1.mostrarDatos();
	cout << endl;	

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
