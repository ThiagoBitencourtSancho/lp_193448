/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : THIAGO BITENCOURT SANCHO
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 31/05/2026
Objetivo    : Camisetas
Aprendizado : structs
-------------------------------------------------------------------------- */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct Camiseta {
	char caractes[100];
	char nome[100];
};

int main(){
    int primeiro_caso = 1;
    
	while(true){
		
		int quantidade;
		scanf("%d" , &quantidade);
		if(quantidade == 0){
			break;
		}
		
        if(!primeiro_caso){
            printf("\n");
        }
        primeiro_caso = 0;
        
		struct Camiseta camisetas[quantidade];
		
		for(int posicaoCamiseta = 0; posicaoCamiseta < quantidade; posicaoCamiseta++){
			scanf(" %99[^\n]" , camisetas[posicaoCamiseta].nome);
			scanf(" %99[^\n]" , camisetas[posicaoCamiseta].caractes);			
		}
		
		for(int i = 0; i < quantidade - 1; i++){
			for(int j = 0; j < quantidade - i - 1; j++){
				if(strcmp(camisetas[j].nome, camisetas[j+1].nome) > 0){
					struct Camiseta auxiliar = camisetas[j];
					camisetas[j] = camisetas[j+1];
					camisetas[j+1] = auxiliar;
				}
			}
		}
		
		for(int contador = 0; contador < quantidade; contador++){
			if(camisetas[contador].caractes[0] == 'b' && camisetas[contador].caractes[strlen(camisetas[contador].caractes)-1] == 'P'){
				printf("%s %s\n" , camisetas[contador].caractes , camisetas[contador].nome);
			}
		}
		
		for(int contador = 0; contador < quantidade; contador++){
			if(camisetas[contador].caractes[0] == 'b' && camisetas[contador].caractes[strlen(camisetas[contador].caractes)-1] == 'M'){
				printf("%s %s\n" , camisetas[contador].caractes , camisetas[contador].nome);
			}
		}
		
		for(int contador = 0; contador < quantidade; contador++){
			if(camisetas[contador].caractes[0] == 'b' && camisetas[contador].caractes[strlen(camisetas[contador].caractes)-1] == 'G'){
				printf("%s %s\n" , camisetas[contador].caractes , camisetas[contador].nome);
			}
		}	
			
		for(int contador = 0; contador < quantidade; contador++){
			if(camisetas[contador].caractes[0] == 'v' && camisetas[contador].caractes[strlen(camisetas[contador].caractes)-1] == 'P'){
				printf("%s %s\n" , camisetas[contador].caractes , camisetas[contador].nome);
			}
		}
		
		for(int contador = 0; contador < quantidade; contador++){
			if(camisetas[contador].caractes[0] == 'v' && camisetas[contador].caractes[strlen(camisetas[contador].caractes)-1] == 'M'){
				printf("%s %s\n" , camisetas[contador].caractes , camisetas[contador].nome);
			}
		}
		
		for(int contador = 0; contador < quantidade; contador++){
			if(camisetas[contador].caractes[0] == 'v' && camisetas[contador].caractes[strlen(camisetas[contador].caractes)-1] == 'G'){
				printf("%s %s\n" , camisetas[contador].caractes , camisetas[contador].nome);
			}
		}
		
	}
    return 0;
}
