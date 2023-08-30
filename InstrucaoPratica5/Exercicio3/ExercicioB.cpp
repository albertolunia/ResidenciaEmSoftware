#include <iostream>
#include <limits>

using namespace std;

int main() {
    int var;

    cout << "Digite um inteiro: ";
    cin >> var;
    short int maiorShortInt = numeric_limits<short int>::max();

    cout << (var > maiorShortInt ? "\nÉ maior que um short int" : "\nEste valor pertence ao intervalo dos shor int") << endl;


}