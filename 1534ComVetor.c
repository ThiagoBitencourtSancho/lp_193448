/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THIAGO BITENCOURT SANCHO
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 14/05/2026
Objetivo    : VETOR 123
Aprendizado : APRENDI A LIDAR VETORES
-------------------------------------------------------------------------- */
#include<stdio.h>

int main(void){
	
 int colunas;
	
 while(scanf("%d" , &colunas) != EOF){
  char linha[colunas + 1];
  linha[colunas] = '\0';
  linha[0] = '1';
  linha[colunas-1] = '2';
  
  for(int posicao = 1; posicao<=colunas-2; posicao++){
   linha[posicao] = '3';
  } 
  
  
  int mudar1 = 1;
  int mudar2 = colunas - 2;
  
  for(int contador = 0; contador < colunas; contador++){
   printf("%s\n" , linha);
   
   
   linha[mudar1-1] = '3';
   linha[mudar2 + 1] = '3';
   
   linha[mudar1] = '1';
   linha[mudar2] = '2';
   
   
   mudar1++;
   mudar2--;
    
  } 
 }
	
	

	
}
