#include <iostream>
#include <string>

using namespace std;

// Definicao da Classe
class Estudante {

    // Declaracao de atributos ou metodos publicos
    public:
    string nome;
    int idade;

    void mostrar() {
        cout << "O meu nome e' " << nome << " e tenho " << idade << " anos." << endl;
    }
}; // Fim da classe 'nomeClasse', com o terminador ';'

int main() {

    // Criacao de um objeto da classe 'nomeClasse'
    Estudante  novoEstudante;
   

    // Acesso aos atributos e metodos publicos
    cin >> novoEstudante.nome >>  novoEstudante.idade;

    // Acesso as funcoes definidas na classe
    novoEstudante.mostrar();
    
    return 0;
}