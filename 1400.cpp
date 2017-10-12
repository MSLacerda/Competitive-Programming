#include <bits/stdc++.h>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d %d", &a, &b)
typedef long long int lli;
typedef unsigned long long ull;

using namespace std;

int hasSeven(int n){
	int aux = n;
	if (aux == 7) return 1;
	while (aux > 9){
		if (aux%10 == 7) return 1;
		aux = aux/10;
	}
	return 0;
}


int main(int argc, char const *argv[])
{
	
}

