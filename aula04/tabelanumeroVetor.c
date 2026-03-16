#include <stdio.h>
#include <stdlib.h>

#define MAX_TAM 10

void imprimir(double v[], int n);
void inserirOrdenado(double v[], int n, double x);
void insercaoDireta (double v[], int n);
void selecaoDireta (double v[], int n);
void preencherOrdenadoDigitacao(double v[], int n);
void preencherAleatorio(double v[], int n);
void tabelaFrequencia(double v[], int n);

int main() {

    double numeros[MAX_TAM];

    srand(9);

    preencherAleatorio(numeros, MAX_TAM);

    printf("Vetor gerado:\n");
    imprimir(numeros, MAX_TAM);

    printf("\nTabela de frequência:\n");
    tabelaFrequencia(numeros, MAX_TAM);

    printf("\nOrdenando com inserção direta...\n");
    insercaoDireta(numeros, MAX_TAM);

    imprimir(numeros, MAX_TAM);

    return 0;
}

void preencherAleatorio(double v[], int n) {

    for (int i = 0; i < n; i++) {
        v[i] = (rand() % 10); // números de 0 a 9
    }

}

void imprimir(double v[], int n) {

    for (int i = 0; i < n; i++) {
        printf("%.0lf ", v[i]);
    }

    printf("\n");
}

void tabelaFrequencia(double v[], int n) {

    int cont[10] = {0};
    int num;

    for (int i = 0; i < n; i++) {

        num = (int)v[i];
        cont[num]++;

    }

    for (int i = 0; i < 10; i++) {

        printf("%d = apareceu %d vezes\n", i, cont[i]);

    }
}

void inserirOrdenado(double v[], int n, double x) {

    int pos = n;

    while (pos > 0 && v[pos - 1] > x) {
        v[pos] = v[pos - 1];
        pos--;
    }

    v[pos] = x;

}

void insercaoDireta (double v[], int n) {

    int i, j;
    double chave;

    for (i = 1; i <= n - 1; i++) {

        chave = v[i];
        j = i - 1;

        while (j >= 0 && v[j] > chave) {
            v[j+1] = v[j];
            j--;
        }

        v[j+1] = chave;

    }
}

void selecaoDireta (double v[], int n) {

    int i, j, menor;
    double aux;

    for (i = 0; i < n - 1; i++) {

        menor = i;

        for (j = i + 1; j < n; j++) {

            if (v[j] < v[menor]) {
                menor = j;
            }

        }

        aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;

    }
}