#include <iostream>
using namespace std;

int main()
{
    int num[] = {67, 11, 8, 34, 2};
    int n = 5;

    cout << "Arreglo original: ";

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    // Hacemos el Bubble Sort con un Bucle For para recorrer los datos de menor a mayor
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                // Intercambiamos los elementos
                int temporal = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temporal;
            }
        }
    }

    cout << "\nArreglo Ordenado con Bubble Sort: ";

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}
