/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THIAGO BITENCOURT SANCHO
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2757
Data        : 28/04/2026
Objetivo    : FORMATAR STRINGS
Aprendizado : APRENDI A FORMATAR STRINGS
-------------------------------------------------------------------------- */
#include<stdio.h>

int main(void){
	int a , b , c;
	
	scanf("%d" , &a);
	scanf("%d" , &b);
	scanf("%d" , &c);
	
	
	printf("A = %d, B = %d, C = %d\n" , a , b , c);
	printf("A = %10d, B = %10d, C = %10d\n" , a , b , c);
	printf("A = %010d, B = %010d, C = %010d\n" , a , b , c);
	printf("A = %-10d, B = %-10d, C = %-10d\n" , a , b , c);
	
	return 0;
}
