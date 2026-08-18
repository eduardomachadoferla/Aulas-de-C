#include <stdio.h> // Biblioteca padrão. Usada pra printf e scanf


int main(){ // Função principal
    int opcao; // Variável pra guardar a escolha do usuário: 1, 2, 3 ou 4
    
    // 1. EXIBIR O MENU NA TELA
    printf("=== MENU PRINCIPAL ===\n"); // \n quebra a linha
    printf("1. INICIAR JOGO\n");
    printf("2. CARREGAR JOGO\n");
    printf("3. CONFIGURACOES\n"); // Tirei o Ç pra não dar problema no terminal
    printf("4. SAIR\n");
    
    printf("\nDigite sua opcao: ");
    scanf("%d", &opcao); // %d = ler número inteiro. & = endereço da variável
    
    // 2. ESTRUTURA SWITCH: Decide o que fazer baseado na "opcao"
    switch (opcao){
        case 1: // Se o usuário digitou 1
            printf("\nIniciando um novo jogo...\n");
            break; // Sai do switch
            
        case 2: // Se o usuário digitou 2
            printf("\nCarregando jogo salvo...\n");
            break;
            
        case 3: // Se o usuário digitou 3
            printf("\nAbrindo configuracoes...\n");
            break;
            
        case 4: // Se o usuário digitou 4
            printf("\nSaindo do jogo...\n");
            break;
			
		default: // Se o usuário digitou qualquer outra coisa
			printf("Opcao invalida! Escolha um numero de 1 a 4 \n");
			break;
    }
			
	return 0; // Fim do programa. 0 = sem erro
}
