#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <time.h>

main(void){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	int random, num, reset;
	random=rand() % 50;
	printf("Insira um número: ");
	scanf("%d", &num);
	
	if(num<0){
		printf("O número %d é um número negativo", num);	
	}else if(num>0){
		printf("O número %d é um número Positivo", num);
	}else if(num==0){
		printf("O seu número  é zero");
	}
	return 0;
	
}
