#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    float media;
    char nome[50];

    printf("=== CALCULADORA DE MEDIA ANUAL ===\n\n");

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("\nDigite a nota da Materia de matematica: ");
    scanf("%f", &nota1);

    printf("Digite a nota da Materia de portugues: ");
    scanf("%f", &nota2);

    printf("Digite a nota da Materia de flosofia: ");
    scanf("%f", &nota3);

    printf("Digite a nota da Materia historia: ");
    scanf("%f", &nota4);

    // Calcula a media
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\n---------------- RESULTADO ----------------\n");
    printf("Aluno: %s\n", nome);
    printf("Notas: %.1f | %.1f | %.1f | %.1f\n", nota1, nota2, nota3, nota4);
    printf("Media Anual: %.2f\n", media);

    // Verifica se passou ou reprovou
    if(media >= 7.0) {
        printf("Status: APROVADO \n");
    } else if(media >= 5.0) {
        printf("Status: RECUPERACAO \n");
    } else {
        printf("Status: REPROVADO \n");
    }

    return 0;
}
