// Leia um valor inteiro N. Este valor será a quantidade de valores 
// que serão lidos em seguida. Para cada valor lido, mostre uma mensagem 
// em inglês dizendo se este valor lido é par (EVEN), ímpar (ODD), 
// positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser 
// igual a zero (0), embora a descrição correta seja (EVEN NULL), pois
// por definição zero é par, seu programa deverá imprimir apenas NULL.

// Entrada
// A primeira linha da entrada contém um valor inteiro N(N < 10000)
// que indica o número de casos de teste. Cada caso de teste a seguir 
//é um valor inteiro X (-107 < X <107).

// Saída
// Para cada caso, imprima uma mensagem correspondente, de acordo com 
// o exemplo abaixo. Todas as letras deverão ser maiúsculas e sempre
// deverá haver um espaço entre duas palavras impressas na mesma linha.


#include <bits/stdc++.h>

bool isEvenOrOdd(int n) 
{ 
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }


} 


int main(int argc, char const *argv[])
{
    int n;
    int temp; 
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);

        if (temp == 0) {
            printf("NULL\n");
        } else if (temp > 0) {
            if (isEvenOrOdd(temp) == 1) {
                printf("EVEN POSITIVE");
            } else {
                printf("ODD POSITIVE");
            }
            printf("\n");
        } else {
            if (isEvenOrOdd(temp * -1) == 1) {
                printf("EVEN NEGATIVE");
            } else {
                printf("ODD NEGATIVE");
            }
            printf("\n");
        }
    }
}