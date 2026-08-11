#include <stdio.h>

int main(){
    const float cotacao_dolar = 5.50; // Cotação fixa
    float reais, dolares;

    printf("Digite o valor em reais (R$): ");
    scanf("%f", &reais); // %f porque é float

    dolares = reais / cotacao_dolar;

    printf("O valor equivalente em Dolares e: US$ %.2f \n", dolares);

    return 0;
}
