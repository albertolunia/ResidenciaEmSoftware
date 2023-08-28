#include <iostream>
#include <limits>

using namespace std;

int main() {

    int menorInteiro = numeric_limits<int>::min();
    int maiorInteiro = numeric_limits<int>::max();
    
    cout << "Menor valor representado por um int: " << menorInteiro << endl;
    cout << "Maior valor representado por um int: " << maiorInteiro << endl;

    unsigned long int uliMaior = numeric_limits<unsigned long int>::max();
    unsigned long int uliMenor = numeric_limits<unsigned long int>::min();

    cout << "Menor valor representado por um unsigned long int: " << uliMenor << endl;
    cout << "Maior valor representado por um unsigned long int: " << uliMaior << endl;


    long int li = uliMaior;

    uliMaior = li;
    
    /*Como Uli é um valor unsigned, ele tem um tamanho muito maior do que o Li pode suportar*/
    cout << "Valor de li: " << li << endl;
    cout << "Valor de uli após atribuição: " << uliMaior << endl;
    return 0;

}