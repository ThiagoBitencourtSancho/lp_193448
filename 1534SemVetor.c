#include<stdio.h>

int main(void){
 int colunas;
	
 while(scanf("%d" , &colunas) != EOF){
  int posicao1 = 1;
  int posicao2 = colunas;
	
  for(int contadorLinha = 1; contadorLinha <= colunas; contadorLinha++){
   for(int posicaoLetra = 1; posicaoLetra <= colunas; posicaoLetra++){
   
    if((posicao1 == posicao2) && (posicao2 == posicaoLetra)){
     printf("2");
    }else{
     
     if(posicaoLetra == posicao1){
      printf("1");
     }else{
      if(posicaoLetra == posicao2){
      printf("2");
      }else{
      printf("3");
      }
     }
   
    
   
    }
    
   }
   printf("\n");
   posicao1++;
   posicao2--;
  }
 }
	
	
}
