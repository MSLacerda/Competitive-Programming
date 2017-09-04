#include <iostream>
#include <vector>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *a = (int *) malloc(sizeof(int)*n);

    for (int i=0;i<n;i++){
        cin >> a[i];
    }

    for (int i=0; i<n; i++){
        if(a[i] == 1){
            cout << 7 << endl;
        }else if (a[i]%2 == 0){
            cout << 9 << endl;
        }else if(a[i]%3 == 0){
            cout << 3 << endl;
        }else if(a[i]%4 == 0){
            cout << 1 << endl;
        }else if(a[i]%5 == 0){
            cout << 7 << endl;
        }
    }

    return 0;
}