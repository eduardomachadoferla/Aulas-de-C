#include <stdio.h>

int main(){ // classe principal
	int idade; // declarando uma variavel
	
	printf("digite sua idade: "); // imprime uma mensagem na tela
	scanf("%d", &idade); // captura uma variavel
	
	if (idade >= 18){ // estrutura de decisao
		printf("voce ja pode tirar a carteira de motorista"); // imprime uma mensagem na tela
	} 
	else {// variavel "se nao " acontece tal coisa
		printf("voce nao tem idade o suficiente"); 
	}
	
	printf("\nfim do programa"); // imprme uma mensagem na tela 
	
	return 0; // fim do programa 
	
}
