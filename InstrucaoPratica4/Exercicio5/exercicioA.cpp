#include <iostream>
#include <limits>

using namespace std;

void printBool(bool value) {
    if (value) {
        cout << "true";
    } else {
        cout << "false";
    }
}

int main() {
    int vInt = 0;
    float vFloat = 0;
    double vDouble = 0;

    cout << "Valor inteiro 0 como boolean: "; 
    printBool(vInt);
    cout << endl;
    
    cout << "Valor inteiro 0 como float: ";
    printBool(vFloat);
    cout << endl;

    cout << "Valor inteiro 0 como double: ";
    printBool(vDouble);
    cout << endl;

    vInt = 1;
    vFloat = 1;
    vDouble = 1;

    cout << "Valor inteiro 1 como boolean: ";
    printBool(vInt);
    cout << endl;

    cout << "Valor inteiro 1 como float: ";
    printBool(vFloat);
    cout << endl;

    cout << "Valor inteiro 1 como double: ";
    printBool(vDouble);
    cout << endl;
    
    return 0;
}