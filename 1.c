#include <stdio.h>
#include <math.h>


int main(void) {
	int a, b, c, soma, media, d_p;
	printf("Digite três números: \n");
	scanf("%i %i %i", &a, &b, &c);

	soma = a+b+c;
	media = (a+b+c)/3;
	d_p = sqrt((pow(a-media, 2)+pow(b-media, 2)+pow(c-media, 2))/3);

	printf("Soma: %i\n", soma);
	printf("Media: %i\n", media);
	printf("Desvio Padrao: %i\n", d_p);

	return 0;
}