/*Faça uma função chamada conta_primos que receba um vetor de números inteiros e
retorne a quantidade de números do vetor que são primos.
Lembrando que um número primo é aquele divisível apenas por 1 e por ele mesmo.
Protótipo da função:
int conta_primos (int *vet, int qtde);*/

#include <iostream>

using namespace std;

int conta_primos(int *vet, int qtde);

int main()
{
    int qtde, *vet, qtde_primos;

    cout << "Digite a quantidade de elementos do vetor: ";
    cin >> qtde;

    vet = new int[qtde];

    cout << "Digite os valores do vetor: " << endl;
    for(int i = 0; i < qtde; i++)
    {
        cout << "Digite o valor da posicao " << i << ": ";
        cin >> vet[i];
    }

    qtde_primos = conta_primos(vet, qtde);

    cout << "Quantidade de primos: " << qtde_primos << endl;

    delete [] vet;

    return 0;
}

int conta_primos(int *vet, int qtde)
{
    int qtde_primos = 0, divisores;

    for(int i = 0; i < qtde; i++)
    {
        divisores = 0;
        for(int j = 1; j <= vet[i]; j++)
        {
            if(vet[i] % j == 0)
            {
                divisores++;
            }
        }
        if(divisores == 2)
        {
            qtde_primos++;
        }
    }

    return qtde_primos;
}