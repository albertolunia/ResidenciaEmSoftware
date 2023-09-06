#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int numero, soma = 0, aux, digitos = 0;

    cout << "Digite um numero inteiro: ";

    cin >> numero;

    aux = numero;

    while(aux != 0){
        aux /= 10;
        digitos++;
    }

    aux = numero;

    while(aux != 0){
        soma += pow(aux % 10, digitos);
        aux /= 10;
    }

    if(soma == numero){
        cout << "O numero " << numero << " eh um numero armstrong." << endl;
    }else{
        cout << "O numero " << numero << " nao eh um numero armstrong." << endl;
    }

    return 0;
}