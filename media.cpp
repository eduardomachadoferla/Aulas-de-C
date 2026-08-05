#include <stdio.h>

int main(){ // Classe principal

    float nota1, nota2, media; // Declarando a variavel

    printf("Digite a primeira nota:"); //Imprimir a mensagem
    scanf("%f", &nota1);

    printf("Digite a segunda nota:"); // aqui tava "primeira" de novo
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2; //calculo é dividido

    printf("A media final e: %.2f \n", media); // faltava o );

    return 0;
}
