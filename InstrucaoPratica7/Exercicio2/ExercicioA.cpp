#include <iostream>

using namespace std;

int main(){

    int numero, numeroInvertido = 0, numeroOriginal;

    cout << "Digite um numero inteiro: ";

    cin >> numero;

    numeroOriginal = numero;

    while(numero > 0){
        numeroInvertido = numeroInvertido * 10 + numero % 10;
        numero /= 10;
    }

    if(numeroOriginal == numeroInvertido){
        cout << "O numero " << numeroOriginal << " eh palindromo." << endl;

    }else{ 
        cout << "O numero " << numeroOriginal << " nao eh palindromo." << endl;
    }

    return 0;
}