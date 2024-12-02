#include <iostream>  // Biblioteca para entrada e saída
#include <string>    // Biblioteca para manipulação de strings

using namespace std;

int main() {
    // Declaração de variáveis
    string nome;
    double numero1, numero2, soma;

    // Solicitar o nome do usuário
    cout << "Qual é o seu nome? ";
    getline(cin, nome);  // Lê a linha inteira como string

    // Exibe mensagem de boas-vindas
    cout << "Olá, " << nome << "! Vamos fazer uma soma." << endl;

    // Solicita dois números
    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    // Realiza o cálculo da soma
    soma = numero1 + numero2;

    // Exibe o resultado
    cout << "A soma de " << numero1 << " e " << numero2 << " é " << soma << "." << endl;

    // Mensagem personalizada com o nome do usuário
    cout << "Obrigado por usar este programa, " << nome << "!" << endl;

    return 0;
}
