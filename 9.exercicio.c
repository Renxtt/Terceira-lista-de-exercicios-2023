#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

	//Escreva um programa em C que solicite três números inteiros e verifique qual é o maior e qual é o menor, exibindo os resultados na tela.

main(void){
	setlocale(LC_ALL, "portuguese");
	int nub, nub2, nub3;
	
	
	//solicite três números inteiros
	printf("Digite um número:");
	scanf("%d", &nub);
	printf("Digite um número:");
	scanf("%d", &nub2);
	printf("Digite um número:");
	scanf("%d", &nub3);
		
	//verifique qual é o maior e qual é o menor exibindo os resultados na tela.
	if(nub>nub2&&nub2>nub3){
		printf("\n%d é o maior número e o número %d é o menor", nub, nub2, nub3);
	}
	else if(nub>nub3&&nub3>nub2){
		printf("\n%d é o maior número e o número %d é o menor",nub , nub3, nub2);
	}
	else if(nub2>nub&&nub>nub3){
		printf("\n%d é o maior número e o número %d é o menor", nub2, nub, nub3);
	}
	else if(nub2>nub3&&nub3>nub){
		printf("\n%d é o maior número e o número %d é o menor", nub2, nub3, nub);
	}
	else if(nub3>nub&&nub>nub2){
		printf("\n%d é o maior número e o número %d é o menor",nub3, nub, nub2);
	}
	else if(nub3>nub2&&nub2>nub){
		printf("\n%d é o maior número e o número %d é o menor",nub3, nub2, nub);
	}
	return 0;
	
}
