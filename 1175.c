#include<stdio.h>

int main(void){
	int numeros[20];
	
	
	
	for(int c=19; c>=0; c--){
		scanf("%d" , &numeros[c]);
	}
	
	for(int c = 0; c<20; c++){
		printf("N[%d] = %d\n" , c , numeros[c]);
	}
	
	
}
