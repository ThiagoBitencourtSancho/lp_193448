/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THIAGO BITENCOURT SANCHO
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 28/04/2026
Objetivo    : SIFRA DE CESAR
Aprendizado : APRENDI A LIDAR COM CHAR
-------------------------------------------------------------------------- */
#include<stdio.h>
#include<string.h>
int main(){
	char frase[51] , saida[51];
	int n;
	
	fgets(frase , 51 , stdin);
	scanf("%d" , &n);
	
	for(int contador= 0; frase[contador] != '\0'; contador++){
		printf("%d" , contador);
		char letra = frase[contador];
		saida[contador] = letra + n;
	}
	
	printf("%s" , saida);	
	return 0;
}
