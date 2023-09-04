// Corrigir formatação da sainda

#include <iostream>

using namespace std;

int main(){

    int matricula, continuar;
    float nota1, nota2, nota3, media;

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

        cout << "MATRICULA" << endl;
        cout << "NOTA1" << endl;
        cout << "NOTA2" << endl;
        cout << "NOTA3" << endl;
        cout << "MEDIA" << endl;
        cout << "===========================================" << endl;
        cout << matricula << endl;
        cout << nota1 << endl;
        cout << nota2 << endl;
        cout << nota3 << endl;
        cout << media << endl;

        cout << "Deseja continuar? (1 - Sim, 0 - Nao): ";
        cin >> continuar;

    }while(continuar == 1);

    return 0;
}
