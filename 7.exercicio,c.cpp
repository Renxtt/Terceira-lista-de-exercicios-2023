#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

main(void){
	setlocale(LC_ALL, "portuguese");
	
	char nome[40];
	//solicite o nome do usu�rio
	printf("\nDigite um Nome: ");
	scanf("%s", &nome);
	
	//verifique se ele � igual a "Jo�o" ou "Maria"
	if(strcmp(nome,"Jo�o")==0){
		printf("O nome digitado � igual � Jo�o");
		//TODO
	}else if(strcmp(nome,"Maria")==0){
		printf("O nome digitado � igual � Maria");
		//TODO
	}else if(strcmp(nome,"Jo�o")==1||strcmp(nome,"Maria")==1){
		printf("Seu Nome n�o � Jo�o nem Maria");
		//TODO
	}
	return 0;
	// exibindo a mensagem correspondente na tela.
	
}
