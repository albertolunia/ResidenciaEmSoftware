#include <iostream>
#include <limits>

using namespace std;

int main() {
    int menorInteiro = numeric_limits<int>::min();
    int maiorInteiro = numeric_limits<int>::max();
    
    cout << "Menor valor representado por um int: " << menorInteiro << endl;
    cout << "Maior valor representado por um int: " << maiorInteiro << endl;
    return 0;
}