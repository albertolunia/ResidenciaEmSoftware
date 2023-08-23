#include <iostream>

using namespace std;

int main(){

    char letra;
    
    cout << "Insira um caractere para ser convertido: ";
    cin >> letra;
    cout << "'" << letra; 
    cout << "' - ASCII:" << dec << int(letra);
    cout << " - HEX: " << hex << int(letra);
    cout << " - OCT: " << oct << int(letra) << endl;

    return 0;
}