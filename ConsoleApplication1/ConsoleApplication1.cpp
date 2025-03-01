// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;
class CuentaBancaria {
private:
    string nombreTiutular;
	int numeroCuenta;
	float saldo;
public:
	CuentaBancaria(string nombre, int numero, float saldo) {
		this->nombreTiutular = nombre;
		this->numeroCuenta = numero;
		this->saldo = saldo;
	}
	void setNombreTitular(string nombre) {
		this->nombreTiutular = nombre;
	}
	string getNombreTitular() {
		return this->nombreTiutular;
	}
	void setNumeroCuenta(int numero) {
		this->numeroCuenta = numero;
	}
	int getNumeroCuenta() {
		return this->numeroCuenta;
	}
	void setSaldo(float saldo) {
		this->saldo = saldo;
	}
	float getSaldo() {
		return this->saldo;
	}
	void depositar(float cantidad) {
		this->saldo += cantidad;
	}
	void retirar(float cantidad) {
		if (this->saldo >= cantidad) {
			this->saldo -= cantidad;
		}
		else {
			cout << "Saldo insuficiente" << endl;
		}
	}

	void mostrarDATOS() {
		cout << "nombre del titular :" << nombreTiutular << endl;
		cout << "numero de cuenta :" << numeroCuenta << endl;
		cout << "saldo :" << saldo << endl;

	}
};
int main()
{
	CuentaBancaria cuenta1("Gerson", 123456, 5000);
	cuenta1.mostrarDATOS();
	cuenta1.depositar(100);
	cuenta1.retirar(1000);
	cuenta1.mostrarDATOS();
	cout << "Datos actualizados" << endl;
	cuenta1.depositar(100);
	cuenta1.mostrarDATOS();
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
