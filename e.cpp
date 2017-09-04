#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
    int x;
    string a,b;
    cin >> x;
    int *s = (int *) malloc(x * sizeof(int));
    
    for (int i = 0; i < x; i++){
        cin >> a >> b;
        if (a == b)
            s[i] = 0;
        else if (a == "tesoura" && (b == "papel" || b == "lagarto"))
            s[i] = 1;
        else if (a == "papel" && (b == "pedra" || b == "Spock"))
            s[i] = 1;
        else if (a == "pedra" && (b == "lagarto" || b == "tesoura"))
            s[i] = 1;
        else if (a == "lagarto" && (b == "Spock" || b == "papel"))
            s[i] = 1;
        else if (a == "Spock" && (b == "tesoura" || b == "pedra"))
            s[i] = 1;
        else
            s[i] = 2;
    }
    
    for (int i = 0; i < x; i++){
        if (s[i] == 0) cout << "Caso #"<<i+1<<": De novo!" << endl;
        else if (s[i] == 1) cout << "Caso #"<<i+1<<": Bazinga!" << endl;
        else if (s[i] == 2) cout << "Caso #"<<i+1<<": Raj trapaceou!" << endl;        
    }

    return 0;

}