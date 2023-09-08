#include <iostream>

using namespace std;

int main()
{
    float array[250], maior, menor, media;
    int i;

    srand(time(NULL));

    for (i = 0; i < 250; i++)
    {
        array[i] = 10 + 30.0 * (rand() % 3000) / 2999.0;
    }

    maior = array[0];
    menor = array[0];
    media = 0;

    for (i = 0; i < 250; i++)
    {
        if (array[i] > maior)
        {
            maior = array[i];
        }
        if (array[i] < menor)
        {
            menor = array[i];
        }
        media += array[i];
    }

    media /= 250;

    cout << "A temperatura maxima reportada foi " << maior << " graus." << endl;
    cout << "A temperatura minima reportada foi " << menor << " graus." << endl;
    cout << "\nA temperatura media reportada foi " << media << " graus." << endl;

    for (i = 0; i < 250; i++)
    {
        if (array[i] > media)
        {
            array[i]++;
        }
        else
        {
            array[i] -= 2;
        }
    }

    maior = array[0];
    menor = array[0];
    media = 0;

    for (i = 0; i < 250; i++)
    {
        if (array[i] > maior)
        {
            maior = array[i];
        }
        if (array[i] < menor)
        {
            menor = array[i];
        }
        media += array[i];
    }

    media /= 250;

    cout << "\nA temperatura maxima prevista e " << maior << " graus." << endl;
    cout << "A temperatura minima prevista e " << menor << " graus." << endl;
    cout << "\nA temperatura media prevista e " << media << " graus." << endl;

    return 0;
}