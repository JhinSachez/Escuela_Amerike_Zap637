// zap637_31_03_2022_CondicionMultiple.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Se hara una calculadora sencilla + - * /

#include <iostream>
using namespace std;

int main()
{

    std::cout << "Hello Stranger!\n";
    int Opcion;
    int Num1 = 0;
    int Num2 = 0,x;
    std::cout << "Que opcion quieres realizar: \n0(Suma). \n1(Resta), \n2(Multiplicacion) \n3(Division \nPara escoger teclee el numero y presione Enter \n";
    std::cin >> Opcion;
    switch (Opcion) {
    case 0:
        cout << "Ingrese 2 numeros para sumarlos" << endl;
        cin >> Num1;
        cin >> Num2;
        x = Num1 + Num2;
        cout << "El resultado es :" << x << endl;
        break;
    case 1:
        cout << "Ingrese 2 numeros para restarlos" << endl;
        cin >> Num1;
        cin >> Num2;
        x = Num1 - Num2;
        cout << "El resultado es :" << x << endl;
        break;
    case 2:
        cout << "Ingrese 2 numeros para multiplicarlos" << endl;
        cin >> Num1;
        cin >> Num2;
        x = Num1 * Num2;
        cout << "El resultado es :" << x << endl;
        break;
    case 3:
        cout << "Ingrese 2 numeros para dividirlos" << endl;
        cin >> Num1;
        cin >> Num2;
       x = Num1 / Num2;
        cout << "El resultado es :" << x << endl;
        break;
    default:
        std::cout << "Ingresaste algo que no entiendo... \n";
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
