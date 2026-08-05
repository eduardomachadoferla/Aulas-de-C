#include <stdio.h> //Blibioteca

int main(){ //Classe principal.

    int idade; //Declarando uma variavel.

    printf("Digite a sua idade:"); //Imprime uma mensagem na tela.
    scanf("%d", &idade); //Busca uma variavel.

    if (idade >= 18){ //Se idade for maior ou igual a 18, ele pode dirigir.
        printf("Voce ja pode tirar a carteira de motorista! \n"); //Imprime uma mensagem
    }

    printf("Fim do programa. \n"); //Imprime uma mensagem na tela

    return 0; //Fim do programa
}
