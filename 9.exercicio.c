#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

	//Escreva um programa em C que solicite tr�s n�meros inteiros e verifique qual � o maior e qual � o menor, exibindo os resultados na tela.

main(void){
	setlocale(LC_ALL, "portuguese");
	int nub, nub2, nub3;
	
	
	//solicite tr�s n�meros inteiros
	printf("Digite um n�mero:");
	scanf("%d", &nub);
	printf("Digite um n�mero:");
	scanf("%d", &nub2);
	printf("Digite um n�mero:");
	scanf("%d", &nub3);
		
	//verifique qual � o maior e qual � o menor exibindo os resultados na tela.
	if(nub>nub2&&nub2>nub3){
		printf("\n%d � o maior n�mero e o n�mero %d � o menor", nub, nub2, nub3);
	}
	else if(nub>nub3&&nub3>nub2){
		printf("\n%d � o maior n�mero e o n�mero %d � o menor",nub , nub3, nub2);
	}
	else if(nub2>nub&&nub>nub3){
		printf("\n%d � o maior n�mero e o n�mero %d � o menor", nub2, nub, nub3);
	}
	else if(nub2>nub3&&nub3>nub){
		printf("\n%d � o maior n�mero e o n�mero %d � o menor", nub2, nub3, nub);
	}
	else if(nub3>nub&&nub>nub2){
		printf("\n%d � o maior n�mero e o n�mero %d � o menor",nub3, nub, nub2);
	}
	else if(nub3>nub2&&nub2>nub){
		printf("\n%d � o maior n�mero e o n�mero %d � o menor",nub3, nub2, nub);
	}
	return 0;
	
}
