#include <iostream>
#include <string>

using namespace std;

int main() {
    float n1, n2;
    cout << "Insira um numero:";
    cin >> n1;
    cout << "Insira outro numero:";
    cin >> n2;
    cout << "A soma dos numeros e: " << n1 + n2 << endl;
    cout << "A subtracao dos numeros e: " << n1 - n2 << endl;
    cout << "A multiplicacao dos numeros e: " << n1 * n2 << endl;
    cout << "A divisao dos numeros e: " << n1 / n2 << endl;

    // A operação de resto % não funciona entre numeros float
    //cout << "O resto da divisao dos numeros e: " << n1 % n2 << endl;

    return 0;
}