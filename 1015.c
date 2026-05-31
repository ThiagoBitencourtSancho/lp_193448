/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THIAGO BITENCOURT SANCHO
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 16/05/2026
Objetivo    : CALCULAR A DISTANCIA DE DOIS PONTOS
Aprendizado : APRENDI A USAR FUNCOES
-------------------------------------------------------------------------- */

#include<stdio.h>
#include<math.h>

double quadrado(double a){
	return (double) a*a;
}

int main(void){
	double x1 , x2 , y1 , y2;
	
	scanf("%lf" , &x1);
	scanf("%lf" , &y1);
	scanf("%lf" , &x2);
	scanf("%lf" , &y2);
	
	double distancia = sqrt(quadrado(x1-x2) + quadrado(y1-y2));
	
	printf("%.4lf" , distancia);	
	
	return 0;
}
