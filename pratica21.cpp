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

};

int main() {
    // Criando livros
    

    // Criando usuários


    // Emprestando livros

    // Listando livros emprestados por usuários
    

    return 0;
}
