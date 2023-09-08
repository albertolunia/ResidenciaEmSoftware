#include <iostream>

using namespace std;

int main()
{
    int array[100], array2[20] = {0}, maior = 0, hash;

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        array[i] = 1 + rand() % 20;

        array2[array[i]-1]++;
    }

    for (int i = 0; i < 20; i++)
    {
        cout << "O numero " << i+1 << " apareceu " << array2[i] << " vezes. ";
        hash = array2[i];
        while (hash > 0)
        {
            cout << "#";
            hash--;
        }

        cout << endl;
    }

    for (int i = 0; i < 20; i++)
    {
        if (array2[i] > maior)
        {
            maior = array2[i];
        }
    }

    for (int i = 0; i < 20; i++)
    {
        if(array2[i] == maior)
        {
            cout << "\nO numero que mais apareceu foi " << i+1 << " apareceu " << array2[i] << " vezes. " << endl;
        }
    }
    

    
    return 0;
}