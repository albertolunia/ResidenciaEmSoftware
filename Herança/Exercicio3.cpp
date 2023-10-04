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
        string getTitulo(){
            return titulo;
        }
        string getAutor(){
            return autor;
        }
        int getNumCopiasDisponiveis(){
            return numCopiasDisponiveis;
        }
};

class Livro : public ItemBiblioteca{
    private:
        int numPaginas;
    public:
        Livro(string t, string a, int n, int p) : ItemBiblioteca(t, a, n){
            numPaginas = p;
        }
        void listarLivros(){
            cout << "\nTitulo: " << getTitulo() << endl;
            cout << "Autor: " << getAutor() << endl;
            cout << "Numero de paginas: " << numPaginas << endl;
            cout << "Numero de copias disponiveis: " << getNumCopiasDisponiveis() << endl;
        }
};

class DVD : ItemBiblioteca{
    private:
        int duracao;
    public:
        DVD(string t, string a, int n, int d) : ItemBiblioteca(t, a, n){
            duracao = d;
        }
        void listarDVDs(){
            cout << "\nTitulo: " << getTitulo() << endl;
            cout << "Autor: " << getAutor() << endl;
            cout << "Duracao: " << duracao << endl;
            cout << "Numero de copias disponiveis: " << getNumCopiasDisponiveis() << endl;
        }
};

int main(){
    Livro l("O Senhor dos Aneis", "J. R. R. Tolkien", 10, 1000);
    DVD d("O Senhor dos Aneis", "Peter Jackson", 10, 200);

    l.listarLivros();
    d.listarDVDs();

    return 0;
}