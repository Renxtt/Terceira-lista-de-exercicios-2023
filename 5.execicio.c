#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	
	int  dois;
	//char
	float peso, altura, piw, imc, resu;
	
	
	//solicite o peso e a altura de uma pessoa
	printf("Qual � o seu peso?:");
	scanf("%f", &peso);
	printf("\nQual � o sua altura?:");
	scanf("%f", &altura);
	dois=2;
	//calcule o seu �ndice de massa corporal (IMC)
	piw=pow(altura,dois);
	//printf("%f", piw);
	resu=peso/piw;
	printf("\nseu IMC � %f", resu);
	
	
	//exibindo a mensagem correspondente na tela
	if(resu<=18.5){
		printf("\nVoc� est� abaixo do peso");
		//TODO
	}else if(resu>=18.6&&resu<=24.9){
		printf("\nVoc� est� com o peso normal");
		//TODO
	}else if(resu>=25.0&&resu<=29.9){
		printf("\nVoc� est� com Sobrepeso");
		//TODO
	}else if(resu>=30.0&&resu<=34.9){
		printf("\nVoc� est� com Obesidade Grau I");
		//TODO
	}else if(resu>=35.0&&resu<=39.9){
		printf("\nVoc� est� com Obesidade Grau II");
		//TODO
	}else if(resu>=40.0){
		printf("\nVoc� est� com Obesidade Grau III");
		//TODO
	}
	
	
}
