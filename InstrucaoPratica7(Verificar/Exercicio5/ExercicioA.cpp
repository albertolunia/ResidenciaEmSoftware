#include <iostream>

using namespace std;

int main(){

    int numero, palpite;

    srand(time(NULL));

    numero = rand() % 100 + 1;

    cout << "Tente adivinhar o numero entre 1 e 100: ";

    cin >> palpite;

    while(palpite != numero){
        if(palpite > numero){
            cout << "Palpite alto. Tente novamente: ";
        }else{
            cout << "Palpite baixo. Tente novamente: ";
        }
        cin >> palpite;
    }

    cout << "Parabens! Voce acertou o numero!" << endl;

    return 0;
}