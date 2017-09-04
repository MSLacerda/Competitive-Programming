#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%lld", &a)
#define sc2(a, b) scanf("%lld %lld", &a, &b)
#define LLI long long int
#define ULL unsigned long int

int main () {
	LLI value1, value2;
	while(scanf("%lld %lld", &value1, &value2) != EOF) {
		printf("%lld\n", (value1 ^ value2) );
	}

	return 0;
}

