#include <iostream>
#include <string>

using namespace std;

int main()
{
    string data;
    int dia, mes, ano;

    cout << "Digite uma data no formato dd/mm/aaaa: ";
    cin >> data;

    dia = stoi(data.substr(0, 2));
    mes = stoi(data.substr(3, 2));
    ano = stoi(data.substr(6, 4));


    cout << "Dia: " << dia << endl;
    cout << "Mes: " << mes << endl;
    cout << "Ano: " << ano << endl;

    bool dataValida = true;

    if (ano < 1 || mes < 1 || mes > 12 || dia < 1) {
        dataValida = false;
    } else {
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            if (dia > 30) {
                dataValida = false;
            }
        } else if (mes == 2) {
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                if (dia > 29) {
                    dataValida = false;
                }
            } else {
                if (dia > 28) {
                    dataValida = false;
                }
            }
        } else {
            if (dia > 31) {
                dataValida = false;
            }
        }
    }
    
    if (!dataValida) {
        cout << "Data inválida" << endl;
    } else {
        cout << "Data válida" << endl;
        switch (mes)
        {
        case 1:
            cout << dia << " de janeiro de " << ano << endl;
            break;
        case 2:
            cout << dia << " de fevereiro de " << ano << endl;
            break;
        case 3:
            cout << dia << " de março de " << ano << endl;
            break;
        case 4:
            cout << dia << " de abril de " << ano << endl;
            break;
        case 5: 
            cout << dia << " de maio de " << ano << endl;
            break;
        case 6:
            cout << dia << " de junho de " << ano << endl;
            break;
        case 7:
            cout << dia << " de julho de " << ano << endl;
            break;
        case 8:
            cout << dia << " de agosto de " << ano << endl;
            break;
        case 9:
            cout << dia << " de setembro de " << ano << endl;
            break;
        case 10:
            cout << dia << " de outubro de " << ano << endl;
            break;
        case 11:
            cout << dia << " de novembro de " << ano << endl;
            break;
        case 12:
            cout << dia << " de dezembro de " << ano << endl;
            break;

        default:
            break;
        }
    }
    return 0;
}