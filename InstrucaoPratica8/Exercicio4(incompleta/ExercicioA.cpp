#include <iostream>

using namespace std;

int main()
{
    int matriz[640][480], histograma[256] = {0};
    int i, j;
    int valor;

    for(i=0; i<640; i++)
    {
        for(j=0; j<480; j++)
        {
            valor = rand()%256;
            histograma[valor]++;
        }
    }

    for (i = 0; i < 256; i++)
    {
        cout << "Valor " << i << ": " << histograma[i] << " vezes" << endl;
    }


    return 0;
}