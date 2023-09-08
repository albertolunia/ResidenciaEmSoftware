/*Faça um programa para um supermercado para a consulta de preço de produtos. O
programa deverá armazenar de cada produto o seu código, seu nome e seu preço.
Ao utilizar o programa o usuário deve poder:
1. Inserir um novo produto
2. Excluir um produto cadastrado
3. Listar todos os produtos com seus respectivos códigos e preços
4. Consultar o preço de um produto através de seu código.
O código deve ser formado de uma string numérica de 13 caracteres
O nome deve ter um tamanho de no máximo 20 caracteres*/

#include <iostream>
#include <cstring>

using namespace std;

struct Produto
{
    char codigo[14];
    char nome[21];
    float preco;
};

void inserirProduto(Produto *produtos, int *n);

void excluirProduto(Produto *produtos, int *n);

void listarProdutos(Produto *produtos, int n);

void consultarPreco(Produto *produtos, int n);

int main()
{
    Produto produtos[100];
    int n = 0;
    int opcao;

    do
    {
        cout << "1. Inserir produto" << endl;
        cout << "2. Excluir produto" << endl;
        cout << "3. Listar produtos" << endl;
        cout << "4. Consultar preco" << endl;
        cout << "0. Sair" << endl;
        cout << "Digite a opcao: ";
        cin >> opcao;

        switch(opcao)
        {
            case 1:
                inserirProduto(produtos, &n);
                break;
            case 2:
                excluirProduto(produtos, &n);
                break;
            case 3:
                listarProdutos(produtos, n);
                break;
            case 4:
                consultarPreco(produtos, n);
                break;
            case 0:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    } while(opcao != 0);

    return 0;
}

void inserirProduto(Produto *produtos, int *n)
{
    cout << "Digite o codigo do produto: ";
    cin.ignore();
    cin.getline(produtos[*n].codigo, 14);

    cout << "Digite o nome do produto: ";
    cin.getline(produtos[*n].nome, 21);

    cout << "Digite o preco do produto: ";
    cin >> produtos[*n].preco;

    (*n)++;
}

void excluirProduto(Produto *produtos, int *n)
{
    char codigo[14];
    int i, j;

    cout << "Digite o codigo do produto: ";
    cin.ignore();
    cin.getline(codigo, 14);

    for(i = 0; i < *n; i++)
    {
        if(strcmp(codigo, produtos[i].codigo) == 0)
        {
            for(j = i; j < *n - 1; j++)
            {
                produtos[j] = produtos[j + 1];
            }

            (*n)--;
            break;
        }
    }

    if(i == *n)
    {
        cout << "Produto nao encontrado!" << endl;
    }
}

void listarProdutos(Produto *produtos, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        cout << "Produto " << i + 1 << endl;
        cout << "Codigo: " << produtos[i].codigo << endl;
        cout << "Nome: " << produtos[i].nome << endl;
        cout << "Preco: " << produtos[i].preco << endl;
    }
}

void consultarPreco(Produto *produtos, int n)
{
    char codigo[14];
    int i;

    cout << "Digite o codigo do produto: ";
    cin.ignore();
    cin.getline(codigo, 14);

    for(i = 0; i < n; i++)
    {
        if(strcmp(codigo, produtos[i].codigo) == 0)
        {
            cout << "Preco: " << produtos[i].preco << endl;
            break;
        }
    }

    if(i == n)
    {
        cout << "Produto nao encontrado!" << endl;
    }
}