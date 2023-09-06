#include <iostream>

using namespace std;

int main(){

    int numero, anterior = 0, atual = 1, proximo;

    cout << "Digite um numero inteiro: ";

    cin >> numero;

    cout << anterior << " " << atual << " ";

    for(int i = 0; i < numero; i++){
        proximo = anterior + atual;
        cout << proximo << " ";
        anterior = atual;
        atual = proximo;
    }

    cout << endl;

    return 0;
}