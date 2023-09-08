#include <iostream>
#include <vector>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo);

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 0, -1};
    int maximo, minimo;

    maxmin(vetor, 10, maximo, minimo);

    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;

    return 0;
}

void maxmin(int vetor[], int n, int &maximo, int &minimo)
{
    int i;

    maximo = vetor[0];
    minimo = vetor[0];

    for(i=1; i<n; i++)
    {
        if(vetor[i] > maximo)
        {
            maximo = vetor[i];
        }
        else if(vetor[i] < minimo)
        {
            minimo = vetor[i];
        }
    }
}