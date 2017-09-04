#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>

#define alc(c, x) int *c = (int *)malloc(x * sizeof(int))
#define fr(i, a, v) for (int i = a; i < v; i++)

using namespace std;

int main () { 
    int cases, x, y, tempx, tempy;
    while (1) {
        scanf("%d", &cases);
        if (cases == 0) break;
        scanf("%d %d", &x, &y);
        fr(i, 0, cases){
            scanf("%d %d", &tempx, &tempy);
            if (tempx == x || tempy == y) printf("divisa\n");
            if (tempx > x && tempy > y) printf("NE\n");
            else if (tempx > x && tempy < y) printf("SE\n");
            else if (tempx < x && tempy < y) printf("SO\n");
            else if (tempx < x && tempy > y) printf("NO\n");
            else if (tempx > x && tempy > y) printf("NE\n");
        }
    }

    return 0;
}