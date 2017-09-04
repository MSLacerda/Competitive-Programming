#include <iostream>
#include <stdlib.h>
#define fr(a,b,c) for(int a=b; a < c; a++)
#define sc1(a) cin >> a;
#define sc2(a, b) cin >> a >> b
#define mi(a, b) int *a = (int *) malloc(b*sizeof(int));

using namespace std;


int main () {

    int x,y;
    cin >> x;

    mi(a,x);
    fr(i, 0 ,x){
        cin >> y;
        if (y%4 == 0) a[i] == 1;
        else if (y%4 == 1) a[i] == 7;
        else if (y%4 == 2) a[i] == 9;
        else if (y%4 == 3) a[i] == 3;
    }

    fr (i, 0 ,x) cout << a[i] << endl;


    return 0;
} 
