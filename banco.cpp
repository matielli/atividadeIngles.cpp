#include <iostream>
#include <array>

using namespace std;

// Função de separação das notas por valor
array<int, 5> contaNotas(int saque) {
    array<int, 5> notasSeparadas;
    
    // Código para manter o valor do saque e contar notas de maneira mais "limpa"
    // int aux
    //aux = saque;
    //ns[0] = aux / 100;
    //aux %= 100
    notasSeparadas[0] = (saque / 100);
    notasSeparadas[1] = ((saque % 100)/50);
    notasSeparadas[2] = (((saque % 100) % 50) / 20);
    notasSeparadas[3] = ((((saque % 100) % 50) % 20) / 10);
    notasSeparadas[4] = (((((saque % 100) % 50) % 20) % 10) / 5);
    return notasSeparadas;
}

// Fluxo principal do código
int main() {
    // Declara variáveis
    int saque;
    array<int, 5> qtdNotas;

    // Le valor a ser sacado do Caixa Eletrônico
    cout << "Digite o valor a ser sacado: ";
    cin >> saque;

    // Executa função para separar quantidade de notas por seu valor
    qtdNotas = contaNotas(saque);

    // Simula saida de notas do Caixa Eletrônico
    cout << "Qnt. Notas de 100:" << qtdNotas[0] << "\n";
    cout << "Qtd. Notas de 50: " << qtdNotas[1] << "\n";
    cout << "Qtd. Notas de 20: " << qtdNotas[2] << "\n";
    cout << "Qtd. Notas de 10: " << qtdNotas[3] << "\n";
    cout << "Qtd. Notas de 5: " << qtdNotas[4] << "\n";

    // Final do main
    return 0;
}
