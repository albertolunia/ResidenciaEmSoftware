#include <iostream>
#include <vector>

using namespace std;

class ItemSet{
    private:
        vector<string> itens;
    public:
        ItemSet(){
            itens = vector<string>();
        }
        void inserir(string item){
            for(int i = 0; i < itens.size(); ++i){
                if(itens[i] == item){
                    cout << "Item já existe no conjunto" << endl;
                    return;
                }
            }
            itens.push_back(item);
        }
        void excluir(string item){
            for(int i = 0; i < itens.size(); ++i){
                if(itens[i] == item){
                    itens.erase(itens.begin() + i);
                    break;
                }
            }
        }
        void printItens(){
            cout << "Itens: ";
            for(int i = 0; i < itens.size(); ++i){
                cout << itens[i] << " ";
            }
            cout << endl;
        }
};

int main(){

    ItemSet itemSet;
    itemSet.inserir("item1");
    itemSet.inserir("item2");
    itemSet.inserir("item3");

    itemSet.printItens();

    itemSet.excluir("item2");

    itemSet.printItens();

    itemSet.inserir("item3");

    return 0;
}