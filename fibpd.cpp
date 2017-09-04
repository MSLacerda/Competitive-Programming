#include <stdio.h>
#include <climits>
#include <string.h>
#include <math.h>

#define MAX (int) pow(2, 61)


int *memo = (int *) (MAX * sizeof(int));
int count = 0;
int b = 0;
int fib(long long int n)
{
    count = (count+1)%b;
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (memo[n] == -1)
        memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}

int main()
{
    long long int a, res;
    int i = 0;
    memo[0] = 0;
    memo[1] = 1;
    while(scanf("%lld %d", &a, &b)) {
        i++;
        if (a == 0 && b == 0) break;
        memset(memo, -1, 1000000);
        count = 0;
        fib(a);
        printf("Case %d: %lld %d %d\n",i,a,b, count);
    }
   
   return 0;
}