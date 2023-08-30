#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a,b,c,delta,x1,x2;

    cout << "Digite três números reais: ";
    cin >> a >> b >> c;

    delta = pow(b,2) - 4 * a * c;

    cout << (delta ==  0 ? "\nSomente uma raiz" : (delta < 0) ? "\nNão existem raízes reais" : "\nExistem raízes reais");
    
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    cout << "\nAs raízes da equação " << a << "x² + " << b << "x + " << c << " são: " << x1 << " e " << x2 << endl;

}