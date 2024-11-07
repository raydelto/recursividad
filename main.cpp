#include <iostream>
#include <vector>

using namespace std;

bool busquedaBinaria(const vector<int> &numeros, int numero)
{
    if (numeros.empty())
    {
        return false;
    }

    int izquierda = 0;
    int derecha = numeros.size() - 1;
    int i = 0;

    while (izquierda <= derecha)
    {
        i++;
        int puntoMedio = (izquierda + derecha) / 2;
        if (numero < numeros[puntoMedio])
        {
            derecha = puntoMedio - 1;
        }
        else if (numero > numeros[puntoMedio])
        {
            izquierda = puntoMedio + 1;
        }
        else
        {
            cout << "Busqueda binaria, retornó luego de " << i << " iteraciones" << endl;
            return true;
        }
    }
    cout << "Busqueda binaria, retornó luego de " << i << " iteraciones" << endl;
    return false;
}

bool busquedaLineal(const vector<int> &numeros, int numero)
{
    int i = 0;
    for (int num : numeros)
    {
        i++;
        if (num == numero)
        {
            cout << "Busqueda lineal, retornó luego de " << i << " iteraciones" << endl;
            return true;
        }
    }
    cout << "Busqueda lineal, retornó luego de " << i << " iteraciones" << endl;
    return false;
}

int main()
{
    // vector<int> enteros = {1, 3, 4, 5, 88, 192, 239, 454};
    vector<int> enteros;
    for (int i = 0; i < 1000000; i++)
    {
        enteros.push_back(i);
    }
    int numero = 1000001;
    busquedaLineal(enteros, numero);
    busquedaBinaria(enteros, numero);

    // if (busquedaBinaria(enteros, numero))
    // {
    //     cout << numero << " está contenido en el arreglo" << endl;
    // }
    // else
    // {
    //     cout << numero << " NO está contenido en el arreglo" << endl;
    // }
    return 0;
}