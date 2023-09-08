/* Faça uma função que receba dois vetores de números inteiros e os seus
respectivos tamanhos por parâmetro e retorne um vetor com os valores dos dois
vetores intercalados. Depois faça o programa principal para testar a sua função.
Protótipo da função: int* intercala(int *vet1, int tam1, int *vet2, int tam2);*/

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
    int *vet3, i, j;

    vet3 = new int[tam1 + tam2];

    for(i = 0, j = 0; i < tam1; i++, j += 2)
    {
        vet3[j] = vet1[i];
    }

    for(i = 0, j = 1; i < tam2; i++, j += 2)
    {
        vet3[j] = vet2[i];
    }

    return vet3;
}