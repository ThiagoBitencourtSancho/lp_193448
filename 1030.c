#include <stdio.h>

int main()
{
    int entradas;
   
    scanf("%d" , &entradas);
   
    for(int i = 1; i<=entradas; entradas++){
        int numero , passo;
   
   
        scanf("%d" , &numero);
        scanf("%d" , &passo);
       
       
        int soldados[numero];
       
        for(int i = 0; i<numero;i++){
            soldados[i] = 1;
        }
       
        int atual = 0;
        int contador = numero;
        while(contador!=1){
            int ver = 0;
            int aux = 0;
            while(aux!=passo){
               
                for(int pessoa = atual; pessoa<numero; pessoa++){
                    if(soldados[pessoa] == 1){
                        aux++;
                    }
                    if(aux==passo){
                        ver = 1;
                        soldados[pessoa]=0;
                        atual = pessoa;
                        break;
                    }
                }
               
                if(ver == 0){
                    atual = 0;
                }
               
               
            }
           
           
           
           
            contador--;
        }
       
        for(int pessoa=0; pessoa<numero;pessoa++){
            if(soldados[pessoa] == 1){
                printf("Case %d: %d\n" , i , pessoa + 1);
                break;
            }
        }

   
    }
   
}
