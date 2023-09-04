#include <iostream>

using namespace std;

int main(){

    double x, y, z;

    cout << "Digite dois numeros: ";
    scanf("%lf %lf", &x, &y);

    z = x + y;

    cout << "A soma dos numeros e: " << z << endl;

    z = (x + y) / 2;

    cout << "A media dos numeros e: " << z << endl;

    z = x * y;

    cout << "O produto dos numeros e: " << z << endl;

    z = (x > y) ? x : y;

    cout << "O maior numero e: " << z << endl;

    z = (x < y) ? x : y;

    cout << "O menor numero e: " << z << endl;

    return 0;
}