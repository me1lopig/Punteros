// Par_impar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
   // declaracion de variables 
    int numero;
    int* puntero;

    puntero = &numero; // asignamos la direccion de la variable al puntero

    cout << "Introduce el numero ";
    cin >> numero;

    if (*puntero % 2 == 0)
    {
        cout << "El numero " << *puntero <<" es par "<< endl;
        cout << "La direccion es la " << puntero << endl;
    }
 
    else
    {
        cout << "El numero es impar" << endl;
        cout << "La direccion es la " << puntero << endl;
    }

    // parada antes de cerrar
    cout << "\nPulsa una tecla para terminar";
    cin.get();
    return 0;
}


