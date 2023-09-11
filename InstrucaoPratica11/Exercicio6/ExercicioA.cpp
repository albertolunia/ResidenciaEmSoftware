#include <iostream>

using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2);

int main()
{
    int tam1, tam2, *vet1, *vet2, *vet3;

    cout << "Digite o tamanho do primeiro vetor: ";
    cin >> tam1;
    cout << "Digite o tamanho do segundo vetor: ";
    cin >> tam2;

    vet1 = new int[tam1];
    vet2 = new int[tam2];

    cout << "Digite os valores do primeiro vetor: " << endl;
    for(int i = 0; i < tam1; i++)
    {
        cout << "Digite o valor da posicao " << i << ": ";
        cin >> vet1[i];
    }

    cout << "Digite os valores do segundo vetor: " << endl;
    for(int i = 0; i < tam2; i++)
    {
        cout << "Digite o valor da posicao " << i << ": ";
        cin >> vet2[i];
    }

    vet3 = intercala(vet1, tam1, vet2, tam2);

    cout << "Vetor intercalado: " << endl;
    for(int i = 0; i < tam1 + tam2; i++)
    {
        cout << vet3[i] << " ";
    }
    cout << endl;

    delete [] vet1;
    delete [] vet2;
    delete [] vet3;

    return 0;
}

int* intercala(int *vet1, int tam1, int *vet2, int tam2)
{
    int *vet3, i, j, k;

    vet3 = new int[tam1 + tam2];

    for(i = 0, j = 0, k = 0; i < tam1 + tam2; i++)
    {
        if(i % 2 == 0)
        {
            if(vet1[j] == NULL)
            {
                vet3[i] = vet2[k];
                k++;
                continue;
            }
            vet3[i] = vet1[j];
            j++;
        }
        else
        {
            if(vet2[k] == NULL)
            {
                vet3[i] = vet1[j];
                j++;
                continue;
            }
            vet3[i] = vet2[k];
            k++;
        }
    }

    return vet3;
}