/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THIAGO BITENCOURT SANCHO
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 21/05/2026
Objetivo    : CALCULAR COMBUSTIVEL
Aprendizado : APRENDI A CALCULAR COMBUSTIVEL
---------------------------------------------------------------------------- */

#include<stdio.h>

float calcularCombustivel(int tempo , int velocidade){
	return (float)tempo * velocidade / 12;
}

int main(void){
	int tempo , velocidade;
	
	
	scanf("%d" , &tempo);
	scanf("%d" , &velocidade);
	
	float combustivel = calcularCombustivel(tempo , velocidade);
	
	printf("%.3f" , combustivel);
}
