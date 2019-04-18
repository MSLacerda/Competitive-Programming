#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int x,y;

    scanf("%d %d", &x, &y);

    int maxNum = max(x,y);
    int minNum = min(x,y);  

    int sum = 0; 

    for (int i = minNum; i <= maxNum; i++) {
        if ((i % 13) != 0)
            sum += i;
    }

    printf("%d\n", sum);
    return 0;
}
