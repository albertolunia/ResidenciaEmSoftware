/* Escreva um programa em C++ que leia um número inteiro e imprima todos os divisores
desse número.*/

#include <iostream>

using namespace std;

int main(){

    int numero;

    cout << "Digite um numero inteiro: ";

    cin >> numero;

    cout << "Os divisores de " << numero << " sao: ";

    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){
            cout << i << " ";
        }
    }

    return 0;
}