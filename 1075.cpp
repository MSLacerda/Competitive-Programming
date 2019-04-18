
// Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 
// que divididos por N dão resto igual a 2.

// Entrada
// A entrada contém um valor inteiro N (N < 10000).

// Saída
// Imprima todos valores que quando divididos por N dão resto = 2, um 
// por linha.

#include <bits/stdc++.h>


int main(int argc, char const *argv[])
{
    int max = 10000;
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= max; i++)
    {
        if (i % n == 2) {
            printf("%d\n", i);
        }
    }
        

    return 0;
}
