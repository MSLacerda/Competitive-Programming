#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cmath>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d %d", &a, &b)
typedef long long int lli;
typedef unsigned long long ull;

using namespace std;

int isPrimo(int n){
	int count = 0;
	if (n == 2) return 1;
	if (n == 1 || n == 0) return 0;
	for (int i = 2; i <= sqrt(n); ++i){ 
		if (n%i == 0){ 
			count++;
		}
	}
	if (count >= 1) return 0;
	else return 1;
}


int main(int argc, char const *argv[])
{
	int a, aux,prime, super, count;
	while(sc1(a) != EOF) {
		prime = super = 0;
		aux = a;
		count = 1;
		if (isPrimo(a)) {
			prime = 1;
			while(aux > 9){
				count++;
				if (isPrimo(aux%10)) super++;
				else super--;
				aux = aux/10;
			}
			if (isPrimo(aux)) super++;
			else super--;
		}
		if (prime && (super == count)) printf("Super\n");
		else if(prime) printf("Primo\n");
		else printf("Nada\n");
	}
	return 0;
}


