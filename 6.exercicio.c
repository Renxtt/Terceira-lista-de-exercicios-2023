#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

main(void){
	setlocale(LC_ALL, "portuguese");
	
	int nub;

	//solicite um n�mero inteiro
	printf("Digite um N�mero Inteiro: ");
	scanf("%d", &nub);
	//verifique se ele � par ou �mpar
	if(nub % 2 ==0 ){
		printf("Ele � par");
		//TODO
	}else{
		printf("Ele � impar");
	}
	
	//exibindo a mensagem correspondente na tela
	
}
