#include <stdio.h> // Leia 6 números e mostre na tela

#define TAMANHO 6

int main() {
    int v[6];
    int i;

    printf("Digite 6 valores inteiros:\n", v[6]);

    for(int i = 0; i < 6; i++) {
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 6; i++) {
        printf("%d ", v[i]);
    }
    
    return 0;
   
}

