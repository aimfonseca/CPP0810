#include <iostream>
#include <string>

using namespace std;

// Definicao da Classe
class Utilizador {

    // Declaracao de atributos ou metodos privados
    private:
    string nome = "Tiago";
    string palavraPasse = "123tiagus123";

    public:
        void set(string nome, string palavraPasse) {
           this -> nome = nome;
           this -> palavraPasse = palavraPasse;
        }

        void get (){
            
            cout << "O nome e' " << nome << " e a palavra-passe e' " << palavraPasse << endl;
        }
}; // Fim da classe, com o terminador ';'

int main() {

    // Criacao de um objeto da classe 
    Utilizador novo_Util;
    novo_Util.get();
    novo_Util.set("Alexandre", "789alex789");
    novo_Util.get();

    return 0;
}