#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;

    while (1)
    {
        scanf("%d %d", &x, &y);

        if (x == 0 || y == 0)
            break;

        if (x > 0 and y > 0)
            cout << "primeiro";

        else if (x < 0 and y > 0)
            cout << "segundo";

        else if (x < 0 and y < 0)
            cout << "terceiro";

        else if (x > 0 and y < 0)
            cout << "quarto";

        cout << endl;
    }
}
