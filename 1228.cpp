#include <bits/stdc++.h>

using namespace std;

void printVet(int *v, int n) {
	printf("\n");
	for (int i = 0; i < n; i++) printf(" %d ", v[i]);
	printf("\n");
}


int main() {
	int a,*b,*c, pos, aux,flag, count;
	
	while(scanf("%d",&a) != EOF){
		c = (int *) malloc(a * sizeof(int));
		b = (int *) malloc(a * sizeof(int));
		count = 0;
		flag = 0;
		memset(c, 0, a);
		memset(b, 0, a);
		for (int i = 0; i < a; i++){
			scanf("%d", &b[i]);
		}

		for (int i = 0; i < a; i++) {
			scanf("%d", &c[i]);
		}
		
		for (int i = 0; i < a; i++) {
			pos = i;
			for (int j = 0; j < a; j++) {
				if (c[i] == b[j] && i != j) {
					pos = j;
					count++;		
				}
			}
			aux = c[i];
			c[i] = c[pos];
			c[pos] = aux;
		}	
		//if (count > 0) count--;
		printf("%d\n", count);	
		printVet(c, a);
	}
		
	return 0;
}
