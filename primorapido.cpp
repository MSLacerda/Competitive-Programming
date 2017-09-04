#include <stdio.h>
#include <math.h>

int isPrime(long long int b)
{
    long long int d = 2;
    while (d <= sqrt(b)){
        if (b % d == 0) {
            return 0;
        }
        d++;
    }
    return 1;
}

int main()
{
    int n;
    long long int x;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &x);
        if (x == 1) printf("Not Prime\n");
        else if (isPrime(x)) printf("Prime\n");
        else printf("Not Prime\n");
    }

    return 0;
}