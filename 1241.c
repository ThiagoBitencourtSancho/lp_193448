#include<stdio.h>
#include<string.h>

int main(void){
	int repeticoes;
	
	scanf("%d\n" , &repeticoes);
	
	for(int i = 0; i<repeticoes; i++){
		char numero1[1001] = {0} , numero2[1001]= {0} , comparacao[1001] = {0};
		
		scanf("%s\n" , numero1);
		scanf("%s\n" , numero2);
		
		if(strlen(numero2) > strlen(numero1)){
			printf("nao encaixa\n");
			continue;
		}
		
		int auxiliar = 0;
		for(int posicao = strlen(numero1) - strlen(numero2); posicao <= strlen(numero1); posicao++){
			comparacao[auxiliar] = numero1[posicao];
			auxiliar++;
		}
		
		
		if(!strcmp(numero2 , comparacao)){
			printf("encaixa\n");
		}else{
			printf("nao encaixa\n");
		}	
	}
	
	
	
}

