#include <iostream>

using namespace std;

int main()
{
    char string1[11], string2[11], aux;
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        string1[i] = 'a' + rand() % ('z' - 'a');
        string2[i] = 'a' + rand() % ('z' - 'a');
    }

    string1[10] = '\0';
    string2[10] = '\0';

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (string1[j] > string1[j + 1])
            {
                aux = string1[j];
                string1[j] = string1[j + 1];
                string1[j + 1] = aux;
            }
            if (string2[j] > string2[j + 1])
            {
                aux = string2[j];
                string2[j] = string2[j + 1];
                string2[j + 1] = aux;
            }
        }
    }

    string1[0] -= 32;
    string2[0] -= 32;

    cout << "String 1: " << string1 << endl;
    cout << "String 2: " << string2 << endl;

    return 0;
}