#include <iostream>

using namespace std;

int *encontra_letra(string str, char letra, int *qtde);

int main()
{
    string str;
    char letra;
    int *vet, qtde;

    cout << "Digite uma string: ";
    getline(cin, str);

    cout << "Digite uma letra: ";
    cin >> letra;

    vet = encontra_letra(str, letra, &qtde);

    cout << "A letra " << letra << " foi encontrada nas posicoes: ";
    for(int i = 0; i < qtde; i++)
    {
        cout << vet[i] << " ";
    }
    cout << endl;

    delete [] vet;

    return 0;
}

int *encontra_letra(string str, char letra, int *qtde)
{

    int count = str.length(), j = 0;

    int *vet = new int[count];

    for(int i = 0; i < count; i++)
    {
        if(str[i] == letra)
        {
            vet[j] = i;
            j++;
        }
    }

    *qtde = j;

    return vet;
}