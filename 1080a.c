/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THIAGO BITENCOURT SANCHO
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 28/04/2026
Objetivo    : MOSTRAR O MAIOR DE 100 NUMEROS E SUA POSICAO.
Aprendizado : APRENDI A LIDAR COM LAÇOS
-------------------------------------------------------------------------- */
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
