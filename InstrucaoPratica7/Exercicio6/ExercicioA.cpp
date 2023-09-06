#include <iostream>

using namespace std;

int main(){

    int matricula, continuar;
    float nota1, nota2, nota3, media;

    cout << fixed;
    cout.precision(2);

    do{
        cout << "Digite a matricula do aluno: ";
        cin >> matricula;

        cout << "Digite a primeira nota do aluno: ";
        cin >> nota1;

        cout << "Digite a segunda nota do aluno: ";
        cin >> nota2;

        cout << "Digite a terceira nota do aluno: ";
        cin >> nota3;

        media = (nota1 + nota2 + nota3) / 3;

        cout << "MATRICULA\tNOTA1\tNOTA2\tNOTA3\tMEDIA" << endl;
        cout << "===========================================" << endl;
        cout << matricula << "\t" << nota1 << "\t" << nota2 << "\t" << nota3 << "\t" << media << endl;

        cout << "Deseja continuar? (1 - Sim, 0 - Nao): ";
        cin >> continuar;

    }while(continuar == 1);

    return 0;
}
