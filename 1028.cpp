#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%lld", &a)
#define sc2(a, b) scanf("%lld %lld", &a, &b)
#define LLI long long int
#define ULL unsigned long int;

int mdc(int num1, int num2){
	int resto;

	do{

		resto = num1 % num2;
		num1 = num2;
		num2 = resto;

	}while(resto != 0);

	return num1;

}

int main(int argc, char const *argv[])
{
	int x, n1, n2;
	scanf("%d", &x);
	fr(i, 0 ,x){
		scanf("%d %d", &n1, &n2);
		printf("%d\n",mdc(n1,n2));
	}
	return 0;
}


