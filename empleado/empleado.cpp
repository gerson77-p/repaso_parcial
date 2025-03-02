// empleado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;
class Empleado
{

private:
	string nombre, departamento;
	float salario;

public:
	Empleado(string nombre, string depto, float salario) {
		this->nombre = nombre;
		this->departamento = depto;
		this->salario = salario;
	}
	void setNombre(string nombre) {
		this->nombre = nombre;
	}
	string getNombre() {
		return this->nombre;
	}
	void setDepartamento(string depto) {
		this->departamento = depto;
	}
	string getDepartamento() {
		return this->departamento;
	}
	void setSalario(float salario) {
		this->salario = salario;
	}
	int getSalario() {
		return this->salario;
	}
	void mostrarDatosEmpleado() {
		cout << "Nombre: " << nombre << endl;
		cout << "Departamento: " << departamento << endl;
		cout << "Salario: " << salario << endl;
	}
	void trabajar() {
		cout << "Trabajando" << endl;
	}
	void descanzar() {
		cout << "Descansando" << endl;
	}
};

class Gerente : public Empleado
{
private:
	string departamentoACargo;
public:
	Gerente(string nombre, string depto, float salario, string departamentoAcargo)
		:Empleado(nombre, depto, salario) {
		this->departamentoACargo = departamentoAcargo;
	}
	void setDepartamentoAcargo(string depto) {
		this->departamentoACargo = depto;
	}
	string getDepartamentoAcargo() {
		return this->departamentoACargo;
	}
	void mostrarDatosGerente() {
		mostrarDatosEmpleado();
		cout << "departamento a cargo: " << departamentoACargo << endl;

	}
};

int main()
{
	Gerente gerente1("Juan", "Sistemas", 10000, "Sistemas");
	gerente1.mostrarDatosGerente();

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
