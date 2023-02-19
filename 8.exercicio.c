#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

//Faça um programa em C que solicite o nome e a idade do usuário, e verifique se ele é maior de idade e se o seu nome é igual a "João" ou "Maria", exibindo a mensagem correspondente na #include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

main(void){
	setlocale(LC_ALL, "portuguese");
	int idade;
	char nome[10];
	//solicite o nome do usuário
	printf("\nDigite um Nome: ");
	scanf("%s", &nome);
	printf("Qual é a sua Idade");
	scanf("%d", &idade);
	
	//verifique se ele é igual a "João" ou "Maria"
	if(strcmp(nome,"Joao")==0){
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
	
}tela
