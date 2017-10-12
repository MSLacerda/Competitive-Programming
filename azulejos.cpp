#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n, a, b, count1, count2;
	while (1) {
		count1 = 0;
		count2 = 0;
		scanf("%Ld %Ld %Ld", &n, &a, &b);
		if (!(a && b && n)) break;
		for (int i = 1; i <= n/2; i++){
			if ((i % a) == 0) count1++;
			if ((i % b) == 0) count2++;
		}
		
		printf("%Ld\n", (count1*2) + (count2*2));
	}
	return 0;
}
