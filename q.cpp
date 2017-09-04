#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#define alc(c, x) int *c = (int *)malloc(x * sizeof(int))
#define fr(i, a, v) for (int i = a; i < v; i++)

typedef struct Ponto
{
    int e;
    char c;
    int d;
} ponto;

int main()
{
    int x, e, d, pr;
    ponto zero;
    char c;
    scanf("%d", &x);
    ponto *ls = (ponto *)malloc(200000 * sizeof(ponto));
    fr(i, 0, x)
    {
        scanf("%d %c %d", &e, &c, &d);

        
            ls[e].e = e;
            ls[e].c = c;
            ls[e].d = d;
        
    }


    pr = ls[0].d;
    printf("%c", ls[0].c);
    fr(i, 0, x) {
        printf("%c", ls[pr].c);
        pr = ls[pr].d;
    }
    printf("\n");
}