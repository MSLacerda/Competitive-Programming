#include <iostream>

using namespace std;


int main () {
    int a[3];
    int b[2];

    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1];

    if (((a[1] <= b[0])&&(a[0] <= b[1])) || ((a[1] <= b[1])&&(a[0] <= b[0])) || ((a[2] <= b[1])&&(a[0]<=b[0])) || ((a[1] <= b[1])&&(a[2] <= b[0])) || ((a[0] <= b[1]) && (a[2] <= b[0]))){
        cout << 'S' << endl;
    }else {
        cout << 'N' << endl;
    }

    return 0;
}