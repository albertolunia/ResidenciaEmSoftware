#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x,y,z;
    double yCurva;

    cout << "Digite dois números reais: ";
    cin >> x >> y;

    yCurva = 5 * x + 2;

    cout << "\nA curva esta na " << (y == yCurva ? "reta" : (y > yCurva ? "esquerda da reta" : "direita da reta")) << endl;

    z = sqrt(pow(x,2) + pow(y,2));

    cout << "\nA distância do ponto (" << x << "," << y << ") até a origem é: " << z << endl;

    z = x * y;

    cout << "\nO produto de " << x << " e " << y << " é: ";
    
    cout << std::scientific;

    cout << z << endl;
}