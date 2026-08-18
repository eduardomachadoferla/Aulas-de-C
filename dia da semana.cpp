#include <stdio.h> // Biblioteca padrão



int main(){ // Função principal. T
    
    // 1. DECLARAÇÃO DE VARIÁVEIS
    int dia_semana = 5;  // Variável que guarda o número do dia. 1=Domingo, 2=Segunda... 5=Quinta
    
    // 2. ESTRUTURA DE DECISÃO MÚLTIPLA: SWITCH
    // O switch verifica o valor da variável "dia_semana" e executa o case correspondente
    switch (dia_semana){
        
        // CASE: Se dia_semana for igual a 1
        case 1:
            printf("Domingo.\n"); // Mostra na tela
            break; // Para a execução do switch aqui. Se não tiver break ele continua pros cases de baixo
        
        // CASE: Se dia_semana for igual a 2
        case 2:
            printf("Segunda.\n");  
            break;// Para a execução do switch aqui. Se não tiver break ele continua pros cases de baixo

        // CASE: Se dia_semana for igual a 3
        case 3:  
            printf("Terca.\n");
            break;// Para a execução do switch aqui. Se não tiver break ele continua pros cases de baixo

        // CASE: Se dia_semana for igual a 4
        case 4:  
            printf("Quarta.\n");
            break;// Para a execução do switch aqui. Se não tiver break ele continua pros cases de baixo

        // CASE: Se dia_semana for igual a 5
        case 5:  
            printf("Quinta.\n");
            break;// Para a execução do switch aqui. Se não tiver break ele continua pros cases de baixo
            
        // CASE: Se dia_semana for igual a 6
        case 6:
            printf("Sexta.\n");
            break;// Para a execução do switch aqui. Se não tiver break ele continua pros cases de baixo
            
        // CASE: Se dia_semana for igual a 7
        case 7:
            printf("Sabado.\n");
            break;// Para a execução do switch aqui. Se não tiver break ele continua pros cases de baixo
        
        // DEFAULT: Executa se nenhum case acima for verdadeiro
        // Ou seja, se o número for menor que 1 ou maior que 7
        default: 
            printf("dia invalido");
            break;// Para a execução do switch aqui. Se não tiver break ele continua pros cases de baixo
    }

    return 0; // Indica que o programa terminou sem erros. 0 = tudo certo
}
