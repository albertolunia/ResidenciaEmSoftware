#include <iostream>

using namespace std;

class Animal{
    private:
        string nome;
        int idade;
    public:
        virtual void fazerSom();
};

class Cachorro : Animal{
    public:
        void fazerSom(){
            cout << "Au au" << endl;
        }
};

int main(){
    Cachorro c;
    Animal a;
    c.fazerSom();
    a.fazerSom();
}