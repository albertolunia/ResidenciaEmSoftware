#include <iostream>

using namespace std;

class Forma{
    public:
        virtual void calcularArea() = 0;
};


class Retangulo : Forma{
    private:
        int base;
        int altura;
    public:
        Retangulo(int b, int a) : base(b), altura(a) {}
        void calcularArea(){
            cout << "Calculando area do retangulo" << endl;
            cout << "Area: " << base * altura << endl;
        }
};


class Circulo : Forma{
    private:
        int raio;
    public:
        Circulo(int r) : raio(r) {}
        void calcularArea(){
            cout << "Calculando area do circulo" << endl;
            cout << "Area: " << 3.14 * raio * raio << endl;
        }
};

int main(){
    Retangulo r(10, 20);
    Circulo c(10);
    r.calcularArea();
    c.calcularArea();
}