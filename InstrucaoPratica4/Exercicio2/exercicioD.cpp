#include <iostream>
#include <cwchar>

using namespace std;

int main(){

    wchar_t letra;
    
    cout << "Insira um caractere para ser convertido: ";
    wcin >> letra;

    cout << "'" << letra; 
    cout << "' - ASCII:" << dec << int(letra);
    cout << " - HEX: " << hex << int(letra);
    cout << " - OCT: " << oct << int(letra) << endl;

    return 0;
}