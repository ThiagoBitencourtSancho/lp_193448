#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
    int repeticoes;
    
    scanf("%d" , &repeticoes);
    getchar();
    
    for(int i = 1; i <= repeticoes; i++){
        char sentenca[1001] = {0};
    
        fgets(sentenca , 1001 , stdin);
        sentenca[strcspn(sentenca , "\n")] = '\0';
        for(int posicao = 0; posicao < strlen(sentenca); posicao++){
            char letra = sentenca[posicao];
            if(isalpha(letra)){
               sentenca[posicao] = letra + 3; 
            }
        }
        
        char sentencaIn[1001] = {0};
        int aux = strlen(sentenca) - 1;
        
        for(int posicao = 0; posicao < strlen(sentenca); posicao++){
            sentencaIn[posicao] = sentenca[aux];
            aux--;
        }
        
        double metade = trunc(strlen(sentenca)/2);
        
        for(int posicao = (int) metade; posicao < strlen(sentenca); posicao++){
            
            sentencaIn[posicao] = sentencaIn[posicao] - 1;
        }
        
        printf("%s\n" , sentencaIn);
    }
    
    return 0;
}
