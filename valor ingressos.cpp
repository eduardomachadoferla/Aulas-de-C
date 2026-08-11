#include <stdio.h> // Biblioteca

int main() // Classe principal
{
    const float preco_ingresso = 30.00; // Const

    int quantidade; // Declarando uma variavel do tipo inteiro
    float total;    // Declarando uma variavel do tipo float, decimal

    printf("Digite a quantidade de ingressos desejados: "); // Imprime uma mensagem
    scanf("%d", &quantidade); // Captura uma variavel

    total = quantidade * preco_ingresso; // Calcula o total

    printf("O valor total da compra e: R$ %.2f \n", total);

    return 0;
}
