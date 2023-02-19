#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

main(void){
	int idade;
	float rm;
	setlocale(LC_ALL,"portuguese");
	
	
//solicite a idade e a renda mensal de uma pessoa
	printf("qual é a sua idade: ");
	scanf("%d", &idade);
	printf("\nQual é a sua renda: ");
	scanf("%f", &rm);
//verifique se ela é elegível para receber um benefício considerando as seguintes regras: a pessoa deve ter mais de 18 anos e uma renda mensal de até R$ 1.500,00
	if(idade>=18&&rm<=1500){
		printf("\nParabéns, você é elegível para receber o benefício!");
		
		//TODO
	}else{
		printf("\nInfelizmente, você não é elegível para receber o benefício");
		
	}
	
// Se ela atender a esses requisitos, exiba a mensagem "Parabéns, você é elegível para receber o benefício!". 
	
	
//Caso contrário, exiba a mensagem "Infelizmente, você não é elegível para receber o benefício".
	
}
