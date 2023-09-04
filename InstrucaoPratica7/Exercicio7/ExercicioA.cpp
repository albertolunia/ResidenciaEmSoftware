#include <iostream>

using namespace std;

int main(){

    int altura, contador = 0;

    cout << "Digite a altura do padrao: ";

    cin >> altura;

    for(int i = 0; i < altura; i++){
        for(int j = 0; j <= i; j++){
            cout << (char)('A' + contador);
            contador++;
        }
        cout << endl;
    }

    return 0;
}