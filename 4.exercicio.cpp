#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

main(void){
	char let[40];
	setlocale(LC_ALL,"portuguese");
	
	printf("Qual letra voc� escolhe:");
	scanf("%s", &let);

	if(strcmp(let,"a")==0||strcmp(let,"A")==0||strcmp(let,"e")==0||strcmp(let,"E")==0||strcmp(let,"�")==0||strcmp(let,"�")==0||strcmp(let,"i")==0||strcmp(let,"I")==0||strcmp(let,"o")==0||strcmp(let,"O")==0||strcmp(let,"u")==0||strcmp(let,"U")==0){
		printf("'%s' � uma Vogal!!", let);
		//TODO
	}else{
		printf("'%s' � uma consoante", let);
		
	}	
	
	return 0;
}