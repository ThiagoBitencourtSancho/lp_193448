#include <stdio.h>

int main()
{
    int numeroLinha , numeroColuna;
   	
	while(scanf("%d %d", &numeroLinha, &numeroColuna) != EOF){
		int matriz[numeroLinha][numeroColuna];
   
	    for(int linha = 0; linha<numeroLinha; linha++){
	        for(int coluna = 0; coluna<numeroColuna; coluna++){
	            scanf("%d" , &matriz[linha][coluna]);
	        }
	    }
	   
	    int novaMatriz[numeroLinha][numeroColuna];
	   
	    for(int linha = 0; linha<numeroLinha; linha++){
	        for(int coluna = 0; coluna<numeroColuna; coluna++){
	           
	            if(matriz[linha][coluna] == 0){
	                int paos = 0;
	               
	                if(linha != 0 && matriz[linha - 1][coluna] == 1){
	                    paos++;
	                }
	               
	                if(linha != numeroLinha - 1 && matriz[linha + 1][coluna] == 1){
	                    paos++;
	                }
	               
	                if(coluna != 0 && matriz[linha][coluna - 1] == 1){
	                    paos++;
	                }
	               
	               
	                if(coluna != numeroColuna - 1 && matriz[linha][coluna + 1] == 1){
	                    paos++;
	                }
	               
	                novaMatriz[linha][coluna] = paos;
	            }else{
	                novaMatriz[linha][coluna] = 9;
	            }
	           
	        }
	    }
   
    	for(int linha = 0; linha<numeroLinha; linha++){
    	    for(int coluna=0; coluna<numeroColuna; coluna++){
    	        printf("%d" , novaMatriz[linha][coluna]);
    	    }
    	    printf("\n");
    	}
	}
    
   
    
}
