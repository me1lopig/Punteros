// Dinamica_1.cpp : 
// asignacion dinamica de memoria de arreglos
// ejemplo 1
// se solicita al usuario n datos y se almacena en un arreglo dinámico
//

#include <iostream>
#include<stdlib.h>


using namespace std;


int numcal; // numero de calificaciones
int* calif; // puntero que vamos a usar para el array dinamico


void pedirnotas(); // funcion para pedir notas
void mostrarnotas(); // mostramos las notas del arrglo



int main()
{
    
    pedirnotas(); 

    mostrarnotas();

    delete[] calif;// borramos la memoria ocupada

    // parada antes de cerrar
    cout << "\nPulsa una tecla para terminar";
    cin.get();
    return 0;
}


void pedirnotas()
{
    // funcion pedir notas
    cout << "Indica el numero de calificaciones ";
    cin >> numcal;

    calif = new int[numcal]; //creamos el arreglo dinamico con una reserva de memoria en tiempo de ejecución

    // entrada de los datos

    for (int i = 0; i < numcal; i++)
    {
        cout << "Ingresa la nota " << i+1 << endl;
        cin >> calif[i];
        
    }
}

void mostrarnotas()
{
    for (int i = 0; i < numcal; i++)
    {
        cout << "La nota " << i + 1 << " tiene un valor de "<<calif[i]<<endl;
    
   }
}
