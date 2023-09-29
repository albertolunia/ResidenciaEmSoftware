#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


class Ponto{
    float x,y,z;

    public:

    float get_x(){
        return x;
    }
    float get_y(){
        return y;
    }
    float get_z(){
        return z;
    }
    void le_ponto(){
        cout << "Digite as coordenadas do ponto: ";
        cin >> x >> y >> z;
    }
    string escreve_ponto(){
        return to_string(x) + "," + to_string(y) + "," + to_string(z);
    }
    float distancia(Ponto p1){
        return sqrt(pow(x-p1.get_x(),2) + pow(y - p1.get_y(),2) + pow(z - p1.get_z(),2));
    }
};

class Poligono{
    vector<Ponto> pontos;

    public:
    void le_pontos(){
        cout << "Criando um poligono!" << endl;
        char sn;
        do
        {
            Ponto p;
            p.le_ponto();
            pontos.push_back(p);
            cout << "Deseja inserir mais pontos (s/n)? ";
            cin >> sn;
        } while (sn!='n');   
    }
    void lista_pontos(){
        cout << "As coordenadas digitadas foram" << endl;
        for(Ponto p: pontos)
            cout << "(" << p.escreve_ponto() << ")" << endl;
    }
    float perimetro(){
        float per = 0;
        vector<Ponto>::iterator it2;
        Ponto p1;
        Ponto p2;
        for(auto it = pontos.begin(); it != pontos.end()-1; it++){
            it2 = it;
            advance(it2, 1);
            p1 = *it;
            p2 = *it2;
            per += p1.distancia(p2);
        }
        it2 = pontos.begin();
        p1 = *it2;
        per += p1.distancia(p2);
        return per;
    }

    bool operator==(Poligono p){
        if(pontos.size() != p.pontos.size())
            return false;
        for(int i = 0; i < pontos.size(); i++){
            if(pontos[i].get_x() != p.pontos[i].get_x() || pontos[i].get_y() != p.pontos[i].get_y() || pontos[i].get_z() != p.pontos[i].get_z())
                return false;
        }
        return true;
    }

    Poligono operator=(Poligono p){
        pontos = p.pontos;
        return *this;
    }
};

int main(){
    Poligono poli1, poli2, poli3;

    poli1.le_pontos();

    poli2.le_pontos();

    if(poli1 == poli2){
        cout << "\nOs poligonos são iguais" << endl;
    }
    else{
        cout << "\nOs poligonos são diferentes" << endl;
    }

    poli3 = poli1;

    cout << "\nTestando se copiou" << endl;

    poli3.lista_pontos();
    cout << endl;
    poli1.lista_pontos();
}