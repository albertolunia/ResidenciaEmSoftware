#include <iostream>
#include <limits>

using namespace std;

int main() {
    float menorFloat= numeric_limits<float>::min();
    float maiorFloat= numeric_limits<float>::max();
    
    cout << "Menor valor representado por um float: " << menorFloat<< endl;
    cout << "Maior valor representado por um float: " << maiorFloat<< endl;
    return 0;
}