#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <time.h>

// Escreva um programa em C que solicite dois números inteiros e verifique qual é o maior, exibindo o resultado na tela.

main(void){
	setlocale(LC_ALL,"portuguese");
	int nu, nu2, dif, menor,maior, random, random2;
	char perg[40], reset[40];
	printf("Você gostaria de rodar aleatoriamente os números ou gostaria de escreve-los,(responda com escrever ou rodar)");
	printf("\ncomo você gostaria?: ");	
	scanf("%s", &perg);
	
	if(strcmp(perg,"escrever")==0||strcmp(perg,"Escrever")==0){
		printf("Digiti um número: ");
		scanf("%d", &nu);
		printf("Digiti um segundo número: ");
		scanf("%d", &nu2);
		if(nu>nu2){
			//TODO
			printf("%d é maior que %d", nu, nu2);
			
		}else if(nu2>nu){
			printf("%d é maior que %d", nu2, nu);
			
			//TODO
		}else if(nu==nu2){
			printf("Ambos são iguais!!");
			//TODO
		}
		printf("\nGostaria de reiniciar?:");
		scanf("%s", &reset);				
	}
	else if(strcmp(perg,"Rodar")==0||strcmp(perg,"rodar")==0){
		printf("Digiti o maior número possivel do seu randomico: ");
		scanf("%d", &maior);
		
		srand(time(NULL));
		random=rand() %maior+1;
		random2=rand() %maior+1;
		if(random>random2){
			printf("%d é maior que %d", random, random2);
			//TODO
		}else if(random2>random){
			printf("%d é maior que %d", random2, random);
			//TODO
		}else if(random==random2){
			printf("Ambos são iguais!!");
			//TODO
		}
		printf("\nGostaria de reiniciar?:");
		scanf("%s", &reset);
		
		//TODO
	}while(strcmp(reset,"Sim")==0||strcmp(reset,"sim")==0||strcmp(reset,"s")==0||strcmp(reset,"S")==0){
		printf("Você gostaria de rodar aleatoriamente os números ou gostaria de escreve-los,(responda com escrever ou rodar)");
		printf("\ncomo você gostaria?: ");	
		scanf("%s", &perg);
			
		if(strcmp(perg,"escrever")==0||strcmp(perg,"Escrever")==0){
			printf("Digiti um número: ");
			scanf("%d", &nu);
			printf("Digiti um segundo número: ");
			scanf("%d", &nu2);
			if(nu>nu2){
				//TODO
				printf("%d é maior que %d", nu, nu2);
				
			}else if(nu2>nu){
				printf("%d é maior que %d", nu2, nu);
				
				//TODO
			}else if(nu==nu2){
				printf("Ambos são iguais!!");
				//TODO
			}
			printf("\nGostaria de reiniciar?:");
			scanf("%s", &reset);				
		}
		else if(strcmp(perg,"Rodar")==0||strcmp(perg,"rodar")==0){
			printf("Digiti o maior número possivel do seu randomico: ");
			scanf("%d", &maior);
			
			srand(time(NULL));
			random=rand() %maior+1;
			random2=rand() %maior+1;
			if(random>random2){
				printf("%d é maior que %d", random, random2);
				//TODO
			}else if(random2>random){
				printf("%d é maior que %d", random2, random);
				//TODO
			}else if(random==random2){
				printf("Ambos são iguais!!");
				//TODO
			}
			printf("\nGostaria de reiniciar?:");
			scanf("%s", &reset);
			
			//TODO
		}
		//TODO
	}
	
}
