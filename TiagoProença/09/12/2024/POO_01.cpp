#include <iostream>
using namespace std;

// Definicao da Classe
class nome {
    // Declaracao de atributos ou metodos privados
    private:
    int valorPrivado;

    // Declaracao de atributos ou metodos publicos
    public:
    int valorPublico;

    void funcaoPublica() {
        cout << "Funcao publica" << endl;
    }
}; // Fim da classe 'nomeClasse', com o terminador ';'

int main() {
    // Criacao de um objeto da classe 'nomeClasse'
    nome objeto;
    nome objeto2;

    // Acesso aos atributos e metodos publicos
    objeto.valorPublico = 10;

    // Acesso as funcoes definidas na classe
    objeto.funcaoPublica();
    objeto2.funcaoPublica();
    
    return 0;
}