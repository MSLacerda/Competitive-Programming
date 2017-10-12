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

	long long int a;
	scanf("%Ld", &a);
	printf("%Ld\n",a%3);
}


