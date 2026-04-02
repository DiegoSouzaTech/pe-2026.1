#include <stdio.h>

#define TAMANHO 5 

int main() {
    int v[5];
    int i;

    printf("Digite 5 numeros inteiros:\n", v[5]);

    for(int i = 0; i < 5; i++){
        scanf("%d", &v[i]);
    }

    printf("Seus numeros digitados foram...\n");
    
    for(int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }

    printf("\n");

    return
}

