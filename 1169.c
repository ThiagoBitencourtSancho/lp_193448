#include <stdio.h>

int main() {
    int n, i, j, x;
    unsigned long long soma, atual, kg;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        
        soma = 0;
        atual = 1;
        
        for (j = 0; j < x; j++) {
            soma = soma + atual;
            atual = atual * 2;
        }
        
        kg = soma / 12000;
        
        printf("%llu kg\n", kg);
    }
    
    return 0;
}
