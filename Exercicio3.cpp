#include <iostream>

using namespace std;

class ItemBiblioteca{
    private:
        string titulo;
        string autor;
        int numCopiasDisponiveis;
    public:
        ItemBiblioteca(string t, string a, int n){
            titulo = t;
            autor = a;
            numCopiasDisponiveis = n;
        }
};

class Livro : ItemBiblioteca{
    private:
        int numPaginas;
    public:
        Livro(string t, string a, int n, int p) : ItemBiblioteca(t, a, n){
            numPaginas = p;
        }
};

class DVD : ItemBiblioteca{
    private:
        int duracao;
    public:
        DVD(string t, string a, int n, int d) : ItemBiblioteca(t, a, n){
            duracao = d;
        }
};

int main(){
    Livro l("O Senhor dos Aneis", "J. R. R. Tolkien", 10, 1000);
    DVD d("O Senhor dos Aneis", "Peter Jackson", 10, 200);

    return 0;
}