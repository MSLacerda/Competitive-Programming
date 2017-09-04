#include <stdio.h>

int main(int argc, char const *argv[])
{
	float A, B, C;

	scanf("%f %f %f", &A, &B, &C);


	if ((((B - C) * -1) < A && A < (B + C)) && (((A - C) * -1) < B && B < (A + C)) && (((A - B) * -1) < C && C < (A + B))) {
		printf("Perimetro = %.1f\n", (A+B+C));
	}else{
		printf("Area = %.1f\n", ((A+B)*C)/2);
	}


	
	return 0;
}