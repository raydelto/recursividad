#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Escribiendo texto en un archivo.
    // ofstream salida("texto.txt");
    // string texto;
    // cout << "Introduzca el texto a guardar en archivo: ";
    // cin >> texto;
    // salida << texto;
    // cout << "El mensaje: \"" << texto << "\" fue escrito en el archivo" << endl;

    ifstream entrada("texto.txt");
    string linea;
    while(!entrada.eof())
    {
        entrada >> linea;
        cout << linea<< " ";
    }
    cout << endl;
    return 0;
}