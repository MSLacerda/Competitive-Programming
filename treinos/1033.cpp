#include <bits/stdc++.h>
using namespace std;
 
long unsigned int *MAX;
long int count = 0;

int fib(long unsigned int n)
    	count++;
	if (n == 0)
        	return 0;
    	if (n == 1 || n == 2)
        	return (f[n] = 1);
    	if (f[n])
        	return f[n];
 
    	int k = (n & 1)? (n+1)/2 : n/2;
 
    	f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);
 
    	return f[n];
}

int main(){
	long unsigned int n,b;
	
	while(1) {
		count = 0;	
		scanf("%ld %ld", &n, &b);
		memset(MAX, 0, n);

		if (!(a && b)) break;
		printf("%ld\n", count); 	
	}

   	printf("%d ", fib(n));
    	return 0;
}
