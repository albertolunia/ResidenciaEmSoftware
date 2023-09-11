#include <iostream>

using namespace std;

int insere_meio(int *vetor, int qtde, int elemento){
    int i;
    int *vetor2 = new int[qtde+1];
    
    for(i=0; i<qtde; i++){
        vetor2[i] = vetor[i];
    }

    for (i = 0; i < qtde; i++){
        if(i == qtde/2){
            vetor2[i] = elemento;
        }
    }

    for (i = qtde/2; i < qtde; i++)
    {
        vetor2[i+1] = vetor[i];
    }

    for(i=0; i<qtde+1; i++){
        cout << vetor2[i] << " ";
    }
    cout << endl;
    return 0;
}

int main(){
    int vetor[6] = {1,2,3,4,5,6};
    int qtde = 6;
    int elemento = 100;
    insere_meio(vetor, qtde, elemento);
    return 0;
}