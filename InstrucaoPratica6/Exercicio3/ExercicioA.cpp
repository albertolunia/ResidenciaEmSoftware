#include <iostream>
#include <cctype>

using namespace std;

int main(){

    char ch1, ch2, ch3;

    cout << "Digite dois caracteres: ";
    cin >> ch1 >> ch2;

    ch3 = ch1 - 1;

    cout << "O valor de ch3 e: " << ch3 << " em dec:" << (int)ch3 << " em oct: " << oct << (int)ch3 << " em hex: " << hex << (int)ch3 << endl;

    ch3 = ch2 - 1;

    cout << "O valor de ch3 e: " << ch3 << " em dec:" << (int)ch3 << " em oct: " << oct << (int)ch3 << " em hex: " << hex << (int)ch3 << endl;

    ch3 = (ch1 >= 65 && ch2 <= 90) ? 'A' : ' ';

    cout << "O valor de ch3 e: " << ch3 << endl;

    ch3 = (ch1 >= 97 && ch2 <= 122) ? 'a' : ' ';

    cout << "O valor de ch3 e: " << ch3 << endl;

    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';

    return 0;
}