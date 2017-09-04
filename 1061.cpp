#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int dia1,hr1,min1,sec1,dia2,hr2,min2,sec2;
	long int res;
	char a[3];

	scanf("%s %d", a, &dia1);
	scanf("%d %c %d %c %d", &hr1, &a[0], &min1, &a[1], &sec1);
	scanf("%s %d", a, &dia2);
	scanf("%d %c %d %c %d", &hr2, &a[0], &min2, &a[1], &sec2);
	res = (dia2*86400 + hr2*3600 + min2*60 + sec2) - (dia1 * 86400 + hr1 * 3600 + min1 * 60 + sec1);

	printf("%ld dia(s)\n",  res/86400);
	printf("%ld hora(s)\n",  (res%86400)/3600);
	printf("%ld minuto(s)\n", ((res%86400)%3600)/60);
	printf("%ld segundo(s)\n", ((res%86400)%3600)%60);
}