#include <iostream>

using namespace std;

struct Empregado
{
    char nome[100];
    char sobrenome[100];
    int anoNascimento;
    int RG;
    int anoAdmissao;
    float salario;
};

void Reajusta_dez_porcento(Empregado *empregados, int n);

int main()
{
    Empregado empregados[50];
    int n;

    cout << "Digite a quantidade de empregados: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Digite o nome do empregado " << i + 1 << ": ";
        cin.ignore();
        cin.getline(empregados[i].nome, 100);

        cout << "Digite o sobrenome do empregado " << i + 1 << ": ";
        cin.getline(empregados[i].sobrenome, 100);

        cout << "Digite o ano de nascimento do empregado " << i + 1 << ": ";
        cin >> empregados[i].anoNascimento;

        cout << "Digite o RG do empregado " << i + 1 << ": ";
        cin >> empregados[i].RG;

        cout << "Digite o ano de admissao do empregado " << i + 1 << ": ";
        cin >> empregados[i].anoAdmissao;

        cout << "Digite o salario do empregado " << i + 1 << ": ";
        cin >> empregados[i].salario;
    }

    Reajusta_dez_porcento(empregados, n);

    for(int i = 0; i < n; i++)
    {
        cout << "Empregado " << i + 1 << endl;
        cout << "Nome: " << empregados[i].nome << endl;
        cout << "Sobrenome: " << empregados[i].sobrenome << endl;
        cout << "Ano de nascimento: " << empregados[i].anoNascimento << endl;
        cout << "RG: " << empregados[i].RG << endl;
        cout << "Ano de admissao: " << empregados[i].anoAdmissao << endl;
        cout << "Salario: " << empregados[i].salario << endl;
    }

    return 0;
}

void Reajusta_dez_porcento(Empregado *empregados, int n)
{
    for(int i = 0; i < n; i++)
    {
        empregados[i].salario *= 1.1;
    }
}