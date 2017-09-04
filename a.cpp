#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '1'){
            count++;
        }
    }
    if (count%2 == 0 || count == 0){
        s.push_back('0');
    }else{
        s.push_back('1');
    }

    cout << s << endl;
}