#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

int main(void){
	int num, num2, num3;
	setlocale(LC_ALL, "portuguese");

	//solicite tr�s n�meros inteiros
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	printf("Digite um segundo n�mero: ");
	scanf("%d", &num2);
	printf("Digite um terceiro n�mero: ");
	scanf("%d", &num3);	
	//verifique qual � o maior e qual � o menor
	if(num>num2&&num2>num3){
		printf("O n�mero %d � o maior e o menor n�mero � %d", num, num3);
		//TODO
	}else if(num>num3&&num3>num2){
		printf("O n�mero %d � o maior e o menor n�mero � %d", num, num2);
		//TODO
	}else if(num2>num&&num>num3){
		printf("O n�mero %d � o maior e o menor n�mero � %d", num2, num3);
		//TODO
	}else if(num2>num3&&num3>num){
		printf("O n�mero %d � o maior e o menor n�mero � %d", num2, num);
		//TODO
	}else if(num3>num&&num>num2){
		printf("O n�mero %d � o maior e o menor n�mero � %d", num3, num2);
		//TODO
	}else if(num3>num2&&num2>num){
		printf("O n�mero %d � o maior e o menor n�mero � %d", num3, num);
		//TODO
	}else if(num==num2||num==num3||num2==num3){
		printf("N�o existe n�mero maior o n�mero menor pois eles s�o iguais");
		//TODO
	}
	
	//exibindo os resultados na tela.
	
return 0;	
}
