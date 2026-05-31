#include <stdio.h>

int main() {
    int h, maior;
    
    while (1) {
        scanf("%d", &h);
        
        if (h == 0) {
            break;
        }
        
        maior = h;
        
        while (h != 1) {
            if (h % 2 == 0) {
                h = h / 2;
            } else {
                h = 3 * h + 1;
            }
            
            if (h > maior) {
                maior = h;
            }
        }
        
        printf("%d\n", maior);
    }
    
    return 0;
}
