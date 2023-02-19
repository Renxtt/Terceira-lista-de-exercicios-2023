#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

main(void){
	setlocale(LC_ALL, "portuguese");
	
	int nub;

	//solicite um número inteiro
	printf("Digite um Número Inteiro: ");
	scanf("%d", &nub);
	//verifique se ele é par ou ímpar
	if(nub % 2 ==0 ){
		printf("Ele é par");
		//TODO
	}else{
		printf("Ele é impar");
	}
	
	//exibindo a mensagem correspondente na tela
	
}
