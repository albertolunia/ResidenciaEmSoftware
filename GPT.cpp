#include <iostream>
#include <vector>

using namespace std;

class Aluno {
    private:
        string nome;
        int matricula;
    public:
        Aluno(string nome, int matricula) {
            this->nome = nome;
            this->matricula = matricula;
        }
        void exibirDetalhes() {
            cout << "Nome: " << nome << endl;
            cout << "Matricula: " << matricula << endl;
        }
};

class Turma{
    private:
        vector<Aluno> alunos;
    public:
        void adicionarAluno(Aluno aluno) {
            alunos.push_back(aluno);
        }
        void listarAlunos() {
            for (int i = 0; i < alunos.size(); i++) {
                alunos[i].exibirDetalhes();
            }
        }
};

int main(){

    Turma turma;
    Aluno aluno1("Joao", 123);
    Aluno aluno2("Maria", 456);
    Aluno aluno3("Jose", 789);

    turma.adicionarAluno(aluno1);
    turma.adicionarAluno(aluno2);
    turma.adicionarAluno(aluno3);

    turma.listarAlunos();

    return 0;
}