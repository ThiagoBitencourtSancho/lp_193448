#include<stdio.h>

int main(void){
	int numeroAtual , maior , posicao;
	maior = 0;
	for(int contador = 1; contador <= 100; contador++){
		scanf("%d" , &numeroAtual);
		
		if(numeroAtual > maior){
			maior = numeroAtual;
			posicao = contador;
		}
		
	}
	
	printf("%d\n" , maior);
	printf("%d\n" , posicao);
	
		
	return 0;
}
