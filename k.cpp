#include <iostream>
#include <stdio.h>

int mmc(int num1, int num2) {

    int resto, a, b;

    a = num1;
    b = num2;

    do {
        resto = a % b;

        a = b;
        b = resto;

    } while (resto != 0);

    return ( num1 * num2) / a;
}

int mdc(int a, int b){
    int z = -1;
    while (z !=0){
        z = a % b;
        a = b;
        b = z;
    }

    return a;
}

int main() {
    int a,b,c,d, fmmc;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (b == d) {
        printf("%d %d\n", (a+c)/mdc(a+c, d), d/mdc(a+c, d));
    }else{
        fmmc = mmc(b, d);
        a = (fmmc/b) * a;   
        c = (fmmc/d) * c;

        printf("%d %d\n",(a+c)/mdc(a+c, fmmc), fmmc/mdc(a+c, fmmc));
    }
}