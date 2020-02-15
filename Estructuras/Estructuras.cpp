// Estructuras.cpp :
// Uso de punteros con estructuras

#include <iostream>
#include <stdlib.h>

using namespace std;

// variables globales
struct Persona
{
    char nombre[30];
    int edad;

}persona, * puntero_persona=&persona; // declaracion de la variable estructura y de la variable puntero


// funciones

void pedir_datos();
void mostrar_datos(Persona*);


int main()
{
    // Llamada a la funcion
    pedir_datos();
    mostrar_datos(puntero_persona);



    // parada y espera de la pulsacion de una tecla
    cout << "Pulsa una tecla" << endl;
    cin.get();

}


void pedir_datos()
{
    // solicita los datos de la variable de estrutura solicitada

    cout << "Digite su nombre  " ;
    cin.getline(puntero_persona->nombre,30,'\n');


    cout << "Digite su edad  ";
    cin >> puntero_persona->edad;

}

void mostrar_datos(Persona * puntero_persona)

{
    cout << "El nombre es " << puntero_persona->nombre << endl;
    cout << "La edad es " << puntero_persona->edad << endl;
 
}