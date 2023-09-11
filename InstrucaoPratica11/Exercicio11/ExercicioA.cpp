#include <iostream>

using namespace std;

void codifica(char *str, char *str_codificada);
void decodifica(char *str_codificada, char *str);

int main()
{
    char str[100], str_codificada[100];

    cout << "Digite uma string: ";
    cin.getline(str, 100);

    codifica(str, str_codificada);

    cout << "String codificada: " << str_codificada << endl;

    decodifica(str_codificada, str);

    cout << "String decodificada: " << str << endl;

    return 0;
}

void codifica(char *str, char *str_codificada)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == 'z')
        {
            str_codificada[i] = 'a';
        }
        else if(str[i] == 'Z')
        {
            str_codificada[i] = 'A';
        }
        else
        {
            str_codificada[i] = str[i] + 1;
        }
        i++;
    }
    str_codificada[i] = '\0';
}

void decodifica(char *str_codificada, char *str)
{
    int i = 0;

    while(str_codificada[i] != '\0')
    {
        if(str_codificada[i] == 'a')
        {
            str[i] = 'z';
        }
        else if(str_codificada[i] == 'A')
        {
            str[i] = 'Z';
        }
        else
        {
            str[i] = str_codificada[i] - 1;
        }
        i++;
    }
    str[i] = '\0';
}