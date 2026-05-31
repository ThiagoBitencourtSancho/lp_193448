#include <stdio.h>

int main() {
    int n, i;
    int f1, f2, resto;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d %d", &f1, &f2);
        
        while (f2 != 0) {
            resto = f1 % f2;
            f1 = f2;
            f2 = resto;
        }
        
        printf("%d\n", f1);
    }
    
    return 0;
}
