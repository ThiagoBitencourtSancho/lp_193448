#include<stdio.h>
#include<ctype.h>


int main(void){
	char frase[51] , saida[51];
	char espaco[] = " ";
	
	
	while(fgets(frase , 50 , stdin) != NULL){
		int maiuscula = 1;
		for(int contador = 0; contador < 50; contador++){
			char letra = frase[contador];
			
			
			if(letra == ' '){
				saida[contador] = ' ';
				continue;
			}
			
			if(maiuscula == 1){
				saida[contador] = toupper(letra);
				maiuscula = 0;
			}else{
				saida[contador] = tolower(letra);
				maiuscula = 1;
			}
		}
		
		printf(saida);
	
	}
	
	return 0;
	
}
