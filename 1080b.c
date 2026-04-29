/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THIAGO BITENCOURT SANCHO
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 28/04/2026
Objetivo    : MOSTRAR O MAIOR DE 100 NUMEROS E SUA POSICAO.
Aprendizado : APRENDI A LIDAR COM ARRAYS
-------------------------------------------------------------------------- */
#include<stdio.h>

int main(void){
	int numeros[100] , maior , posicao;
	maior = 0;
	
	for(int contador = 0; contador<=99; contador++){
		scanf("%d" , &numeros[contador]);
		
		if(numeros[contador]> maior){
			maior = numeros[contador];
			posicao = contador + 1;
		}
	}
	
	printf("%d\n" , maior);
	printf("%d\n" , posicao);
	
}
