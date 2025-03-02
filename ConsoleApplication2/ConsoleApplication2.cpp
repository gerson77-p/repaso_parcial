// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <string>
using namespace std;

class Empleado {
private:
    string nombre;
    string departamento;
    float salario;

public:

    Empleado(string nombre, string depto, float salario) {
        this->nombre = nombre;
        this->departamento = depto;
        this->salario = salario;
    }

    // Setters y Getters
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
    float getSalario() {
        return this->salario;
    }

    void mostrarDatosEmpleado() {
        cout << "Nombre: " << nombre << endl;
        cout << "Departamento: " << departamento << endl;
        cout << "Salario: " << salario << endl;
    }

    void trabajar() {
        cout <<nombre<< " Esta Trabajando" << endl;
    }

    void descansar() {
        cout <<nombre <<"Esta Descansando" << endl;
    }
};

class Gerente : public Empleado {
private:
    string departamentoAcargo;

public:

    Gerente(string nombre, string depto, float salario, string departamentoAcargo)
        : Empleado(nombre, depto, salario) {
        this->departamentoAcargo = departamentoAcargo;
    }

    void setDepartamentoAcargo(string depto) {
        this->departamentoAcargo = depto;
    }
    string getDepartamentoAcargo() {
        return this->departamentoAcargo;
    }


    void mostrarDatosGerente() {
        mostrarDatosEmpleado();
        cout << "Departamento a cargo: " << departamentoAcargo << endl;
    }
};

int main() {

    Gerente gerente1("Juan", "Sistemas", 10000, "Desarrollo");
    gerente1.mostrarDatosGerente();
    gerente1.trabajar();
    gerente1.descansar();
	cout << endl;

	Gerente gerente2("Pedro", "Ventas", 15000, "Ventas");
	gerente2.mostrarDatosGerente();
	gerente2.trabajar();
	gerente2.descansar();
    cout << endl;

    return 0;
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
