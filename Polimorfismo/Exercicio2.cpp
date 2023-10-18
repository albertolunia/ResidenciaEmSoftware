#include <iostream>

using namespace std;

class Desenhavel{
public:
    virtual void desenhar() = 0;
};

class Circulo : public Desenhavel{
public:
    void desenhar(){
        cout << "Desenhando um circulo" << endl;
    }
};

class Retangulo : public Desenhavel{
public:
    void desenhar(){
        cout << "Desenhando um retangulo" << endl;
    }
};

class Triangulo : public Desenhavel{
public:
    void desenhar(){
        cout << "Desenhando um triangulo" << endl;
    }
};

int main(){
    Circulo c;
    Retangulo r;
    Triangulo t;

    Desenhavel *d[3];
    d[0] = &c;
    d[1] = &r;
    d[2] = &t;

    for(int i = 0; i < 3; i++){
        d[i]->desenhar();
    }

    return 0;
}