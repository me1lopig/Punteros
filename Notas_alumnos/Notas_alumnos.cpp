// Notas_alumnos.cpp : 
// obtener el mejor promedio e indicar los datos de alumno que tiene mejor nota
//

#include <iostream>
#include <stdlib.h>

using namespace std;

// variables globales
int indice; // indice del mejor promedio

struct Alumno
{
    char nombre[30];
    int edad;
    float promedio;

};

// declaracion de la variable estructura y de la variable puntero
Alumno alumnos[3];
Alumno *puntero_alumno = &alumnos[0]; // puntero de la primera posicion de memoria


// funciones
void pedir_datos();
void calcular_mejor_promedio();
void mostrar_datos(Alumno*,int);


int main()
{
    // Llamada a la funcion
    pedir_datos();
    //calcular mejor promedio
    calcular_mejor_promedio();
    
    cout << endl << "Datos del alumno con mejor promedio " << endl;
    // imprimir datos del mejor promedio
    mostrar_datos(puntero_alumno,indice);


    // parada y espera de la pulsacion de una tecla
    cout << "Pulsa una tecla para terminar" << endl;
    cin.get();

}


void pedir_datos()
{
    // solicita los datos de la variable de estrutura solicitada
    for (int i = 0; i < 3; i++)
    {
        cout << "Alumno " << i+1 << endl;

        cout << "Digite su nombre  ";
        cin.getline((puntero_alumno+i)->nombre, 30, '\n');

      
        cout << "Digite su edad  ";
        cin >> (puntero_alumno + i)->edad;
        cin.ignore(256, '\n'); // limpieza del buffer

        cout << "Digite su promedio  ";
        cin >> (puntero_alumno + i)->promedio;
        cin.ignore(256, '\n');
        
    }

}

void calcular_mejor_promedio()
{
    // calcula le mejor promedio
    int max = 0; 

    for (int i = 0; i < 3; i++)
    {
        if (max < (puntero_alumno + i)->promedio)
        {
            max = (puntero_alumno + i)->promedio;
            indice = i; // indice del mejor promedio

        }

    }

 }


void mostrar_datos(Alumno* puntero_alumno, int indice)

{
    cout << endl;
    cout << "El nombre es " << (puntero_alumno+indice)->nombre << endl;
    cout << "La edad es " << (puntero_alumno+indice)->edad << endl;
    cout << "El mejor promedio es " << (puntero_alumno + indice)->promedio << endl;

}
