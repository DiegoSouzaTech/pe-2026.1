#include <stdio.h>

#define MAX 50

void imprimir(int v[], int n) {
    if (!n) { printf("Vetor vazio.\n"); return; }
    for (int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n");
}

int buscaBinaria(int v[], int n, int x) {
    int ini = 0, fim = n - 1;
    while (ini <= fim) {
        int m = (ini + fim) / 2;
        if (v[m] == x) return m;
        (x < v[m]) ? (fim = m - 1) : (ini = m + 1);
    }
    return -1;
}

int inserirOrdenado(int v[], int *n, int x) {
    if (*n >= MAX) return 0;
    int i = *n - 1;
    while (i >= 0 && v[i] > x) v[i + 1] = v[i--];
    v[i + 1] = x;
    (*n)++;
    return 1;
}

void remover(int v[], int *n, int x) {
    int pos = buscaBinaria(v, *n, x);
    if (pos == -1) return;
    for (int i = pos; i < *n - 1; i++) v[i] = v[i + 1];
    (*n)--;
}

int main() {
    int v[MAX], n = 0, capacidade, qtd, op, x;

    do {
        printf("Tamanho (3-50): ");
        scanf("%d", &capacidade);
    } while (capacidade < 3 || capacidade > 50);

    do {
        printf("Qtd inicial: ");
        scanf("%d", &qtd);
    } while (qtd < 0 || qtd > capacidade);

    for (int i = 0; i < qtd; i++) {
        scanf("%d", &x);
        inserirOrdenado(v, &n, x);
    }

    do {
        printf("\n1-Imprimir 2-Buscar 3-Remover 4-Inserir 0-Sair\n");
        scanf("%d", &op);

        if (op == 1) imprimir(v, n);

        else if (op == 2) {
            scanf("%d", &x);
            int p = buscaBinaria(v, n, x);
            printf("%d\n", p);
        }

        else if (op == 3) {
            scanf("%d", &x);
            remover(v, &n, x);
        }

        else if (op == 4) {
            if (n < capacidade) {
                scanf("%d", &x);
                inserirOrdenado(v, &n, x);
            }
        }

    } while (op != 0);

    return 0;
}