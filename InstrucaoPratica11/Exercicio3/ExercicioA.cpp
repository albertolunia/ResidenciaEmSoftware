#include <iostream>

using namespace std;

void ordena(float &a, float &b, float &c, float &d);

int main()
{
    float a, b, c, d;

    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;
    cout << "Digite o valor de d: ";
    cin >> d;

    ordena(a, b, c, d);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;

    return 0;
}

void ordena(float &a, float &b, float &c, float &d)
{
    float aux;

    if(a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }

    if(a > c)
    {
        aux = a;
        a = c;
        c = aux;
    }

    if(a > d)
    {
        aux = a;
        a = d;
        d = aux;
    }

    if(b > c)
    {
        aux = b;
        b = c;
        c = aux;
    }

    if(b > d)
    {
        aux = b;
        b = d;
        d = aux;
    }

    if(c > d)
    {
        aux = c;
        c = d;
        d = aux;
    }
}