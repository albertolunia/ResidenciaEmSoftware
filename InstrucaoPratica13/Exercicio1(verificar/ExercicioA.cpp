#include <iostream>
#include <cstring>

using namespace std;

struct Passageiro
{
    int poltrona;
    int dia;
    int mes;
    int ano;
    int hora;
    int minuto;
    int segundo;
    char cpf[12];
    char nome[100];
    int idade;
};

struct Viagem
{
    int dia;
    int mes;
    int ano;
    int hora;
    int minuto;
    int segundo;
    Passageiro passageiros[40];
};

struct Empresa
{
    Viagem viagens[10];
};

void inicializarEmpresa(Empresa *empresa);

void venderPassagem(Empresa *empresa, int viagem, int poltrona, int dia, int mes, int ano, int hora, int minuto, int segundo, char *cpf, char *nome, int idade);

float totalArrecadadoViagem(Empresa *empresa, int viagem);

float totalArrecadadoMes(Empresa *empresa, int mes);

char *nomePassageiro(Empresa *empresa, int viagem, int poltrona);

void horarioMaisRentavel(Empresa *empresa, int *hora, int *minuto, int *segundo);

float mediaIdadePassageiros(Empresa *empresa);

int main()
{
    Empresa empresa;
    int opcao, viagem, poltrona, dia, mes, ano, hora, minuto, segundo, idade;
    char cpf[12], nome[100];
    float total;
    int h, m, s;

    inicializarEmpresa(&empresa);

    do
    {
        cout << "1. Vender passagem" << endl;
        cout << "2. Total arrecadado para uma determinada viagem" << endl;
        cout << "3. Total arrecadado em um determinado mes" << endl;
        cout << "4. Nome do passageiro de uma determinada poltrona" << endl;
        cout << "5. Horario de viagem mais rentavel" << endl;
        cout << "6. Media de idade dos passageiros" << endl;
        cout << "0. Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch(opcao)
        {
            case 1:
                cout << "Viagem: ";
                cin >> viagem;
                cout << "Poltrona: ";
                cin >> poltrona;
                cout << "Dia: ";
                cin >> dia;
                cout << "Mes: ";
                cin >> mes;
                cout << "Ano: ";
                cin >> ano;
                cout << "Hora: ";
                cin >> hora;
                cout << "Minuto: ";
                cin >> minuto;
                cout << "Segundo: ";
                cin >> segundo;
                cout << "CPF: ";
                cin >> cpf;
                cout << "Nome: ";
                cin >> nome;
                cout << "Idade: ";
                cin >> idade;

                venderPassagem(&empresa, viagem, poltrona, dia, mes, ano, hora, minuto, segundo, cpf, nome, idade);
                break;
            case 2:
                cout << "Viagem: ";
                cin >> viagem;

                total = totalArrecadadoViagem(&empresa, viagem);

                cout << "Total arrecadado: " << total << endl;
                break;
            case 3:
                cout << "Mes: ";
                cin >> mes;

                total = totalArrecadadoMes(&empresa, mes);

                cout << "Total arrecadado: " << total << endl;
                break;
            case 4:
                cout << "Viagem: ";
                cin >> viagem;
                cout << "Poltrona: ";
                cin >> poltrona;

                cout << "Nome: " << nomePassageiro(&empresa, viagem, poltrona) << endl;
                break;
            case 5:
                horarioMaisRentavel(&empresa, &h, &m, &s);

                cout << "Horario mais rentavel: " << h << ":" << m << ":" << s << endl;
                break;
            case 6:
                cout << "Media de idade dos passageiros: " << mediaIdadePassageiros(&empresa) << endl;
                break;
            case 0:
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    }while(opcao != 0);

    return 0;

}

void inicializarEmpresa(Empresa *empresa)
{
    int i, j;

    for(i = 0; i < 10; i++)
    {
        empresa->viagens[i].dia = 0;
        empresa->viagens[i].mes = 0;
        empresa->viagens[i].ano = 0;
        empresa->viagens[i].hora = 0;
        empresa->viagens[i].minuto = 0;
        empresa->viagens[i].segundo = 0;

        for(j = 0; j < 40; j++)
        {
            empresa->viagens[i].passageiros[j].poltrona = 0;
            empresa->viagens[i].passageiros[j].dia = 0;
            empresa->viagens[i].passageiros[j].mes = 0;
            empresa->viagens[i].passageiros[j].ano = 0;
            empresa->viagens[i].passageiros[j].hora = 0;
            empresa->viagens[i].passageiros[j].minuto = 0;
            empresa->viagens[i].passageiros[j].segundo = 0;
            empresa->viagens[i].passageiros[j].cpf[0] = '\0';
            empresa->viagens[i].passageiros[j].nome[0] = '\0';
            empresa->viagens[i].passageiros[j].idade = 0;
        }
    }
}

void venderPassagem(Empresa *empresa, int viagem, int poltrona, int dia, int mes, int ano, int hora, int minuto, int segundo, char *cpf, char *nome, int idade)
{
    empresa->viagens[viagem].passageiros[poltrona].poltrona = poltrona;
    empresa->viagens[viagem].passageiros[poltrona].dia = dia;
    empresa->viagens[viagem].passageiros[poltrona].mes = mes;
    empresa->viagens[viagem].passageiros[poltrona].ano = ano;
    empresa->viagens[viagem].passageiros[poltrona].hora = hora;
    empresa->viagens[viagem].passageiros[poltrona].minuto = minuto;
    empresa->viagens[viagem].passageiros[poltrona].segundo = segundo;
    strcpy(empresa->viagens[viagem].passageiros[poltrona].cpf, cpf);
    strcpy(empresa->viagens[viagem].passageiros[poltrona].nome, nome);
    empresa->viagens[viagem].passageiros[poltrona].idade = idade;
}

float totalArrecadadoViagem(Empresa *empresa, int viagem)
{
    int i;
    float total = 0;

    for(i = 0; i < 40; i++)
    {
        if(empresa->viagens[viagem].passageiros[i].poltrona != 0)
        {
            total += 80;
        }
    }

    return total;
}

float totalArrecadadoMes(Empresa *empresa, int mes)
{
    int i, j;
    float total = 0;

    for(i = 0; i < 10; i++)
    {
        if(empresa->viagens[i].mes == mes)
        {
            for(j = 0; j < 40; j++)
            {
                if(empresa->viagens[i].passageiros[j].poltrona != 0)
                {
                    total += 80;
                }
            }
        }
    }

    return total;
}

char *nomePassageiro(Empresa *empresa, int viagem, int poltrona)
{
    return empresa->viagens[viagem].passageiros[poltrona].nome;
}

void horarioMaisRentavel(Empresa *empresa, int *hora, int *minuto, int *segundo)
{
    int i, j;
    float total, maior_total = 0;

    for(i = 0; i < 10; i++)
    {
        total = 0;
        for(j = 0; j < 40; j++)
        {
            if(empresa->viagens[i].passageiros[j].poltrona != 0)
            {
                total += 80;
            }
        }
        if(total > maior_total)
        {
            maior_total = total;
            *hora = empresa->viagens[i].hora;
            *minuto = empresa->viagens[i].minuto;
            *segundo = empresa->viagens[i].segundo;
        }
    }
}

float mediaIdadePassageiros(Empresa *empresa)
{
    int i, j, total_passageiros = 0, total_idade = 0;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 40; j++)
        {
            if(empresa->viagens[i].passageiros[j].poltrona != 0)
            {
                total_passageiros++;
                total_idade += empresa->viagens[i].passageiros[j].idade;
            }
        }
    }

    return (float)total_idade / total_passageiros;
}