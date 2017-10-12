#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <list>
#include <vector>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d %d", &a, &b)
typedef long long int lli;
typedef unsigned long long ull;

using namespace std;


int main(int argc, char const *argv[])
{	
	lli a,b, aux,aux2,div;
	int n, flag;
	scanf("%d", &n);
	fr(i,0,n) {
		flag = 0;
		scanf("%Ld %Ld", &a, &b);
		aux = 0;
		aux2 = a;
		div = 10;
		while (aux <= a){
			aux = aux2%div;
			if (b == aux) {
				flag = 1;	
				break;
			}
			if (a == aux) break;
			div *= 10;
		}
		if (flag) printf("encaixa\n");
		else printf("nao encaixa\n");
	}	
}


