#include <iostream>

using namespace std;

int main() {
    
    int a, b, c;

    cout << "Digite dois inteiros: ";
    cin >> a;
    cin >> b;

    c = a + b;

    cout << "\nA soma de " << a << " e " << b << " é(HEXADECIMAL)" << c << hex << endl;

    c = a * b;

    cout << "\nO produto de " << a << " e " << b << " é(OCTAL) " << c << oct << endl;

    c = a - b;
    c < 0 ? cout << "\nDiferença: -" << c : cout << "\nDiferença: " << c;


    c = (b == 0) ? 0 : (a / b);
    cout << (b == 0 ? "\nDivisão por zero não é permitida" : "\nDivisão: ") << c << endl;


    c = (a / b == 0) ? a : (a % b);
    cout << "\nResto: " << c << endl;


    return 0;
}