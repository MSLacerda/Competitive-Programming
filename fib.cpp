#include <stdio.h>
#include <stdlib.h>

int count = 0;

int fib(int n, int *vet) {
    if (vet[n] > -1) return vet[n];

    if (n == 0) {
        return 0;
    }
    else if (n == 1) return 1; 

    count++;
    vet[n] = fib(n-1, vet) + fib(n-2, vet);

    return vet[n];
}

int main() {
    int cases, tam;
    int *x;
    scanf("%d", &cases);

    for (int i = 0; i < cases; ++i) {
        scanf("%d", &tam);
        x = (int *) malloc(tam * sizeof(int));
        for (int j = 0; j < tam; j++) x[j] = -1;
        printf("%d %d\n", fib(tam, x), count);
    }

    return 0;
}