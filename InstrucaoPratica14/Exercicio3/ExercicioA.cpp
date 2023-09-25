#include <iostream>
#include <cmath>

using namespace std;

struct Ponto
{
    int x;
    int y;
};

int distanciaEntreDoisPontos(Ponto p1, Ponto p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

void entrada(Ponto &p1, Ponto &p2)
{
    cout << "Digite as coordenadas do primeiro ponto: ";
    cin >> p1.x >> p1.y;
    cout << "Digite as coordenadas do segundo ponto: ";
    cin >> p2.x >> p2.y;
}

void saida(Ponto p1, Ponto p2, int distancia)
{
    cout << "A distancia entre os pontos (" << p1.x << ", " << p1.y << ") e (" << p2.x << ", " << p2.y << ") eh " << distancia << endl;
}

int main()
{

    Ponto p1, p2;
    entrada(p1, p2);
    int distancia = distanciaEntreDoisPontos(p1, p2);
    saida(p1, p2, distancia);

    return 0;
}