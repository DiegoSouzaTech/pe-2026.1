#include <stdio.h>

#define TAMANHO 5

int main(){
    int v[5], soma = 0;

    printf("Digite 5 numeros interios:\n");

    for(int i = 0; i < 5; i++){
        printf("Numero %d: " , i + 1);
        scanf("%d" , &v[i]);
        soma += v[i];
    }

    printf("Soma = %d\n", soma);
    return 0;
}