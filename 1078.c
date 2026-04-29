#include<stdio.h>

int main (void){
	int numero;
	scanf("%d" , &numero);
	for(int cont = 1; cont <=10; cont ++){
		printf("%d x %d = %d\n" , cont , numero , numero*cont);
	}
}
