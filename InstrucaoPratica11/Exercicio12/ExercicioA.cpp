/*Escreva uma função que receba duas strings A e B por parâmetro e retorne uma
terceira string C com os caracteres que aparecem tanto em A quanto em B. O
tamanho das string A e B pode ser diferente.*/

#include <iostream>

using namespace std;

void interseccao(char *A, char *B, char *C);

int main()
{
    char A[100], B[100], C[100];

    cout << "Digite a string A: ";
    cin.getline(A, 100);

    cout << "Digite a string B: ";
    cin.getline(B, 100);

    interseccao(A, B, C);

    cout << "Interseccao: " << C << endl;

    return 0;
}

void interseccao(char *A, char *B, char *C)
{
    int i = 0, j = 0, k = 0;

    while(A[i] != '\0')
    {
        j = 0;
        while(B[j] != '\0')
        {
            if(A[i] == B[j])
            {
                C[k] = A[i];
                k++;
            }
            j++;
        }
        i++;
    }
    C[k] = '\0';
}