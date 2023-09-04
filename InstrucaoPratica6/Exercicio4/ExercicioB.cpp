#include <iostream>

using namespace std;

int main(){

    double raio, diametro, perimetro, area;

    cout << "Digite o raio do circulo: ";

    cin >> raio;

    diametro = raio * 2;

    cout << "O diametro do circulo e: " << diametro << endl;

    perimetro = 2 * 3.1415 * raio;

    cout << "O perimetro do circulo e: " << perimetro << endl;

    area = 3.1415 * (raio * raio);

    cout << "A area do circulo e: " << area << endl;

    return 0;
}