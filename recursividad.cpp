#include <iostream>

using namespace std;

int factorial(int num)
{
    switch (num)
    {
    case 0:
    case 1:
        return 1;
    }

    return num * factorial(num - 1);
}

int main()
{
    int num;
    cout << "¿El factorial de cuál número desea buscar? ";
    cin >> num;
    cout << "El factorial de " << num << " es " << factorial(num) << endl;
    return 0;
}