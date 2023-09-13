#include <iostream>

using namespace std;

int fatorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * fatorial(n - 1);
    }
}

int main(){

    int a,b,c;;

    cout << "Digite tres numeros: ";
    cin >> a >> b >> c;

    cout << "O fatorial de " << a << " eh " << fatorial(a) << endl;
    cout << "O fatorial de " << b << " eh " << fatorial(b) << endl;
    cout << "O fatorial de " << c << " eh " << fatorial(c) << endl;

    return 0;
}