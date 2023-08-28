#include <iostream>
#include <limits>

using namespace std;

int main() {
    int vInt = 0;
    float vFloat = 0;
    double vDouble = 0;

    cout << "Valor inteiro 0 como boolean: " << bool(vInt) << endl;
    cout << "Valor inteiro 0 como float: " << bool(vFloat) << endl;
    cout << "Valor inteiro 0 como double: " << bool(vDouble) << endl;

    vInt = 223;
    vFloat = 14.5;
    vDouble = 542.12542;

    cout << "Valor inteiro diferente de 0 como boolean: " << bool(vInt) << endl;
    cout << "Valor inteiro diferente de 0 como float: " << bool(vFloat) << endl;
    cout << "Valor inteiro diferente de 0 como double: " << bool(vDouble) << endl;
    
    return 0;
}