#include <iostream>
#include <cstring>

#define MAX 300

using namespace std;

struct Produto
{
    char codigo[14];
    char nome[21];
    float preco;
};

void inserirProduto(Produto *produtos, char codigo[14], char nome[21], float preco);

void excluirProduto(Produto *produtos);

void listarProdutos(Produto *produtos);

void consultarPreco(Produto *produtos);

int verificarCodigo(Produto *produtos, char codigo[14]);

int verificarNome(Produto *produtos, char nome[21]);

int main()
{
    Produto produtos[MAX];
    int opcao;
    char codigo[14], nome[21];
    float preco;

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
                cout << "Digite o codigo do produto: ";
                cin.ignore();
                cin.getline(codigo, 14);
                verificarCodigo(produtos, codigo);
                
                cout << "Digite o nome do produto: ";
                cin.getline(nome, 21);
                verificarNome(produtos, nome);

                cout << "Digite o preco do produto: ";
                cin >> preco;

                if(verificarCodigo(produtos, codigo) == 0 || verificarNome(produtos, nome) == 0)
                {
                    cout << "\nNão foi possivel cadastrar, produto ja encontra no sistema!\n" << endl;
                    break;
                }
                else
                {
                    inserirProduto(produtos, codigo, nome, preco);
                    cout << "\nProduto cadastrado com sucesso!\n" << endl;
                }
                break;
            case 2:
                excluirProduto(produtos);
                break;
            case 3:
                listarProdutos(produtos);
                break;
            case 4:
                consultarPreco(produtos);
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

void inserirProduto(Produto *produtos, char codigo[14], char nome[21], float preco)
{
    int i;

    for(i = 0; i < MAX; i++)
    {
        if(produtos[i].codigo[0] == '\0')
        {
            strcpy(produtos[i].codigo, codigo);
            strcpy(produtos[i].nome, nome);
            produtos[i].preco = preco;
            break;
        }
    }

    if(i == MAX)
    {
        cout << "Nao foi possivel cadastrar, limite de produtos atingido!" << endl;
    }
}

void excluirProduto(Produto *produtos)
{
    char codigo[14];
    int i, j;

    cout << "Digite o codigo do produto: ";
    cin.ignore();
    cin.getline(codigo, 14);

    for(i = 0; i < MAX; i++)
    {
        if(strcmp(codigo, produtos[i].codigo) == 0)
        {
            for(j = i; j < MAX - 1; j++)
            {
                produtos[j] = produtos[j + 1];
            }

            cout << "\nProduto excluido com sucesso!\n" << endl;

            break;
        }
    }

    if(i == MAX)
    {
        cout << "Produto nao encontrado!" << endl;
    }
}

void listarProdutos(Produto *produtos)
{
    int i = 0;

    cout << fixed;
    cout.precision(2);

    while (produtos[i].codigo[0] != '\0')
    {
        cout << "\nCodigo: " << produtos[i].codigo << endl;
        cout << "Nome: " << produtos[i].nome << endl;
        cout << "Preco: " << produtos[i].preco << endl;
        cout << endl;
        i++;
    }
    
}

void consultarPreco(Produto *produtos)
{
    char codigo[14];
    int i;

    cout << "Digite o codigo do produto: ";
    cin.ignore();
    cin.getline(codigo, 14);

    for(i = 0; i < MAX; i++)
    {
        if(strcmp(codigo, produtos[i].codigo) == 0)
        {
            cout << "Preco: " << produtos[i].preco << endl;
            break;
        }
    }

    if(i == MAX)
    {
        cout << "Produto nao encontrado!" << endl;
    }
}

int verificarCodigo(Produto *produtos, char codigo[14])
{
    int i;

    for(i = 0; i < MAX; i++)
    {
        if(strcmp(codigo, produtos[i].codigo) == 0)
        {
            return 0;
        }
    }

    return 1;
}

int verificarNome(Produto *produtos, char nome[21])
{
    int i;

    for(i = 0; i < MAX; i++)
    {
        if(strcmp(nome, produtos[i].nome) == 0)
        {
            return 0;
        }
    }

    return 1;
}