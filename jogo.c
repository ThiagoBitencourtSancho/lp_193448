#include<stdio.h>

int tabuleiros[3][9][9] = {
	    {
	        // Fácil
	        {1, 0, 0, 4, 8, 9, 0, 0, 6},
	        {7, 3, 0, 0, 0, 0, 0, 4, 0},
	        {0, 0, 0, 0, 0, 1, 2, 9, 5},
	        {0, 0, 7, 1, 2, 0, 6, 0, 0},
	        {5, 0, 0, 7, 0, 3, 0, 0, 8},
	        {0, 0, 6, 0, 9, 5, 7, 0, 0},
	        {9, 1, 4, 6, 0, 0, 0, 0, 0},
	        {0, 2, 0, 0, 0, 0, 0, 3, 7},
	        {8, 0, 0, 5, 1, 2, 0, 0, 4}
	    },
	    {
	        // Médio 
	        {0, 2, 0, 6, 0, 8, 0, 0, 0},
	        {5, 8, 0, 0, 0, 9, 7, 0, 0},
	        {0, 0, 0, 0, 4, 0, 0, 0, 0},
	        {3, 7, 0, 0, 0, 0, 5, 0, 0},
	        {6, 0, 0, 0, 0, 0, 0, 0, 4},
	        {0, 0, 8, 0, 0, 0, 0, 1, 3},
	        {0, 0, 0, 0, 2, 0, 0, 0, 0},
	        {0, 0, 9, 8, 0, 0, 0, 3, 6},
	        {0, 0, 0, 3, 0, 6, 0, 9, 0}
	    },
	    {
	        // Difícil 
	        {0, 0, 0, 6, 0, 0, 4, 0, 0},
	        {7, 0, 0, 0, 0, 3, 6, 0, 0},
        	{0, 0, 0, 0, 9, 1, 0, 8, 0},
        	{0, 0, 0, 0, 0, 0, 0, 0, 0},
        	{0, 5, 0, 1, 8, 0, 0, 0, 3},
        	{0, 0, 0, 3, 0, 6, 0, 4, 5},
        	{0, 4, 0, 2, 0, 0, 0, 6, 0},
        	{9, 0, 3, 0, 0, 0, 0, 0, 0},
        	{0, 2, 0, 0, 0, 0, 1, 0, 0}
    	}
};


void pegarSudoku(int tabuleiro[9][9] , int dif){
		
	for(int linha=0; linha <9; linha++){
		for(int coluna = 0; coluna < 9; coluna++){
			tabuleiro[linha][coluna] = tabuleiros[dif-1][linha][coluna];	
		}
	}
	
}

void mostrarTabuleiro(int tabuleiro[9][9]){
	
	printf("================================================================\n");
	printf("\t");
	for(int i = 0; i < 9; i++){
		printf("%d  " , i+1);
	}
	printf("\n\n");
	
	
	for(int linha = 0; linha < 9; linha++){
		
		if(linha!=0) {
			printf("\n");	
		}
		
		printf("%d\t" , linha+1);
		
		for(int coluna = 0; coluna < 9; coluna++){
			
			if(tabuleiro[linha][coluna] == 0){
				printf("_  ");	
			}else {
				printf("%d  " , tabuleiro[linha][coluna]);
			}
			
		}
	}
	
	
	printf("\n\n");
	printf("================================================================");
}

int verficarSudoku(int tabuleiro[9][9]){
    
	int completo = 1;
    for (int linha = 0; linha < 9; linha++) {
        int visto[10] = {0}; 
        
        for (int coluna = 0; coluna < 9; coluna++) {
            int numero = tabuleiro[linha][coluna];
            if (numero == 0){
            	completo = 0;
            	continue;
			}; 
            
            if (visto[numero] == 1) return 0;
            visto[numero] = 1; 
        }
    }

    for (int coluna = 0; coluna < 9; coluna++) {
        int visto[10] = {0}; 
        
        for (int linha = 0; linha < 9; linha++) {
            int numero = tabuleiro[linha][coluna];
            if (numero == 0) {
            	completo = 0;
            	continue;
			} 
            
            if (visto[numero] == 1) return 0;
            visto[numero] = 1; 
        }
    }

    for (int blocoLinha = 0; blocoLinha < 9; blocoLinha += 3) {
        for (int blocoColuna = 0; blocoColuna < 9; blocoColuna += 3) {
            
            int visto[10] = {0}; 
            
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int numero = tabuleiro[blocoLinha + i][blocoColuna + j];
                    if (numero == 0) {
                    	completo = 0;
            			continue;
					}
                    
                    if (visto[numero] == 1) return 0;
                    visto[numero] = 1;
                }
            }
            
        }
    }

	if(completo == 1){
		return 2;
	}
	
	
    return 1; 
}
	

int main(void){
	
	
	int dif;
	printf("Escolha a dificuldade:\n1-Facil\n2-Medio\n3-Dificil\n");
	scanf("%d" , &dif);
	
	int tabuleiro[9][9];
	
	pegarSudoku(tabuleiro , dif);
	
	
	printf("\n\n");
	int linha , coluna , numero , aux;
	int ver = -1;
	
	while(1){
		printf("\n\n\n");
		
		if(ver==0){
			printf("\nNUMERO DIGITADO ERRADO!\n\n");
		}
		if(ver==1){
			printf("\nNUMERO DIGITADO CORRETO!\n\n");
		}
		if(ver==2){
			printf("\nNAO PODE COLOCAR NUMERO AQUI!\n\n");
		}
		mostrarTabuleiro(tabuleiro);
	
		printf("\n\n");
	
		printf("Digite a linha que deseja adicionar um numero:\n");
		scanf("%d" , &linha);
		
		printf("Digite a coluna que deseja adicionar um numero:\n");
		scanf("%d" , &coluna);
		
		if(tabuleiros[dif-1][linha-1][coluna-1] != 0){
			ver=2;
			continue;
		}
		
		printf("Digite o numero que deseja adcionar:\n");
		scanf("%d" , &numero);
		
		
		aux = tabuleiro[linha-1][coluna-1];
		tabuleiro[linha-1][coluna-1] = numero;
		
		ver = verficarSudoku(tabuleiro);
		
		if(ver == 0){
			tabuleiro[linha-1][coluna-1] = aux;
		}
		
		if(ver == 2){
			break;
		}
			
	}
	
	printf("\n\nPARABENS, VOCE VENCEU!!!");	

}
