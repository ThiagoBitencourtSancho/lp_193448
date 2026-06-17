#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int N;

    while (scanf("%d", &N) && N != 0) {
        
        for (int linha = 0; linha < N; linha++) {
            for (int coluna = 0; coluna < N; coluna++) {
                
                int distCima = linha;
                int distBaixo = (N - 1) - linha;
                int distEsq = coluna;
                int distDir = (N - 1) - coluna;
                
                int menorVertical = min(distCima, distBaixo);
                int menorHorizontal = min(distEsq, distDir);
                int valor = min(menorVertical, menorHorizontal) + 1;
                
                if (coluna == 0) {
                    printf("%3d", valor);
                } else {
                    printf(" %3d", valor);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
