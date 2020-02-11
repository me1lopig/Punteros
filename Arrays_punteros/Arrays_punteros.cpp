// Arrays_punteros.cpp : 
// uso de arrays mediante puntero
// determinar los valores pares en un arreglo
//

#include <iostream>

using namespace std;

int main()
{
    int array[] = { 2,5,4,7,34,5,4,8 };
    int* puntero;
    int n_datos = sizeof(array) / sizeof(*array); // dimension del array
    int n_pares=0;

    puntero = array; // asociamos el puntero al array

    for (int i = 0; i < n_datos; i++)
    {
        if (*puntero % 2 ==0 )
        {
            cout << "el numero " << *puntero << " es par " << endl;
            cout<<"su direccion es "<<puntero<<endl;
            n_pares++;
        }
        *puntero++;
    }

    cout << "Hay " << n_pares << " numeros pares " << endl;
    // parada antes de cerrar
    cout << "\nPulsa una tecla para terminar";
    cin.get();
    return 0;
}


void pedir_datos()
{
    // funcion para introducir los datos



}

