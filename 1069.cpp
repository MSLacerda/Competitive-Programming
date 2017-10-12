#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%lld %lld", &a, &b)
#define LLI long long int
#define ULL unsigned long int;

using namespace std;

int makeDiamond(string str){
	int a,b = 0;
	string str2;
	a = b;
	int result = 0;

	do{
		if (str.at(0) == '<') a++;
		if (str.at(0) == '>' && a > 0) {
			result++;
			a--;
		}
		str.erase(str.begin());
	}while(str.empty() != 1);
	
	// if (a == b) return a;
	// else if (a > b) return a-(a-b);
	// else return b-(b-a);
	return result;
}

int main(int argc, char const *argv[])
{
	string a;
	int n;
	sc1(n);
	fr(i,0,n){
		cin >> a;
		printf("%d\n", makeDiamond(a));
	}
	
	return 0;
}


