#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <list>
#include <vector>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%lld", &a)
#define sc2(a, b) scanf("%lld %lld", &a, &b)
#define LLI long long int
#define ULL unsigned long int;

using namespace std;

int flavious(int n, int k){
	int r = 0;

	for (int i = 1; i < n; ++i)
	{
		r = (r + k)%i;
	}
	return r;
}

int main(int argc, char const *argv[])
{
	vector<int> pwrs;
	int a,aux,salts,i = 0;
	salts = 1;
	aux = 0;
	while(scanf("%d", &a)){
		if (a == 0) break;
		salts = 1;
		for (;;)
		{
			int aux = flavious(a, salts);
			if (aux != 11){
				salts++;
			}else break;
		}
		printf("%d\n", salts);
	}

	return 0;
}


