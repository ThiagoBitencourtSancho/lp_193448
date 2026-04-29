/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THIAGO BITENCOURT SANCHO
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : TABUADA
Aprendizado : APRENDI A FAZER A TABUADA
-------------------------------------------------------------------------- */
#include<stdio.h>

int main (void){
	int numero;
	scanf("%d" , &numero);
	for(int cont = 1; cont <=10; cont ++){
		printf("%d x %d = %d\n" , cont , numero , numero*cont);
	}
}
