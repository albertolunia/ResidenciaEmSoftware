#include <iostream>

using namespace std;

int main(){

    double x,y;
    int quadrante;
    
    cout << "Digite as coordenadas do ponto: ";
    scanf("%lf %lf", &x, &y);

    quadrante = (x > 0 && y > 0) ? 1 : (x < 0 && y > 0) ? 2 : (x < 0 && y < 0) ? 3 : (x > 0 && y < 0) ? 4 : 0;

    printf("O ponto (%.2lf, %.2lf) está %s.\n", x, y, (quadrante == 0) ? "sobre um dos eixos" : (quadrante == 1) ? "no primeiro quadrante" : (quadrante == 2) ? "no segundo quadrante" : (quadrante == 3) ? "no terceiro quadrante" : "no quarto quadrante");
    
    return 0;
}