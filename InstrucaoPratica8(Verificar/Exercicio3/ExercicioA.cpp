/*Implemente uma aplicação em C que:
a. Leia do teclado uma string no formato dd/mm/aaaa, ao alguma
variação desse formato (Ex. 5/12/2022, 05/02/23, 07/5/2024), e
imprima na tela por separado dia, mês e ano.
b. Modifique o exemplo anterior de forma a verificar se a data fornecida
é uma data válida (Ex. 31/02/1990 e 24/15/2002 não são datas
válidas);
c. Modifique a aplicação de forma que, se for uma data válida, imprima
a data por extenso (Ex. para 5/12/2022 imprimir 5 de dezembro de
2022)*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char data[11];
    int dia, mes, ano, i, j, k, l, m, n, o, p, q, r, s, t, u, v;

    cout << "Insira uma data no formato dd/mm/aaaa: ";
    cin >> data;

    dia = 0;
    mes = 0;
    ano = 0;

    for (i = 0; i < 10; i++)
    {
        if (i < 2)
        {
            dia += (data[i] - '0') * pow(10, 1 - i);
        }
        else if (i < 5)
        {
            mes += (data[i] - '0') * pow(10, 4 - i);
        }
        else
        {
            ano += (data[i] - '0') * pow(10, 9 - i);
        }
    }

    if (dia > 31 || dia < 1 || mes > 12 || mes < 1 || ano < 1)
    {
        cout << "Data invalida." << endl;
    }
    else
    {
        cout << "Data valida." << endl;
        cout << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Ano: " << ano << endl;

        cout << "Data por extenso: ";

        if (dia < 10)
        {
            cout << "0";
        }

        cout << dia << " de ";

        switch (mes)
        {
        case 1:
            cout << "janeiro";
            break;
        case 2:
            cout << "fevereiro";
            break;
        case 3:
            cout << "marco";
            break;
        case 4:
            cout << "abril";
            break;
        case 5:
            cout << "maio";
            break;
        case 6:
            cout << "junho";
            break;
        case 7:
            cout << "julho";
            break;
        case 8:
            cout << "agosto";
            break;
        case 9:
            cout << "setembro";
            break;
        case 10:
            cout << "outubro";
            break;
        case 11:
            cout << "novembro";
            break;
        case 12:
            cout << "dezembro";
            break;
        }

        cout << " de " << ano << "." << endl;
    }

    return 0;

}