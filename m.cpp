#include <iostream>
#include <stdlib.h>


using namespace std;

struct Matrix {
    int h;
    int l;
};
typedef struct Matrix matrix;

int main() {
    int x;
    cin >> x;
    matrix *a = (matrix *) malloc(x*sizeof(matrix));
    for (int i = 0; i < x;i++)
        cin>>a[i].h>>a[i].l;
    
    for (int i=0; i < x ;i++)
    {
        cout << (((int) a[i].h/3) * ((int) a[i].l/3)) << endl;
    }


    return 0;
}