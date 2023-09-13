#include <iostream>

using namespace std;

int celciusParaFahrenheit(int c){
    return (9 * c + 160) / 5;
}

int entrada(){
    int c;
    cout << "Digite uma temperatura em Celcius: ";
    cin >> c;
    return c;
}

void saida(int c, int f){
    cout << "A temperatura " << c << " em Celcius eh " << f << " em Fahrenheit" << endl;
}

int main(){

    int c = entrada();
    int f = celciusParaFahrenheit(c);
    saida(c, f);

    return 0;
}