#include <iostream>

using namespace std;

int main() {
    
    char ch1, ch2, ch3;

    cout << "Digite um caracteres: ";
    cin >> ch1;

    string tipo_caractere = (ch1 >= 'A' && ch1 <= 'Z') ? "uma letra maiúscula" :
                            (ch1 >= 'a' && ch1 <= 'z') ? "uma letra minúscula" :
                            (ch1 >= '0' && ch1 <= '9') ? "um dígito" :
                            "outro tipo de caractere";

    cout << "O caractere " << ch1 << " é " << tipo_caractere << endl;

    ch2 = 81;

    cout << "\n'" << ch2; 
    cout << "' - ASCII:" << dec << int(ch2);
    cout << " - HEX: " << hex << int(ch2);
    cout << " - OCT: " << oct << int(ch2) << endl;

    ch2 = 'A';

    ch3 = ch2 + 32;

    cout << "\n'" << ch3; 
    cout << "' - ASCII:" << dec << int(ch3);
    cout << " - HEX: " << hex << int(ch3);
    cout << " - OCT: " << oct << int(ch3) << endl;
    
    return 0;
}