#include <stdio.h>

int main()
{
    int n;
    scanf("%d" , &n);
    
    int numeros[n];
    
    
    scanf("%d" , &numeros[0]);
    int menor = numeros[0];
    int posicao = 0;
    
    
    for(int cont = 1; cont<n; cont++){
        scanf("%d" , &numeros[cont]);
        if(numeros[cont]<menor){
            menor = numeros[cont];
            posicao = cont;
        }
    }
    
    printf("Menor valor: %d\n" , menor);
    printf("Posicao: %d\n" , posicao);
    
    
}
