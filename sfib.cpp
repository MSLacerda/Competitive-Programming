#include <stdio.h>
#include <stdlib.h>

int count = -1;

int fib(int n)
{
    count++;
    if (n == 1)
        return 1;
    if (n == 0)
    {
        return 0;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int cases, tam, res;
    scanf("%d", &cases);

    for (int i = 0; i < cases; ++i)
    {
        count = -1;
        scanf("%d", &tam);
        res = fib(tam);
        printf("fib(%d) = %d calls = %d\n",tam, count, res);
    }

    return 0;
}