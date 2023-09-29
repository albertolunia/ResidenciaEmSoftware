#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class BancoDeDados{
public:
    static void salvarDados(vector<string> dados){
        ofstream arquivo_saida;
        arquivo_saida.open("exemplo2.txt", ios_base::out);

        if(arquivo_saida.is_open()){
            for(int i = 0; i < dados.size(); ++i){
                arquivo_saida << dados[i] << endl;
            }
            arquivo_saida.close();
        }
        else{
            cout << "Erro abrir o arquivo" << endl;
        }
    }

    static vector<string> recupererarDados(){
        vector<string> dados;
        ifstream arquivo_entrada;
        arquivo_entrada.open("exemplo.txt", ios_base::in);

        if(arquivo_entrada.is_open()){
            string linha;
            while(arquivo_entrada.eof() == false){
                getline(arquivo_entrada, linha);
                dados.push_back(linha);
            }
            arquivo_entrada.close();
        }
        else{
            cout << "Erro abrir o arquivo" << endl;
        }        
        return dados;
    }

};


int main(){
    
    vector<string> dados;
    vector<string> dados_recuperados;
    dados.push_back("item1");
    dados.push_back("item2");

    BancoDeDados::salvarDados(dados);

    dados_recuperados = BancoDeDados::recupererarDados();

    for(int i = 0; i < dados_recuperados.size(); ++i){
        cout << dados_recuperados[i] << endl;
    }

    return 0;
}