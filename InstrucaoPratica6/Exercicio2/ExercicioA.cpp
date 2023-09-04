#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a, b, c;

    cout << "Digite o valor de A e B: ";
    cin >> a >> b;
    c = 4 * a + b / 3 - 5;
    cout << "O valor de C e: " << c << endl;
    c = 4 * (a + b) / (3 - 5);
    cout << "O valor de C e: " << c << endl;

    /* Os valores são diferentes porque na segundo é feito primeiro as operações dentro
    do, parantese, por causa da ordem de precedencia*/

    c = pow(a, 2) + 2 * b + c;
    cout << "O valor de C e: " << c << endl;

    return 0;
}