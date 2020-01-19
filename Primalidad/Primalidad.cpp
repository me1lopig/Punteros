// Primalidad.cpp 
// comprobar si un número impar es primo o no usando punteros
// el algoritmo es de fuerza bruta y no es el más eficiente
//
//

#include <iostream>
#include<cmath>

using namespace std;


void primalidad(long*);

int main()
{
    long numero;
    long *puntero;


    puntero = &numero; // asignacion del puntero a la variable 

    // entrata de los datos
    cout << "Introduce el numero ";
    cin >> numero;

    // llamada a la funcion de test de primalidad
    primalidad(puntero);

    // parada antes de cerrar
    cout << "\n\nPulsa una tecla para terminar";
    cin.get();
    return 0;
}



void primalidad(long *puntero)
{
    // test de primalidad por fuerza bruta

    long limite;

    if (((*puntero % 2 == 0)&&(*puntero > 2)) || *puntero == 1)
    {
        cout << "El numero es compuesto " << endl;
    }

    else
    {

        limite = (long)sqrt(*puntero); // limite de busqueda de numeros primos por fuenza bruta solo con impares
        for (int i = limite; i > 1; i--)
        {

            if (*puntero % i == 0)
            {
                cout << "El numero " << *puntero << " es compuesto"<<endl;
                cout << "La posicion es " << puntero << endl;
                return;
            }
        }
        cout << "\nEl numero es primo " << endl;
        cout << "La posicion es " << puntero << endl;

    }

}
