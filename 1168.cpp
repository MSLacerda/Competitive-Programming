#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <list>
#include <iostream>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d %d", &a, &b)
typedef long long int lli;
typedef unsigned long long ull;

using namespace std;

int num(string value){
	int sum = 0;
	fr(i, 0 ,value.size()) {
		if (value.at(i) == '1') sum+=2;
		if (value.at(i) == '2' || value.at(i) == '3' || value.at(i) == '5') sum+=5;
		if (value.at(i) == '4') sum+=4;
		if (value.at(i) == '6' || value.at(i) == '9' || value.at(i) == '0') sum+=6;
		if (value.at(i) == '7') sum+=3;
		if (value.at(i) == '8') sum+=7;
	}

	return sum;
}

int main(int argc, char const *argv[])
{

	int n;
	string vl;
	sc1(n);
	fr(i,0,n){
		cin >> vl;
		printf("%d leds\n", num(vl));
	}
	return 0;
}


