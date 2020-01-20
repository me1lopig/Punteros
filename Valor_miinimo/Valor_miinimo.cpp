// Calculamos el valor minimo de un array usando punteros
// uso de arrays mediante punteros
//

#include <iostream>

using namespace std;

int main()
{
    int array[] = { 2,5,4,7,34,-8,5,4,8,1};
    int* puntero;
    int n_datos = sizeof(array) / sizeof(*array); // dimension del array
    int minimo = INT32_MAX;


    puntero = array; // asociamos el puntero al array

    for (int i = 0; i < n_datos; i++)
    {
        if (*puntero <minimo)
        {
            minimo = *puntero;
         
        }
        *puntero++;
    }

    cout << "El valor minimo es " <<minimo<< endl;
    
    // parada antes de cerrar
    cout << "\nPulsa una tecla para terminar";
    cin.get();
    return 0;
}
