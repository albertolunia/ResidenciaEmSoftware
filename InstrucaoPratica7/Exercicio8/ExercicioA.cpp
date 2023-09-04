#include <iostream>

using namespace std;

int main(){

    int altura;

    cout << "Digite a altura do padrao: ";

    cin >> altura;

    for(int i = 0; i < altura; i++){
        for(int j = 0; j < altura; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < altura; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < altura; i++){
        for(int j = 0; j < altura; j++){
            if(i == 0 || i == altura - 1 || j == 0 || j == altura - 1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}