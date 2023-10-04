#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Estado{
    private:
        string nome;
        string sigla;
    public:
        Estado(string n, string s){
            nome = n;
            sigla = s;
        }
        string getNome(){
            return nome;
        }
        string getSigla(){
            return sigla;
        }
};

class Cidade{
    private:
        string nome;
        Estado *estado;
    public:
        Cidade(string n, Estado e){
            nome = n;
            estado = &e;
        }
};

int main(){
    vector<Estado> vetorEstado;
    vector<Cidade> vetorCidade;
    string nomeEstado, siglaEstado, nomeCidade;

    while(true){
        cout << "Digite o nome do estado: ";
        getline(cin, nomeEstado);
        if(nomeEstado == "0"){
            break;
        }
        cout << "Digite a sigla do estado: ";
        getline(cin, siglaEstado);
        
        Estado e(nomeEstado, siglaEstado);
        vetorEstado.push_back(e);
    }

    while(true){
        cout << "Digite o nome da cidade: ";
        getline(cin, nomeCidade);
        if(nomeCidade == "0"){
            break;
        }
        cout << "Digite o nome do estado: ";
        getline(cin, nomeEstado);

        for(Estado e: vetorEstado){
            if(e.getNome() == nomeEstado){
                Cidade c(nomeCidade, e);
                vetorCidade.push_back(c);
            }
        }
    }

    return 0;
}