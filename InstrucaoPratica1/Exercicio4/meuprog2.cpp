#include <iostream>
#include <string>

using namespace std;

int main() {
    int n1, n2;
    cout << "Insira um numero:";
    cin >> n1;
    cout << "Insira outro numero:";
    cin >> n2;
    cout << "A soma dos numeros e: " << n1 + n2 << endl;
    cout << "A subtracao dos numeros e: " << n1 - n2 << endl;
    cout << "A multiplicacao dos numeros e: " << n1 * n2 << endl;
    cout << "A divisao dos numeros e: " << n1 / n2 << endl;
    cout << "O resto da divisao dos numeros e: " << n1 % n2 << endl;

    return 0;
}