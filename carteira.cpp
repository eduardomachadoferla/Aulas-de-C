#include <stdio.h> //biblioteca principal
#include <stdbool.h> // pra usar bool, true e false

int main(){
    int idade = 20;
    bool tem_carteira = true;
   
    if(idade >= 18){
        printf("Maior de idade.\n");
   	
        if(tem_carteira == true){ // verifica a variavel, sem aspas
   		    printf("Voce pode dirigir.\n"); // ; aqui
	    } else {
	    printf("Voce nao tem carteira de motorista.\n");
	    }
   	
    } else {
   	    printf("Menor de idade.\n");
   	    return 0;
    }

    return 0; //fim do programa
}
