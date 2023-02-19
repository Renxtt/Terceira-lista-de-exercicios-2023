#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

//Faça um programa em C que solicite o peso e a altura de uma pessoa, e calcule o seu índice de massa corporal (IMC), exibindo a mensagem correspondente na tela (abaixo do peso, peso normal, sobrepeso, obesidade grau 1, obesidade grau 2 ou obesidade grau 3).

int main(void){
	setlocale(LC_ALL,"portuguese");
	
	int  dois;
	//char
	float peso, altura, piw, imc, resu;
	
	
	//solicite o peso e a altura de uma pessoa
	printf("Qual é o seu peso?:");
	scanf("%f", &peso);
	printf("\nQual é o sua altura?:");
	scanf("%f", &altura);
	dois=2;
	//calcule o seu índice de massa corporal (IMC)
	piw=pow(altura,dois);
	//printf("%f", piw);
	resu=peso/piw;
	printf("\nseu IMC é %f", resu);
	
	
	//exibindo a mensagem correspondente na tela
	if(resu<=18.5){
		printf("\nVocê está abaixo do peso");
		//TODO
	}else if(resu>=18.6&&resu<=24.9){
		printf("\nVocê está com o peso normal");
		//TODO
	}else if(resu>=25.0&&resu<=29.9){
		printf("\nVocê está com Sobrepeso");
		//TODO
	}else if(resu>=30.0&&resu<=34.9){
		printf("\nVocê está com Obesidade Grau I");
		//TODO
	}else if(resu>=35.0&&resu<=39.9){
		printf("\nVocê está com Obesidade Grau II");
		//TODO
	}else if(resu>=40.0){
		printf("\nVocê está com Obesidade Grau III");
		//TODO
	}
	
	
}
