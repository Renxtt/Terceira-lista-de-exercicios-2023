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
	printf("qual � a sua idade: ");
	scanf("%d", &idade);
	printf("\nQual � a sua renda: ");
	scanf("%f", &rm);
//verifique se ela � eleg�vel para receber um benef�cio considerando as seguintes regras: a pessoa deve ter mais de 18 anos e uma renda mensal de at� R$ 1.500,00
	if(idade>=18&&rm<=1500){
		printf("\nParab�ns, voc� � eleg�vel para receber o benef�cio!");
		
		//TODO
	}else{
		printf("\nInfelizmente, voc� n�o � eleg�vel para receber o benef�cio");
		
	}
	
// Se ela atender a esses requisitos, exiba a mensagem "Parab�ns, voc� � eleg�vel para receber o benef�cio!". 
	
	
//Caso contr�rio, exiba a mensagem "Infelizmente, voc� n�o � eleg�vel para receber o benef�cio".
	
}
