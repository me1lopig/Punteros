// Traspuesta.cpp 
// calculo de una matriz traspuesta a partir de otra
//

#include <iostream>
#include <stdlib.h>


using namespace std;

// declaracion de las matrices dinaminas
int** matriz;


// declaracion de las variables de dimension
int n_filas;
int n_columnas;


void pedir_datos(); // entrada de datos
void transponer(int**,int,int); // transponer matriz
void mostrar_matriz(int**, int, int); // mostrar datos de las matrices
void limpiar(); // limpieza de la memoria de las matrices dinamicas
void parada(); // parada al final del programa


int main()
{
    
    // entrada de los valores de filas y de columnas
    cout << "Numero de filas "; cin >> n_filas;
    cout << "Numero de columnas "; cin >> n_columnas;



    pedir_datos();

    // antes de la transposición
    mostrar_matriz(matriz, n_filas, n_columnas);



    //transposicion
    transponer(matriz,n_filas,n_columnas);





    // despues de la transposicion
    mostrar_matriz(matriz, n_filas, n_columnas);

    limpiar();

    parada();

    return 0;

}


void pedir_datos()
{

    // reserva de memoria para la primera matriz
    matriz = new int* [n_filas]; // reserva de memoria para las filas
    // reserva de memoria para las columnas
    for (int i = 0; i < n_filas; i++)
    {
        matriz[i] = new int[n_columnas];
    }


    // entrada de datos de la primera matriz
    cout << "Entrada de los datos de la primera matriz" << endl;

    for (int i = 0; i < n_filas; i++)
    {
        for (int j = 0; j < n_columnas; j++)
        {
            cout << "elemento [" << i << "," << j << "]= ";
            cin >> *(*(matriz + i) + j);
        }
    }

}




void transponer(int** matriz, int n_filas, int n_columnas)
{
    // trasposición de la matriz
    int aux; // valor auxiliar para el intercambio

    for (int i = 0; i < n_filas; i++)
    {
        for (int j = i+1; j < n_columnas; j++) // se pasa al siguiente elementp
        {
            if (i != j)
            {
  
                aux = *(*(matriz + i) + j);
                *(*(matriz + i) + j) = *(*(matriz + j) + i);
                *(*(matriz + j) + i) = aux;

            }

        }
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
        delete[] matriz[i];

    }

    delete[] matriz;

}


void parada()
{
    // parada y espera de la pulsacion de una tecla
    cout << "Pulsa una tecla" << endl;
    cin.get();

}