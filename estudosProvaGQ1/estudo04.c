#include <stdlib.h>
#include <stdio.h>

//  deverá imprimir o maior valor ímpar do vetor, ou a
// mensagem “Não há números ímpares no vetor” 

void imprimirMaiorImpar(int v[], int n){
    int maiorimpar = 0;
    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 1 && v[i] > maiorimpar){
            maiorimpar = v[i];
        }
    }
    if(maiorimpar == 0){
        printf("Não há números ímpares no vetor");
    } else {
        printf("%d", maiorimpar);
    }
}

int main(){        // <-- main depois da função
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    for(int i = 0; i < n; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    imprimirMaiorImpar(v, n);

    return 0;
}

