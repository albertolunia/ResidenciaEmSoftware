#include <iostream>

using namespace std;

int main(){

    int numero, soma = 0;

    cout << "Digite um numero inteiro: ";

    cin >> numero;

    for(int i = 1; i < numero; i++){
        if(numero % i == 0){
            soma += i;
        }
    }

    if(soma == numero){
        cout << "O numero " << numero << " eh perfeito." << endl;
    }else{
        cout << "O numero " << numero << " nao eh perfeito." << endl;
    }

    return 0;
}
