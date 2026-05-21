/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THIAGO BITENCOURT SANCHO
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 21/05/2026
Objetivo    : TEMPO DE DURACAO DE UM JOGO
Aprendizado : APRENDI A CALCULAR O TEMPO ENTRE DUAS HORAS
-------------------------------------------------------------------------- */
#include<stdio.h>

int CalcularDuracao(int inicio , int fim){
    if(inicio == fim){
        return 24;
    }
   
    if(fim > inicio){
        return fim - inicio;
    }
   
    return 24 - inicio + fim;
}

int main(void){
    int inicio , fim;
   
    scanf("%d" , &inicio);
    scanf("%d" , &fim);
   
    int tempo = CalcularDuracao(inicio , fim);
   
    printf("O JOGO DUROU %d HORA(S)" , tempo);
   
    return 0;
}
