#include <iostream>

using namespace std;

int main(){

    int num1, num2, maior;

    cout << "Digite dois numeros: ";
    cin >> num1 >> num2;

    maior = (num1 > num2) ? num1 : num2;

    cout << "O maior numero e: " << maior << endl;

    (num1 == num2) ? cout << "Estes números são iguais" : cout << "Estes números são diferentes";

    (maior % 2 == 0) ? cout << "É par" : cout << "É impar";
    

    return 0;
}