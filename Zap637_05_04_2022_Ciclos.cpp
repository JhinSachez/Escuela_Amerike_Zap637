// Zap637_05_04_2022_Ciclos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
using namespace std;
#include <iostream>
#include <string>

int main()
{
	bool uno = true;
	string correo = "alex2@gm.com";
	string contra = "Hola123";
   //ciclo While
	/*while (uno == true) {

		cout << "Uno es verdadero \n";
		cout << "Quiere salir del ciclo? \n";
		cout << "ingrese 1 para quedarse \n";
		cout << "ingrese 0 para salir \n";
		cin >> uno;
	}*/

	//Ciclo do-While
	/*do {
		cout << "Ingrese tu correo: \n";
		cin >> correo;
		if (correo == "alex2@gm.com") {
			cout << "Ingrese la contraseña: \n";
			cin >> contra;
			if (contra == "Hola123") {
				cout << "Usted a iniciado sesion\n" << correo << endl;
			}else {
				cout << "Contraseña incorrecta...\n";
			}
		}else {
			cout << "Correo incorrecto...\n";
		}
		cout << "Continue???\n Ingrese 1 para no salir de la sesion\n";
		cout << "Ingrse 0 para salir\n";
		cin >> uno;
	} while (uno == true);*/

	//ciclo for
	for (int aux = 0; aux <= 10; aux++) {
		cout << "El valor es menor o igual a diez\n el valor ahora mismo es: " << aux << endl;
	}



}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
