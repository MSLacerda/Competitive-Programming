#include <stdio.h>
#include <vector>
#include <stdlib.h>
using namespace std;

int calc(int a, int salts) {
	int res = 0;
	for (int i = 2; i <= a; i++)
	{
		res = (res + salts) % i;
	}
	res++;
	return res;
}

int main(int argc, char const *argv[])
{
	int cases,a,b,c = 1;
	scanf("%d", &cases);
	while (c <= cases){
		scanf("%d %d", &a, &b);
		printf("Case %d: %d\n",c, calc(a, b));
		c++;
	}	
}