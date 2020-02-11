// Matriz_dinamica.cpp 
// ejemplo de matriz dinamica con punteros
//
//

#include <iostream>
#include<stdlib.h>

using namespace std;


void pedir_datos();
void mostrar_matriz(int**,int,int);

int** puntero_matriz; // declaracion de la matriz dinamica

// dimensiones de la matriz dinamica
int n_filas;
int n_columnas;

int main()
{

    //  entrada de datos

    cout << "Numero de filas "; cin >> n_filas;
    cout << "Numero de columnas "; cin >> n_columnas;


    pedir_datos();
    mostrar_matriz(puntero_matriz, n_filas, n_columnas);

    // limpiar memoria
    for (int i = 0; i < n_filas; i++)
    {
        delete[] puntero_matriz[i]; 
    }

    delete[] puntero_matriz;



    // parada
    cout << "Pulsa una tecla" << endl;
    cin.get();

    return 0;
}

void pedir_datos()
{
 
    // creacion de la matriz

    puntero_matriz = new int*[n_filas]; // reserva de memoria para fils

    for (int i = 0; i < n_filas; i++)
    {
        puntero_matriz[i] = new int [n_columnas]; // reserva de memoria para columnas
    }



    // entrada de datos de la matriz
    cout << "Digitando los elementos de la matriz " << endl;

    for (int i = 0; i < n_filas;i++)
    {
        for (int j = 0; j < n_columnas; j++)
        {
            cout << "elemento [" << i << "," << j << "]= ";
            cin >> *(*(puntero_matriz + i)+j);
        }
    }
}



void mostrar_matriz(int** punteromatriz, int filas,int columnas)
{

    cout << "Imprimiendo matriz " << endl;

    for (int i = 0; i < filas;i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << *(*(punteromatriz + i) + j)<<"  ";
        }
        cout << endl;
    }

}

