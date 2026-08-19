#include <stdio.h>
#include <string.h> // Necessario para manipular textos (strings)

int main() {
    // Variaveis para armazenar o cadastro
    char nome[50];
    int idade = 0;
    int cadastrado = 0; // Flag (bandeira) para saber se ja existe um cadastro
    int opcao;

    do {
        printf("\n===================================\n");
        printf(" SISTEMA DE CADASTRO\n");
        printf("===================================\n");
        printf("1. Cadastrar Usuario\n");
        printf("2. Consultar Cadastro\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Limpa o caractere 'enter' pendente no buffer apos o scanf de numeros
        getchar();

        switch (opcao) {
            case 1:
                printf("\n--- NOVO CADASTRO ---\n");
                printf("Digite o nome: ");
                // fgets le o nome completo (incluindo espacos) de forma segura
                fgets(nome, 50, stdin);

                // Remove a quebra de linha (\n) que o fgets costuma capturar no final
                nome[strcspn(nome, "\n")] = 0;

                printf("Digite a idade: ");
                scanf("%d", &idade);

                cadastrado = 1; // Marca que agora temos um usuario cadastrado!
                printf("Cadastro realizado com sucesso!\n");
                break;

            case 2:
                printf("\n--- CONSULTA DE CADASTRO ---\n");
                // Condicional alinhado/simples para verificar se ha dados
                if (cadastrado == 1) {
                    printf("Nome: %s\n", nome);
                    printf("Idade: %d anos\n", idade);
                } else {
                    printf("Nenhum usuario cadastrado no momento!\n");
                }
                break;

            case 3:
                printf("\nEncerrando o sistema...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao!= 3); // O menu repete ate o usuario digitar 3 para sair

    return 0;
}
