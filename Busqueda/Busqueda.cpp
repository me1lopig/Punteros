// Busqueda.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<stdlib.h>



using namespace std;

// declaracion de variables globales
int long_datos; // numero de elementos del vector
int* datos; // arreglo en que vamos a ordenar
int elemento; // elemento a buscar


void introducir_datos(); // introduce los datos 
void buscar(int*, int,int); // da la primera  posición donde se encuentra el  valor buscado



int main()
{
    // llamada a las funciones
    introducir_datos();
    cout << "Elemento a buscar "; cin >> elemento;
    buscar(datos,long_datos,elemento);

    // parada
    cout << "Pulsa una tecla" << endl;
    cin.get();

    return 0;
}




void introducir_datos()
{
    // introduce el numero de datos
    cout << "Numero de datos del vector ";
    cin >> long_datos;

    // declaracion del array dinamico
    datos = new int[long_datos];

    for (int i = 0; i < long_datos; i++)
    {
        cout << "[" << i  << "]= ";
        cin >> *(datos + i);
    }
}


void buscar(int* array, int dimension, int elem)
{
    int indice;

    for (int i = 0; i < dimension; i++)
    {
        if (*(array + i) == elem)
        {
            indice = i;
            cout << "El elemento " << elem << " se encuentra en la posicion " << i << " del vector" << endl;
            return;
          
        }
       
    }
    cout << "No se localiza el elemento " << elem << " en el vector" << endl;
}
