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
	printf("Insira um n�mero: ");
	scanf("%d", &num);
	
	if(num<0){
		printf("O n�mero %d � um n�mero negativo", num);	
	}else if(num>0){
		printf("O n�mero %d � um n�mero Positivo", num);
	}else if(num==0){
		printf("O seu n�mero  � zero");
	}
	return 0;
	
}
