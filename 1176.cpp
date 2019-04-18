#include <bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    long long int temp;
    scanf("%d", &n);

    for (int i = 2; i <= 60 ; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &temp);

        printf("Fib(%lld) = %lld\n", temp, fib(temp));
    }

    return 0;
}
