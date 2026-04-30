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
	
	int n;
	int a;
	
	scanf("%d" , &a);
	
	for(int i = 1; i<=a; i++){
		char frase[52] = {0};
		char saida[52] = {0}; 
		scanf("%s" , frase);
		scanf("%d" , &n);
		
		for(int contador= 0; contador<= strlen(frase) - 1; contador++){
			char letra = frase[contador];
			saida[contador] = (letra - 'A' - n + 26) % 26 + 'A';
		}
		
		printf("%s\n" , saida);	
			
		
	}
	return 0;
}
