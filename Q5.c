/*#include <stdio.h>

int main() {
    int n, d;
    scanf("%d", &n);
    int vetor[8];

    if (n > 0 && n <= 255){
        for (int i = 0; i < 8; i++){
            d = n%2;
            vetor[i] = d;
            n = n/2;
        }
        for (int j = 8; j > 0; j--){
            printf("%d", vetor[j]);
        }
    }else{
        printf("Número %d não suportado!!", n);
    }
    return 0;
}*/