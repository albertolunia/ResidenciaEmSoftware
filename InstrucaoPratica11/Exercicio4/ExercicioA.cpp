#include <iostream>

using namespace std;

void calcula(int &x, int &y);

int main()
{
    int x, y;

    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    calcula(x, y);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}

void calcula(int &x, int &y)
{
    int aux;

    aux = x;
    x = x + y;
    y = aux - y;
}