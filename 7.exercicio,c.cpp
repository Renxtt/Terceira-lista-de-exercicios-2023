#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

main(void){
	setlocale(LC_ALL, "portuguese");
	
	char nome[40];
	//solicite o nome do usuário
	printf("\nDigite um Nome: ");
	scanf("%s", &nome);
	
	//verifique se ele é igual a "João" ou "Maria"
	if(strcmp(nome,"João")==0){
		printf("O nome digitado é igual à João");
		//TODO
	}else if(strcmp(nome,"Maria")==0){
		printf("O nome digitado é igual à Maria");
		//TODO
	}else if(strcmp(nome,"João")==1||strcmp(nome,"Maria")==1){
		printf("Seu Nome não é João nem Maria");
		//TODO
	}
	return 0;
	// exibindo a mensagem correspondente na tela.
	
}
