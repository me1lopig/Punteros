// Orden_Arreglo.cpp 
// ordenar un arreglo usando punteros
// a traves de cualquier metodo
//

#include <iostream>
#include<stdlib.h>


using namespace std;

// declaracion de variables globales
int long_datos; // numero de elementos del vector
int* datos; // arreglo en que vamos a ordenar


void introducir_datos(); // introduce los datos 
void imprimir(int*, int); // se le pasa la primera direccion del arreglo y la dimension
void ordena(int*, int); // se le pasa la primera direccion del arreglo y la dimension


int main()
{
    //int datos[] = { 4,2,3,0,1,5,8,7,-6,-58 }; // arreglo  estatico desordenado
    //int long_datos = sizeof(datos) / sizeof(*datos); // longitud del vector
    
    
    // llamar a las funciones
    introducir_datos();
    ordena(datos, long_datos);
    imprimir(datos, long_datos);
  
    delete[] datos; // limpieza de memoria del arreglo


    // parada
    cout << "Pulsa una tecla" << endl;
    cin.get();

    return 0;
}


void ordena(int *array, int dimension)
{

    for (int i = 0; i < dimension; i++)
    {
        int min = 2147483647; // mayor entero 

        for (int j = i; j < dimension; j++)
        {
            // cout << datos[j] << endl;
            if (*(array+j) < min)
            {
                min = *(array+j);
                *(array+j) = *(array+i);
                *(array+i) = min;
            }

        }
        //cout << "el minimo es " << min << endl;
        //cout << endl;
    }

}

void imprimir(int *array, int dimension)
{
    
    // imprimir el contenido del arreglo

    for (int i = 0; i < dimension; i++)
    {
        cout << "[" << i << "]=" << *(array+i) << endl;
    }

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
        cout << "[" << i+1 << "]= ";
        cin >> *(datos + i);
    }
}