#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	int a,b,c,d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a < c){
		if ((c-a) == 1 && b > d){
			printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", abs(b-d-60));
		}else{
			printf("O JOGO DUROU %d HORA(S) E ", c-a);
			if (b == d) {
				printf("0 MINUTO(S)\n");
			}else{
				if ((b-d) < 0) printf("%d MINUTO(S)\n", (b-d)*-1);
				else printf("%d MINUTO(S)\n", (b-d));
			}
		}
	}

	if (a == c){
		
		if (b == d) {
			printf("O JOGO DUROU 24 HORA(S) E ");
			printf("0 MINUTO(S)\n");
		}else if (b > d){
			printf("O JOGO DUROU 23 HORA(S) E ");
			printf("%d MINUTO(S)\n", abs(b-d-60));
		}else{
			printf("O JOGO DUROU 0 HORA(S) E ");
			if ((b-d) < 0) printf("%d MINUTO(S)\n", abs(b-d));
			else printf("%d MINUTO(S)\n", (b-d));
		}
	}

	if (a > c) {
		if (abs(a-c-24) == 1 && b > d){
			printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", abs(b-d-60));
		}else{
			
			if (b < d) printf("O JOGO DUROU %d HORA(S) E ", abs(a-c-24));
			else if (b > d) printf("O JOGO DUROU %d HORA(S) E ", abs(a-c-24) - 1);

			if (b == d) {
				printf("0 MINUTO(S)\n");
			}else if(b > d) {
				printf("%d MINUTO(S)\n", abs(b-d-60));
			}else{
				if ((b-d) < 0) printf("%d MINUTO(S)\n", (b-d)*-1);
				else printf("%d MINUTO(S)\n", (b-d));
			}
		}
	}
	return 0;
}