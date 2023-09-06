/*A seguinte expressão em C++ gera caracteres aleatórios no intervalo das
letras minúsculas: ‘a’ + rand()%(‘z’ - ‘a’). Utilizando esta
expressão implemente uma aplicação em que:
a. Gere duas strings de forma aleatória com 10 caracteres;
b. Transforme o primeiro caractere de cada string em maiúscula;
c. Imprima as strings em ordem alfabética;*/

#include <iostream>

using namespace std;

int main()
{
    char string1[11], string2[11], aux;
    int i, j;

    for (i = 0; i < 10; i++)
    {
        string1[i] = 'a' + rand() % ('z' - 'a');
        string2[i] = 'a' + rand() % ('z' - 'a');
    }

    string1[10] = '\0';
    string2[10] = '\0';

    string1[0] -= 32;
    string2[0] -= 32;

    if (string1[0] > string2[0])
    {
        for (i = 0; i < 10; i++)
        {
            cout << string2[i];
        }
        cout << endl;
        for (i = 0; i < 10; i++)
        {
            cout << string1[i];
        }
        cout << endl;
    }
    else
    {
        for (i = 0; i < 10; i++)
        {
            cout << string1[i];
        }
        cout << endl;
        for (i = 0; i < 10; i++)
        {
            cout << string2[i];
        }
        cout << endl;
    }

    return 0;
}