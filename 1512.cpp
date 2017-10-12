#include <bits/stdc++.h>

using namespace std;
long int mmc(long int num1, long int num2) {

    long int resto, a, b;

    a = num1;
    b = num2;

    do {
        resto = a % b;

        a = b;
        b = resto;

    } while (resto != 0);

    return ( num1 * num2) / a;
}

long int pa(long int n1, long int n2) { 
	 return (n1/n2);
}

int main() {
	long int a,b,c, res = 0;
	while(1) {
		scanf("%ld %ld %ld", &a, &b, &c);
		if (!(a && b && c)) break;
		res = pa(a, b) + pa(a, c);
		printf("%ld %ld %ld \n", res, mmc(a,b), mmc(a, c));
	}
	return 0;
}
