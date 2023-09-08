#include <iostream>

using namespace std;

void multiplica_por_n(int *vet, int qtde, int n);

int main()
{
    int qtde, *vet, n;

    cout << "Digite a quantidade de elementos do vetor: ";
    cin >> qtde;

    vet = new int[qtde];

    cout << "Digite os valores do vetor: " << endl;
    for(int i = 0; i < qtde; i++)
    {
        cout << "Digite o valor da posicao " << i << ": ";
        cin >> vet[i];
    }

    cout << "Digite o multiplicador: ";
    cin >> n;

    multiplica_por_n(vet, qtde, n);

    cout << "Vetor multiplicado: " << endl;
    for(int i = 0; i < qtde; i++)
    {
        cout << vet[i] << " ";
    }
    cout << endl;

    delete [] vet;

    return 0;
}

void multiplica_por_n(int *vet, int qtde, int n)
{
    for(int i = 0; i < qtde; i++)
    {
        vet[i] *= n;
    }
}