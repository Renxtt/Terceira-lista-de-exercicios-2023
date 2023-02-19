#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <time.h>

// Faça um programa em C que solicite a idade do usuário e verifique se ele é maior ou menor de idade, exibindo a mensagem correspondente na tela.

main(void){
	setlocale(LC_ALL,"portuguese");
	int idade, falta;
	printf("Qual é a sua Idade: ");
	scanf("%d", &idade);
	falta=18-idade;
	if(idade>=18){
		printf("bem vinda à um programa com bastante sanguenolencia!!!");
	}else{
		printf("sinto muito faltam %d para você chagar a idade Adulta!!!", falta);
		printf("\nSinto Muito!!!");
		
	}
	
	return 0;
}
