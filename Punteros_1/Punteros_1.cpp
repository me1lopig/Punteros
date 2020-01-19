// Punteros_1.cpp 
// uso de punteros
// ejemplo
//

#include <iostream>

using namespace std;



int main()
{
 
    int numero = 45; // declaracion de la variable
    int* puntero; // declaracion de una variable puntero

    puntero = &numero; // se almacena la dirección de la variable en el puntero
    

    cout << "direccion de la variable" << &numero << endl;
    cout << "dirección de la variable desde el puntero " << puntero<<endl;
    cout << "contenido de la variable desde el puntero " << *puntero << endl; // se imprime el contenido 
   
    *puntero = 15; // cambiamos el valor de la variable a traves del puntero
    cout << "contenido de la variable desde el puntero modificada " << numero << endl; // se imprime el contenido 

    // parada antes de cerrar
    cout << "Pulsa una tecla para terminar";
    cin.get();
    return 0;

  }


