#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <time.h>

main(void){
	setlocale(LC_ALL,"portuguese");
	int idade, falta;
	printf("Qual � a sua Idade: ");
	scanf("%d", &idade);
	falta=18-idade;
	if(idade>=18){
		printf("bem vinda � um programa com bastante sanguenolencia!!!");
	}else{
		printf("sinto muito faltam %d para voc� chagar a idade Adulta!!!", falta);
		printf("\nSinto Muito!!!");
		
	}
	
	return 0;
}