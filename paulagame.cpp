#include <stdio.h>
#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d %d", &a, &b)
#define sc3(a, b, c) scanf("%d %d %d", &a, &b, &c);
#define sc4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)
#define LLI long long int

int main()
{
    int x1, x2, n;
    char c;
    scanf("%d", &n);
    for (int i = 0;i < n;i++){
        scanf("%d%c%d", &x2, &c, &x1);
        if (x2 == x1) printf("%d\n", x1*x2);
        else if (int(c) >= 65 && int(c) <= 90)  printf("%d\n", x1-x2);
        else if (int(c) >= 97 && int(c) <= 122) printf("%d\n", x1+x2);
    }

    return 0;
}