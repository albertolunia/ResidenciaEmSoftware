#include <iostream>

using namespace std;

int main()
{
    int array[100], array2[20], i, maior, posicao;

    for (i = 0; i < 100; i++)
    {
        array[i] = 1 + rand() % 20;
    }

    for (i = 0; i < 20; i++)
    {
        array2[i] = 0;
    }

    for (i = 0; i < 100; i++)
    {
        array2[array[i] - 1]++;
    }

    maior = array2[0];
    posicao = 0;

    for (i = 0; i < 20; i++)
    {
        if (array2[i] > maior)
        {
            maior = array2[i];
            posicao = i;
        }
    }

    cout << "O numero que mais vezes aparece no array e o " << posicao + 1 << " com " << maior << " repeticoes." << endl;

    return 0;
}