#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

//Crie um programa em C que solicite uma letra e verifique se ela é uma vogal ou uma consoante, exibindo a mensagem correspondente na tela.

main(void){
	char let[40];
	setlocale(LC_ALL,"portuguese");
	
	printf("Qual letra você escolhe:");
	scanf("%s", &let);

	if(strcmp(let,"a")==0||strcmp(let,"A")==0||strcmp(let,"e")==0||strcmp(let,"E")==0||strcmp(let,"é")==0||strcmp(let,"É")==0||strcmp(let,"i")==0||strcmp(let,"I")==0||strcmp(let,"o")==0||strcmp(let,"O")==0||strcmp(let,"u")==0||strcmp(let,"U")==0){
		printf("'%s' É uma Vogal!!", let);
		//TODO
	}else{
		printf("'%s' É uma consoante", let);
		
	}	
	
	return 0;
}
