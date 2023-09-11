#include <iostream>

using namespace std;

float calc_serie(int N);

int main()
{
    int N;

    cout << "Digite o valor de N: ";
    cin >> N;

    cout << "S = " << calc_serie(N) << endl;

    return 0;
}

float calc_serie(int N)
{
    float S = 0;

    for(int i = 1; i <= N; i++)
    {
        S += i / (float)(N - i + 1);
    }

    return S;
}