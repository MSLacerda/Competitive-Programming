
#include <iostream>
#include <climits>
#include <stdio.h>
#define fr(i, a, v) for (int i = a; i < v; i++)
using namespace std;

int main()
{

    int x, y;
    scanf("%d", &x);
    fr (i, 0, x)
    {
        scanf("%d", &y);
        if (y == 1) printf("7\n");
        else if (y % 4 == 0) printf("1\n") ;
        else if (y % 4 == 1) printf("7\n") ;
        else if (y % 4 == 2) printf("9\n") ;
        else if (y % 4 == 3) printf("3\n") ;
    }
    return 0;
}
