#include <stdio.h>
#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d %d", &a, &b)
#define sc3(a, b, c) scanf("%d %d %d", &a, &b, &c);
#define sc4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)
#define LLI long long int

int pathSearch(int x1, int x2, int y1, int y2)
{
    int auX, auY, auX2, auY2;

    auX = auX2 = x1;
    auY = auY2 = y1;

    if (x1 == x2 && y1 == y2)
        return 0;

    if (x1 == x2 || y1 == y2)
        return 1;

    for (int i = 0; i < 8 - y1; i++)
    {
        auX--;
        auY++;
        auX2++;
        auY2++;
        if (auX == x2 && auY == y2)
            return 1;
        if (auX2 == x2 && auY2 == y2)
            return 1;
    }
    auX = auX2 = x1;
    auY = auY2 = y1;
    for (int i = y1; i > 0; i--)
    {
        auX--;
        auY--;
        auX2++;
        auY2--;
        if (auX == x2 && auY == y2)
            return 1;
        if (auX2 == x2 && auY2 == y2)
            return 1;
    }
    return 2;
}

int main()
{
    int x1, y1, x2, y2;

    while (1)
    {
        sc4(x1, y1, x2, y2);

        if ((x1 == x2) && (y1 == y2) && y2 == 0)
            break;

        printf("%d\n", pathSearch(x1, x2, y1, y2));
    }

    return 0;
}