#include <stdio.h>
#include <stdlib.h>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d %d", &a, &b)
#define LLI long long int

#define M 1000
int r[M];
int netos = 0;

int max(int a, int b){
    if ((a+b)%netos == 0) return 1;
    return 0;
}

int memoAux(int *p, int n);

int memoCutStaws(int* pc,int n) {
    fr(i,0, n){
        r[i] = -1;
    }

    return memoAux(pc, n);
}


int memoAux(int *pc, int n) {
    int q = -1;
    if (r[n] > 0) return r[n];

    if (n == 0)
        q = 0;

    else {
        q = -1;
        fr(i,1,n){
            q = max(q, pc[i] + memoAux(pc, n - i));
        }
        r[n] = q;
    }

    return q;
}

int main () {
    int x, y, *n;
    
    while (sc2(netos, y) != EOF){
        n = (int *) malloc(y*sizeof(int));
        fr (i,0,y) {
            scanf("%d", &n[i]);
        }
        memoCutStaws(n, y);
        fr (j, 0, y) {
            printf("%d\n", r[j]);
        }
    }
    
    return 0;
}

