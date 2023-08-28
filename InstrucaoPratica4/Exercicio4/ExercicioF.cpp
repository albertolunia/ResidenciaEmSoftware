#include <iostream>
#include <limits>

using namespace std;

int main() {
    double dbMaior = numeric_limits<double>::max();
    double dbMenor = numeric_limits<double>::min();
    long double ldbMaior = numeric_limits<long double>::max();
    long double ldbMenor = numeric_limits<long double>::min();

    cout << "Maior valor de Double: " << dbMaior << endl;
    cout << "Menor valor de Double: " << dbMenor << endl;
    cout << "Maior valor de Long Double: " << ldbMaior << endl;
    cout << "Menor valor de Long Double: " << ldbMenor << endl;

    return 0;
}