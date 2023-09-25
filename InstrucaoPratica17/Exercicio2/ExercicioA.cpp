#include <iostream>
#include <cmath>

using namespace std;

class Ponto{
    private:
        double x;
        double y;
    public:
        Ponto(){
            x = 0;
            y = 0;
        }
        Ponto(double x, double y){
            this->x = x;
            this->y = y;
        }
        void setCoordenadas(double x, double y){
            this->x = x;
            this->y = y;
        }
        double getX(){
            return x;
        }
        double getY(){
            return y;
        }
        double calcularDistancia(){
            return sqrt(pow(x,2)+pow(y,2));
        }
};

int main(){
    Ponto p1(3,4);
    
    double distancia = p1.calcularDistancia();
    cout << "A distancia do ponto (3,4) até a oridem é aproximadamente: " << distancia << endl;


    Ponto p2(-2, 7);
    p2.setCoordenadas(1,1);
    distancia = p2.calcularDistancia();
    cout << "A distancia do ponto (1,1) até a oridem é aproximadamente: " << distancia << endl;

    Ponto p3(0, 3);
    Ponto p4(4, 0);
    double distancia_p3 = p3.calcularDistancia();
    double distancia_p4 = p4.calcularDistancia();
    cout << "A distancia do ponto (0,3) até a oridem é aproximadamente: " << distancia_p3 << endl;
    cout << "A distancia do ponto (4,0) até a oridem é aproximadamente: " << distancia_p4 << endl;

    Ponto pontos[3];
    pontos[0].setCoordenadas(2,2);
    pontos[1].setCoordenadas(-1,5);
    pontos[2].setCoordenadas(0,0);

    for(int i = 0; i < 3; ++i){
        double distancia = pontos[i].calcularDistancia();
        cout << "Distância do ponto " << i + 1 << " até a origem: " << distancia << endl;
    }

    Ponto p5;
    cout << "Coordenadas do ponto p5: (" << p5.getX() << ", " << p5.getY() << ")" << endl;
    p5.setCoordenadas(8, -3);
    cout << "Novas coordenadas do ponto p5: (" << p5.getX() << ", " << p5.getY() << ")" << endl;


    return 0;
}