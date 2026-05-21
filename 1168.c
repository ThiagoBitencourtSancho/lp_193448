/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THIAGO BITENCOURT SANCHO
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 21/05/2026
Objetivo    : CALCULAR NUMERO DE LEDS
Aprendizado : APRENDI A USAR SWITCH CASE 
---------------------------------------------------------------------------- */
#include<stdio.h>
#include<string.h>


int main(void){
   
    int repeticoes = 0;
    scanf("%d" , &repeticoes);
    for(int contador = 1; contador <= repeticoes; contador++){
        char numeros[10000];
   
    scanf("%s" , numeros);
    int quantidade = 0;
    for(int posicao=0; posicao<strlen(numeros); posicao++){
        char numero = numeros[posicao];
        switch (numero){
            case '1':
                quantidade += 2;
                break;
            case '2':
                quantidade += 5;
                break;
            case '3':
                quantidade += 5;
                break;
            case '4':
                quantidade += 4;
                break;
            case '5':
                quantidade += 5;
                break;
            case '6':
                quantidade += 6;
                break;
            case '7':
                quantidade += 3;
                break;
            case '8':
                quantidade += 7;
                break;
            case '9':
                quantidade += 6;
                break;
            case '0':
                quantidade += 6;
                break;
        }
    }
   
    printf("%d leds\n" , quantidade);
    }
    return 0;
   
}
