#include <iostream>

using namespace std;

int main()
{
    float array1[15], array2[15], array3[15];
    int i;

    
    cout << fixed;
    cout.precision(2);

    for (i = 0; i < 15; i++)
    {
        array1[i] = ((float)rand() / RAND_MAX) * 10;
        array2[i] = ((float)rand() / RAND_MAX) * 10;
    }

    for (i = 0; i < 15; i++)
    {
        array3[i] = (array1[i] + array2[i]) / 2;
    }

    for (i = 0; i < 15; i++)
    {
        cout << "A nota do aluno " << i + 1 << " no primeiro bimestre foi " << array1[i] << "." << endl;
        cout << "A nota do aluno " << i + 1 << " no segundo bimestre foi " << array2[i] << "." << endl;
    }

    cout << endl;

    for (i = 0; i < 15; i++)
    {
        if (array2[i] > array1[i])
        {
            cout << "O aluno " << i + 1 << " melhorou." << endl;
        }
        else if (array2[i] < array1[i])
        {
            cout << "O aluno " << i + 1 << " piorou." << endl;
        }
        else
        {
            cout << "O aluno " << i + 1 << " manteve a nota." << endl;
        }
    }

    cout << endl;

    for (i = 0; i < 15; i++)
    {
        cout << "A media do aluno " << i + 1 << " foi " << array3[i] << "." << endl;
    }

    return 0;
}