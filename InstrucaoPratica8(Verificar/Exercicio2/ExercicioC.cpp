/*A seguinte expressão em C gera valores aleatórios de ponto flutuante entre 0
e 10: ((float)rand()/RAND_MAX)*10. Utilizando esta expressão implemente
uma aplicação que:
a. Simule as notas de uma turma de 15 alunos em uma avaliação e
guarde num array;
b. Simule as notas da mesma turma numa segunda avaliação e guarde
em um segundo array;
c. Compare as notas de cada aluno na segunda avaliação, em relação à
primeira, e imprima na tela as mensagens “Melhorou”, “Piorou” ou
“Manteve a nota” de acordo com o desempenho de cada aluno;
d. Preencha um um terceiro array com a média de cada aluno nas duas
avaliações.*/

#include <iostream>

using namespace std;

int main()
{
    float array1[15], array2[15], array3[15];
    int i;

    for (i = 0; i < 15; i++)
    {
        array1[i] = ((float)rand() / RAND_MAX) * 10;
        array2[i] = ((float)rand() / RAND_MAX) * 10;
    }

    for (i = 0; i < 15; i++)
    {
        array3[i] = (array1[i] + array2[i]) / 2;
    }

    for (i = 0; i < 15; i++)
    {
        if (array2[i] > array1[i])
        {
            cout << "O aluno " << i + 1 << " melhorou." << endl;
        }
        else if (array2[i] < array1[i])
        {
            cout << "O aluno " << i + 1 << " piorou." << endl;
        }
        else
        {
            cout << "O aluno " << i + 1 << " manteve a nota." << endl;
        }
    }

    return 0;
}