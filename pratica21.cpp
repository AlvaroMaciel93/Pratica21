#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Livro {
    private:
        string titulo;
        string autor;
        int numCopias;
    public:
        Livro(const string& titulo, const string& autor, int numCopias) :
            titulo(titulo), autor(autor), numCopias(numCopias) {
        }

        const string& getTitulo() const {
            return titulo;
        }

        const string& getAutor() const {
            return autor;
        }

        int getNumCopias() const {
            return numCopias;
        }

        void emprestar() {
            if (numCopias > 0) {
                numCopias--;
            }
        }

        void devolver() {
            numCopias++;
        }
};

class Usuario {
    private:
        string nome;
        vector<Livro*> livrosEmprestados;
        vector<time_t> tempoEmprestimo;
    public:
        Usuario(const string& nome) : nome(nome) {
        }

        const string& getNome() const {
            return nome;
        }
        void emprestarLivro(Livro& livro) {
            if (livro.getNumCopias() > 0) {
                livro.emprestar();
                livrosEmprestados.push_back(&livro);
                tempoEmprestimo.push_back(time(nullptr));
            }
        }

        // Devolver Livro

        // listar livro emprestado

};

int main() {

    // Criando livros
    Livro livro1("As Viagens de Gulliver", "Jonathan Swift", 5);
    Livro livro2("O Pequeno Príncipe", "Antoine de Saint", 3);
    Livro livro3("1984", "George Orwell", 2);

    // Criando usuários
    Usuario usuario1("Renato Mendes");
    Usuario usuario2("Maria Clara Diniz");

    // Emprestando livros
    usuario1.emprestarLivro(livro1);
    usuario2.emprestarLivro(livro1);
    usuario2.emprestarLivro(livro2);

    // Listando livros emprestados por usuários
    usuario1.listarLivrosEmprestados();
    usuario2.listarLivrosEmprestados();

    

    return 0;
}
