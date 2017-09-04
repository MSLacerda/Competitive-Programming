#include <stdio.h>


int main(int argc, char const *argv[])
{	
	float n1, n2, n3 ,n4, media, mediaavf, avf; 

	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

	media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10.0;
	printf("Media: %.1f\n", media);
	if (media >= 7.0) printf("Aluno aprovado.\n");
	if (media < 5.0) printf("Aluno reprovado.\n");
	if (media >= 5.0 && media < 7.0){
		scanf("%f", &avf);
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1f\n", avf);
		mediaavf = (avf + media)/2;
		if (media >= 5) printf("Aluno aprovado.\nMedia final: %.1f\n", mediaavf);
		else printf("Aluno reprovado.\nMedia final: %.1f\n", mediaavf);
	}


	/* code */
	return 0;
}