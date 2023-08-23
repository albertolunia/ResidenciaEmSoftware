#include <iostream>

using namespace std;

int main() {
    char letra[] = "0123456789";
    
    for (int i = 0; i < 10; i++)
    {
        
        cout << "'" << letra[i]; 
        cout << "' - ASCII:" << dec << int(letra[i]);
        cout << " - HEX: " << hex << int(letra[i]);
        cout << " - OCT: " << oct << int(letra[i]) << endl;

    }
    return 0;
}