/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THIAGO BITENCOURT SANCHO
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 28/04/2026
Objetivo    : SOMAR IMPARES ENTRE DOIS NUMEROS
Aprendizado : APRENDI LACOS DE REPETICAO
-------------------------------------------------------------------------- */
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
