#include <iostream>

int main() {
    // Exemplo 1: Estrutura condicional simples (if)
    int idade;
    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    // Utilizando operador ternário para determinar se é maior ou menor de idade
    std::cout << "Você é " << ((idade >= 18) ? "maior" : "menor") << " de idade." << std::endl;

    // Exemplo 2: Estrutura condicional composta (if-else if-else)
    int nota;
    std::cout << "Digite sua nota: ";
    std::cin >> nota;

    // Utilizando operador ternário para atribuir a classificação com base na nota
    std::string classificacao = (nota >= 90) ? "A" : (nota >= 80) ? "B" : (nota >= 70) ? "C" : (nota >= 60) ? "D" : "F";
    std::cout << "Você tirou uma nota " << classificacao << "." << std::endl;

    // Exemplo 3: Estrutura condicional aninhada (if dentro de outro if)
    bool temCarteiraDeMotorista;
    bool temCarro;

    std::cout << "Você tem carteira de motorista? (1 para sim, 0 para não): ";
    std::cin >> temCarteiraDeMotorista;

    // Verificando se a pessoa tem carteira antes de perguntar sobre o carro
    std::cout << "Você " << (temCarteiraDeMotorista ? "tem" : "não tem") << " carteira de motorista. ";

    if (temCarteiraDeMotorista) {
        // Perguntando se a pessoa tem um carro apenas se ela tem carteira
        std::cout << "Você tem um carro? (1 para sim, 0 para não): ";
        std::cin >> temCarro;

        std::cout << "Você " << ((temCarro) ? "pode dirigir legalmente." : "tem carteira, mas não tem um carro para dirigir.") << std::endl;
    } else {
        std::cout << "Portanto, não pode dirigir." << std::endl;
    }

    // Exemplo 4: Estrutura de switch para verificar o valor de uma variável
    char escolha;
    std::cout << "Escolha A, B ou C: ";
    std::cin >> escolha;

    // Utilizando operador ternário para exibir a escolha feita
    std::cout << "Você escolheu a opção " << ((escolha == 'A') ? "A" : 
                                              (escolha == 'B') ? "B" : 
                                              (escolha == 'C') ? "C" : "inválida") << "." << std::endl;

    return 0;
}
