#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float d,vf,vg;
    float hp;

    while(scanf("%f %f %f", &d, &vf, &vg) != EOF) {
        hp = sqrt(d*d + 144);

        if (12/vf >= hp/vg) printf("S\n");
        else printf("N\n");

    }


    return 0;
}
