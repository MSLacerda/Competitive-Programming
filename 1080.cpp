// Leia 100 valores inteiros. Apresente então o maior valor lido e a 
// posição dentre os 100 valores lidos.

// Entrada
// O arquivo de entrada contém 100 números inteiros, positivos e 
// distintos.

// Saída
// Apresente o maior valor lido e a posição de entrada, conforme 
// exemplo abaixo.

#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int max = -99999;
    int pos = 0;
    int temp;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &temp);

        if (temp > max) {
            max = temp;
            pos = i;
        }
    }



    printf("%d\n%d\n", max, pos);
    return 0;
}
