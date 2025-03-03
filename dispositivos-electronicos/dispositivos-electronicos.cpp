// dispositivos-electronicos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;
class DispositivoElectronico {
private:
	string nombre, marca, tipo, color;
	int precio;
public:
	DispositivoElectronico(string nombre, string marca, string tipo, string color, int precio) {
		this->nombre = nombre;
		this->marca = marca;
		this->tipo = tipo;
		this->color = color;
		this->precio = precio;
	}
	void setNombre(string nombre) {
		this->nombre = nombre;
	}
	string getNombre() {
		return nombre;
	}
	void setMarca(string marca) {
		this->marca = marca;
	}
	string getMarca() {
		return marca;
	}
	void setTipo(string tipo) {
		this->tipo = tipo;
	}
	string getTipo() {
		return tipo;
	}
	void setColor(string color) {
		this->color = color;
	}
	string getColor() {
		return color;
	}
	void setPrecio(int precio) {
		this->precio = precio;
	}
	int getPrecio() {
		return precio;
	}
	void mostraDatos() {
		cout << "nombre del dispositivo: " << nombre << endl;
		cout << "marca del dispositivo: " << marca << endl;
		cout << "tipo del dispositivo: " << tipo << endl;
		cout << "color del dispositivo: " << color << endl;
		cout << "precio del dispositivo: " << precio << endl;
	}

	void encender() {
		cout << "Encendiendo dispositivo" << endl;
	}
	void apagar() {
		cout << "Apagando dispositivo" << endl;
	}
};

	class Computadora : public DispositivoElectronico {
	private:
		string sistemaOperativo;
		int ram;
	public:
		Computadora(string nombre, string marca, string tipo, string color, int precio, string sistemaOperativo,int ram)
			: DispositivoElectronico(nombre, marca, tipo, color, precio) {
			this->sistemaOperativo = sistemaOperativo;
			this->ram = ram;
		}
		void setSistemaOperativo(string sistemaOperativo) {
			this->sistemaOperativo = sistemaOperativo;
		}
		string getSistemaOperativo() {
			return sistemaOperativo;
		}
		void setRam(int ram) {
			this->ram = ram;
		}
		int getRam() {
			return ram;
		}
		void MostrarDatosComputadora() {
			mostraDatos();
			cout << "sistema operativo: " << sistemaOperativo << endl;
			cout << "ram: " << ram << endl;
		}
	};

	class Television : public DispositivoElectronico {
	private:
		int pulgadas;
		string resolucion;
	public: 
		Television(string nombre, string marca, string tipo, string color, int precio,int pulgadas,string resolucion)
			: DispositivoElectronico(nombre, marca, tipo, color, precio) {
			this->pulgadas = pulgadas;
			this->resolucion = resolucion;
		}
		void setPulgadas(int pulgadas) {
			this->pulgadas = pulgadas;
		}
		int getPulgadas() {
			return pulgadas;
		}
		void setResolucion(string resolucion) {
			this->resolucion = resolucion;
		}
		string getResolucion() {
			return resolucion;
		}
		void MostrarDatosTelevision() {
			mostraDatos();
			cout << "pulgadas: " << pulgadas << endl;
			cout << "resolucion: " << resolucion << endl;
		}

	};

	

int main()
{
	cout << "Dispositivo electronico" << endl;
	Computadora computadora1("hp", "hp", "computadora", "gris", 1500, "Windows", 8);
	computadora1.MostrarDatosComputadora();
	computadora1.encender();
	cout << endl;	
	Television television1("Samsung", "Samsung", "television", "gris", 2000, 15, "Hd");
	television1.MostrarDatosTelevision();
	television1.encender();


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
