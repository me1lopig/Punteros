// Transmision.cpp 
//transmision de direcciones
// intercambiar el valor de dos variables mediante punteros
//
//

#include <iostream>

using namespace std;

// declaracion de las funciones a usar
void parada();
void intercambio(float*, float*);


int main()
{
   // variables a intercambiar
    float num1 = 3.15;
    float num2 = 4.5;

    cout << "Valores iniciales " << endl;
    cout << "Primer numero  "<<num1<< endl;
    cout << "Segundo numero " << num2 << endl;

    cout << "Direccion del primer numero  " << &num1 << endl;
    cout << "Dirección del segundo numero " << &num2 << endl;

    // intercambio

    cout << "\n\nRealizamos el intercambio de las direcciones " << endl;
    intercambio(&num1, &num2);

    cout << "Primer numero  " << num1 << endl;
    cout << "Segundo numero " << num2 << endl;

    cout << "Direccion del primer numero  " << &num1 << endl;
    cout << "Dirección del segundo numero " << &num2 << endl;

    parada();
    return 0;
} 



void parada()
{
    // parada antes de cerrar
    cout << "\nPulsa una tecla para terminar";
    cin.get();
}

void intercambio(float *dir_1, float *dir_2)
{
    float aux; // variable auxiliar

    // intercambiamos las direcciones
    aux = *dir_1;
    *dir_1 = *dir_2;
    *dir_2 = aux;



}