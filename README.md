# atividadeIngles.cpp

#include <iostream>
#include <array>

using namespace std;

/**
 * Função para separar o valor do saque nas notas disponíveis.
 * 
 * @param saque O valor total a ser sacado.
 * @return Um array contendo a quantidade de cada nota (100, 50, 20, 10, 5).
 */
array<int, 5> contaNotas(int saque) {
    array<int, 5> notasSeparadas;
    
    // Calcula a quantidade de notas de cada valor
    notasSeparadas[0] = (saque / 100);             // Notas de 100
    notasSeparadas[1] = ((saque % 100) / 50);      // Notas de 50
    notasSeparadas[2] = (((saque % 100) % 50) / 20);  // Notas de 20
    notasSeparadas[3] = ((((saque % 100) % 50) % 20) / 10);  // Notas de 10
    notasSeparadas[4] = (((((saque % 100) % 50) % 20) % 10) / 5);  // Notas de 5

    return notasSeparadas;
}

/**
 * Função principal do programa.
 * Lê o valor do saque, chama a função para contar as notas,
 * e exibe a quantidade de cada nota necessária.
 */
int main() {
    int saque;  // Valor a ser sacado
    array<int, 5> qtdNotas;  // Quantidade de cada nota

    // Solicita ao usuário o valor a ser sacado
    cout << "Digite o valor a ser sacado: ";
    cin >> saque;

    // Chama a função para calcular a quantidade de notas
    qtdNotas = contaNotas(saque);

    // Exibe a quantidade de cada nota necessária
    cout << "Qtd. Notas de 100: " << qtdNotas[0] << "\n";
    cout << "Qtd. Notas de 50: " << qtdNotas[1] << "\n";
    cout << "Qtd. Notas de 20: " << qtdNotas[2] << "\n";
    cout << "Qtd. Notas de 10: " << qtdNotas[3] << "\n";
    cout << "Qtd. Notas de 5: " << qtdNotas[4] << "\n";

    return 0;  // Fim da função main
}
