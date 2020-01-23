// Transmision_arreglos.cpp :
// transmision de arreglos mediante punteros
//

#include <iostream>

using namespace std;


// declaracion de funciones
int maximo(int*, int); // se le pasa la primera direccion del arreglo y la dimension

int main()
{
    const int nElementos = 5;
    int numeros[nElementos] = { 3,5,2,8,12 };

    cout << "El mayor elemento del arreglo es " << maximo(numeros, nElementos) << endl;


    // parada antes de cerrar
    cout << "\nPulsa una tecla para terminar";
    cin.get();
    return 0;
}

int maximo(int* dirVector, int n_elementos)
{

    int max = 0;

    for (int i = 0; i < n_elementos; i++)
    {
        if ((*(dirVector+i)) > max)
        {
            max = *(dirVector+i);
        }
   
    }

    return max;
}
