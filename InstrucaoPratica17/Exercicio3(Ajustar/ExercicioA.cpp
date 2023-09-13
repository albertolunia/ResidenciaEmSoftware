/*Crie um sistema de cadastro de produtos em um supermercado. Cada grupo deve
projetar as classes Produto, Estoque e CarrinhoDeCompras. O Produto deve ter
atributos como nome, preço e código. O Estoque deve controlar a quantidade de cada
produto. O CarrinhoDeCompras deve permitir adicionar e remover produtos, calcular
o valor total e exibir o conteúdo.*/

#include <iostream>
#include <string>

using namespace std;

class Produto{
    private:
        string nome;
        double preco;
        int codigo;
    public:
        Produto(){
            nome = "";
            preco = 0;
            codigo = 0;
        }
        Produto(string nome, double preco, int codigo){
            this->nome = nome;
            this->preco = preco;
            this->codigo = codigo;
        }
        void setNome(string nome){
            this->nome = nome;
        }
        void setPreco(double preco){
            this->preco = preco;
        }
        void setCodigo(int codigo){
            this->codigo = codigo;
        }
        string getNome(){
            return nome;
        }
        double getPreco(){
            return preco;
        }
        int getCodigo(){
            return codigo;
        }
};

class Estoque{
    private:
        Produto produtos[100];
        int quantidade[100];
        int quantidadeProdutos;
    public:
        Estoque(){
            quantidadeProdutos = 0;
        }
        void adicionarProduto(Produto produto, int quantidade){
            produtos[quantidadeProdutos] = produto;
            this->quantidade[quantidadeProdutos] = quantidade;
            quantidadeProdutos++;
        }
        void removerProduto(int codigo){
            for(int i = 0; i < quantidadeProdutos; ++i){
                if(produtos[i].getCodigo() == codigo){
                    for(int j = i; j < quantidadeProdutos - 1; ++j){
                        produtos[j] = produtos[j+1];
                        quantidade[j] = quantidade[j+1];
                    }
                    quantidadeProdutos--;
                    break;
                }
            }
        }
        void exibirEstoque(){
            for(int i = 0; i < quantidadeProdutos; ++i){
                cout << "Produto: " << produtos[i].getNome() << endl;
                cout << "Preço: " << produtos[i].getPreco() << endl;
                cout << "Quantidade: " << quantidade[i] << endl;
                cout << endl;
            }
        }
};

class CarrinhoDeCompras{
    private:
        Produto produtos[100];
        int quantidade[100];
        int quantidadeProdutos;
    public:
        CarrinhoDeCompras(){
            quantidadeProdutos = 0;
        }
        void adicionarProduto(Produto produto, int quantidade){
            produtos[quantidadeProdutos] = produto;
            this->quantidade[quantidadeProdutos] = quantidade;
            quantidadeProdutos++;
        }
        void removerProduto(int codigo){
            for(int i = 0; i < quantidadeProdutos; ++i){
                if(produtos[i].getCodigo() == codigo){
                    for(int j = i; j < quantidadeProdutos - 1; ++j){
                        produtos[j] = produtos[j+1];
                        quantidade[j] = quantidade[j+1];
                    }
                    quantidadeProdutos--;
                    break;
                }
            }
        }
        void exibirCarrinho(){
            for(int i = 0; i < quantidadeProdutos; ++i){
                cout << "Produto: " << produtos[i].getNome() << endl;
                cout << "Preço: " << produtos[i].getPreco() << endl;
                cout << "Quantidade: " << quantidade[i] << endl;
                cout << endl;
            }
        }
        double calcularValorTotal(){
            double valorTotal = 0;
            for(int i = 0; i < quantidadeProdutos; ++i){
                valorTotal += produtos[i].getPreco() * quantidade[i];
            }
            return valorTotal;
        }
};

int main(){

    Produto p1("Maçã", 2.5);
    Produto p2("Arroz", 10.0);
    Produto p3("Leite", 4.0);
    CarrinhoDeCompras carrinho;
    carrinho.adicionarProduto(p1, 3);
    carrinho.adicionarProduto(p2, 2);
    carrinho.adicionarProduto(p3, 1);
    double valorTotal = carrinho.calcularValorTotal();
    cout << "Valor total da compra: " << valorTotal << endl;

    carrinho.removerProduto(p2, 1);
    valorTotal = carrinho.calcularValorTotal();
    cout << "Valor total após remoção: " << valorTotal << endl;

    carrinho.esvaziarCarrinho();
    valorTotal = carrinho.calcularValorTotal();
    cout << "Valor total após esvaziar o carrinho: " << valorTotal << endl;

    Produto p4("Chocolate", 3.0);
    carrinho.adicionarProduto(p4, 10); // Supondo estoque limitado a 5 unidades
    cout << "Quantidade de chocolates no carrinho: " << carrinho.getQuantidadeProduto(p4) << endl;

    carrinho.adicionarProduto(p1, 2);
    carrinho.adicionarProduto(p2, 3);
    carrinho.adicionarProduto(p3, 1);
    carrinho.adicionarProduto(p4, 2);
    carrinho.exibirCarrinho();

    return 0;
}