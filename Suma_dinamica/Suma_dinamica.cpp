// Suma_dinamica.cpp
// suma de matrices dinamicas con punteros
// las matrices deben de ser de iguales dimensiones
//



#include <iostream>
#include<stdlib.h>

using namespace std;

// prototipado de funciones
void pedir_datos(); // pedir datos de las matrices
void suma_matrices(int**, int**, int,int); // sumar las matrices
void mostrar_matriz(int**, int, int); // mostrar datos de las matrices
void limpiar(); // limpieza de la memoria de las matrices dinamicas
void parada(); // parada al final del programa



// declaracion de las matrices
int** puntero_matriz_1;
int** puntero_matriz_2;


// dimensiones de la matriz variables globales
int n_columnas;
int n_filas;

int main()
{
    // entrada de los valores de filas y de columnas
    cout << "Numero de filas "; cin >> n_filas;
    cout << "Numero de columnas "; cin >> n_columnas;


    // ejecucion de las funciones
    pedir_datos();

    mostrar_matriz(puntero_matriz_1, n_filas, n_columnas);
    mostrar_matriz(puntero_matriz_2, n_filas, n_columnas);

    suma_matrices(puntero_matriz_1, puntero_matriz_2, n_filas, n_columnas);

    limpiar();
    parada();
    return 0;
}


  // creacion de matrices dimamicas




void pedir_datos()
{
    // reserva de memoria para la primera matriz
    puntero_matriz_1 = new int* [n_filas]; // reserva de memoria para las filas
    // reserva de memoria para las columnas
    for (int i = 0; i < n_filas; i++)
    {
        puntero_matriz_1[i] = new int[n_columnas];
    }

   
    // entrada de datos de la primera matriz
    cout << "Entrada de los datos de la primera matriz" << endl;
         
    for (int i = 0; i < n_filas; i++)
    {
        for (int j = 0; j < n_columnas; j++)
        {
            cout << "elemento [" << i << "," << j << "]= ";
            cin >> *(*(puntero_matriz_1 + i) + j);
        }
    }



    // reserva de memoria para la segunda matriz

    puntero_matriz_2 = new int* [n_filas]; // reserva de memoria para las filas
    // reserva de memoria para las columnas
    for (int i = 0; i < n_filas; i++)
    {
        puntero_matriz_2[i] = new int[n_columnas];
    }

    // entrada de datos de la segunda matriz
    cout << "Entrada de los datos de la  segunda matriz " << endl;
     
    for (int i = 0; i < n_filas; i++)
    {
        for (int j = 0; j < n_columnas; j++)
        {
            cout << "elemento [" << i << "," << j << "]= ";
            cin >> *(*(puntero_matriz_2 + i) + j);
        }
    }
}




void suma_matrices( int ** puntero_matriz_1, int** puntero_matriz_2, int n_filas,int n_columnas)
{
    cout << "La suma de las matrices es " << endl;

    for (int i = 0; i < n_filas; i++)
    {
        for (int j = 0; j < n_columnas; j++)
        {
            cout << *(*(puntero_matriz_1 + i) + j)+ *(*(puntero_matriz_2 + i) + j) << "  ";
        }
        cout << endl;
    }

}




void mostrar_matriz(int** puntero_matriz, int filas, int columnas)
{

    cout << "Imprimiendo matriz " << endl;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << *(*(puntero_matriz + i) + j) << "  ";
        }
        cout << endl;
    }

}

void limpiar()
{

    // limpiar memoria de las matrices de punteros
    for (int i = 0; i < n_filas; i++)
    {
        delete[] puntero_matriz_1[i];
        delete[] puntero_matriz_2[i];
    }

    delete[] puntero_matriz_1;
    delete[] puntero_matriz_2;
}


void parada()
{
    // parada y espera de la pulsacion de una tecla
    cout << "Pulsa una tecla" << endl;
    cin.get();

}