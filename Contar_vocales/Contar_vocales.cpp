// Contar_vocales.cpp 
// contar el nuemero de vocales de un nombre
// se ha usado asignacion dinamina del array de caracteres no muy ortodoxa

#pragma warning(disable : 4996) //desactiva el error 4996 en tiempo de ejecución

#include <iostream>
#include<stdlib.h>
#include<limits>
#include<string>



using namespace std;

// declaracion de variables globales
int long_datos; // numero de elementos del vector
char* datos; // arreglo en que vamos a ordenar
int n_vocales=0; // numero de vocales



void introducir_datos(); // introduce los datos 
void buscar_vocales(char*, int); // da la primera  posición donde se encuentra el  valor buscado



int main()
{

    // Llamada a las funciones
     introducir_datos();
     buscar_vocales(datos,long_datos);


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


void buscar_vocales(char* nombre,int dim)
{
    // funcion para la busqueda de vocales
    
    for (int i = 0; i < dim; i++)
    {
        switch (*(nombre+i))
        {

        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            n_vocales++;
            break;

        default:
            break;
        }
    }

    cout << "El numero de vocales es " << n_vocales << endl;
}