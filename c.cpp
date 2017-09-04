#include <iostream>

using namespace std;

int main() {
    int a,count = 0;

    for (int i = 0; i < 4; i++) {
        cin >> a;
        count += a;
    }

    cout << count-3 << endl;

    return 0;
}