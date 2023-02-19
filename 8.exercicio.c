#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

int main(void){
	int num, num2, num3;
	setlocale(LC_ALL, "portuguese");

	//solicite três números inteiros
	printf("Digite um número: ");
	scanf("%d", &num);
	printf("Digite um segundo número: ");
	scanf("%d", &num2);
	printf("Digite um terceiro número: ");
	scanf("%d", &num3);	
	//verifique qual é o maior e qual é o menor
	if(num>num2&&num2>num3){
		printf("O número %d é o maior e o menor número é %d", num, num3);
		//TODO
	}else if(num>num3&&num3>num2){
		printf("O número %d é o maior e o menor número é %d", num, num2);
		//TODO
	}else if(num2>num&&num>num3){
		printf("O número %d é o maior e o menor número é %d", num2, num3);
		//TODO
	}else if(num2>num3&&num3>num){
		printf("O número %d é o maior e o menor número é %d", num2, num);
		//TODO
	}else if(num3>num&&num>num2){
		printf("O número %d é o maior e o menor número é %d", num3, num2);
		//TODO
	}else if(num3>num2&&num2>num){
		printf("O número %d é o maior e o menor número é %d", num3, num);
		//TODO
	}else if(num==num2||num==num3||num2==num3){
		printf("Não existe número maior o número menor pois eles são iguais");
		//TODO
	}
	
	//exibindo os resultados na tela.
	
return 0;	
}
