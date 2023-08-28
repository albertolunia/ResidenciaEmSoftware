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


    long int liMaior = numeric_limits<long int>::max();
    long int liMenor = numeric_limits<long int>::min();

    cout << "Menor valor representado por um long int: " << liMenor << endl;
    cout << "Maior valor representado por um long int: " << liMaior << endl;

    long int li;

    li = 9223372036854775809;

    cout << "Adicionando '9223372036854775809' um valor maior que o suportado: " << li << endl;

    unsigned int uiMaior = numeric_limits<unsigned int>::max();
    unsigned int uiMenor = numeric_limits<unsigned int>::min();

    cout << "\nMenor valor representado por um unsigned int: " << uiMaior << endl;
    cout << "Maior valor representado por um unsigned int: " << uiMenor << endl;

}