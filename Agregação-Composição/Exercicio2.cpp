#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cidade{
    private:
        string nome;
        string estado;
    public:
        Cidade(string n, string e){
            nome = n;
            estado = e;
        }
};

class Estado{
    private:
        string nome;
        string sigla;
        vector<Cidade> cidades;
    public:
        Estado(string n, string s){
            nome = n;
            sigla = s;
        }
        void adicionarCidade(Cidade c){
            cidades.push_back(c);
        }
        string getNome(){
            return nome;
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
                Cidade c(nomeCidade, nomeEstado);
                e.adicionarCidade(c);
            }
        }
    }

    return 0;
}