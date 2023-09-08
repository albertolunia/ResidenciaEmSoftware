/*Escreva uma função que recebe uma string de caracteres e uma letra e devolve um
vetor de inteiros contendo as posições (índices no vetor da string) onde a letra foi
encontrada) e um inteiro contendo o tamanho do vetor criado (total de letras iguais
encontradas). Utilize o retorno de um vetor para retornar os índices e um ponteiro
para guardar o tamanho do vetor.*/

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
    int *vet = new int[str.length()], j = 0;

    for(int i = 0; i < str.length(); i++)
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