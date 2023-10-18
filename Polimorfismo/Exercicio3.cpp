#include <iostream>
#include <vector>

using namespace std;

template <typename T>

class generica{
    private:
        vector<T> lista;
    public:
        generica(){
            lista = {};
        }
        void adicionar(T elemento){
            lista.push_back(elemento);
        }
        void remover(T elemento){
            for(T i: lista){
                if(i == elemento){
                    lista.erase(lista.begin());
                }
            }
        }
        void listar(){
            for(T i: lista){
                cout << i << endl;
            }
        }
};

int main(){
    generica<int> g;
    generica<string> s;
    generica<float> f;
    generica<double> d;

    g.adicionar(1);
    g.adicionar(2);
    g.listar();
    cout << endl;

    s.adicionar("a");
    s.adicionar("b");
    s.listar();
    cout << endl;

    f.adicionar(1.1);
    f.adicionar(2.2);
    f.listar();
    cout << endl;

    d.adicionar(1.123456789);
    d.adicionar(2.234567891);
    d.listar();
    cout << endl;

    return 0;
}