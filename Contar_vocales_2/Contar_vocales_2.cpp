// Contar_vocales_2.cpp 
// contar los distintos tipos de vocales
// dar los valores de cada uno de los tipos
//


#pragma warning(disable : 4996) //desactiva el error 4996 en tiempo de ejecución

#include <iostream>
#include<stdlib.h>
#include<limits>




using namespace std;

// declaracion de variables globales
int long_datos; // numero de elementos del vector
char* datos; // arreglo en que vamos a ordenar
int a = 0,e = 0,i = 0,o = 0,u=0; // numero de vocales



void introducir_datos(); // introduce los datos 
void buscar_vocales(char*, int); // da la primera  posición donde se encuentra el  valor buscado



int main()
{

    // Llamada a las funciones
    introducir_datos();
    buscar_vocales(datos, long_datos);


    delete[] datos;// borrado de la matriz dinamica

    // parada
    cout << "Pulsa una tecla" << endl;
    cin.get();

    return 0;
}




void introducir_datos()
{
    // se introduce la cadema del nombre y se pasa a mayuscula
    // introduce el numero de datos del vector 

    cout << "Extension del nombre ";
    cin >> long_datos;

    // borrado del buffer 
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');


    // declaracion del array dinamico
    datos = new char[long_datos];

    cout << "Introduce el nonbre ";
    cin.getline(datos, long_datos, '\n');

    strupr(datos); // pasamos la cadena a mayusculas 
}


void buscar_vocales(char* nombre, int dim)
{
    // funcion para la busqueda de vocales

    for (int j = 0; j < dim; j++)  // ojo con los nombres de las variables que no coincidan
    {
        switch (*(nombre + j))
        {

        case 'A':
            a++;
            break;
        case 'E':
            e++;
            break;
        case 'I':
            i++;
            break;
        case 'O':
            o++;
            break;
        case 'U':
            u++;
            break;

        default:
            break;
        }
    }

    cout << "El numero de vocales a  es " << a << endl;
    cout << "El numero de vocales e  es " << e << endl;
    cout << "El numero de vocales i  es " << i << endl;
    cout << "El numero de vocales o  es " << o << endl;
    cout << "El numero de vocales u  es " << u << endl;
}
