#include<stdio.h>

int main(void){
	int valor1 , valor2 , maior, menor , soma;
	soma = 0;
	scanf("%d" , &valor1);
	scanf("%d" , &valor2);

	if(valor1 < valor2){
		maior = valor2;
		menor = valor1;
		
	}else{
		maior = valor1;
		menor = valor2;
	}

	for(int cont = menor + 1 ; cont < maior ; cont++ ){
		if(cont%2!=0){
			soma = soma + cont;
		}
	}
	
	printf("%d" , soma);

}
