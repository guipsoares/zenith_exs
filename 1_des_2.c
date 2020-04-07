#include <stdio.h>
#include <math.h>

int main(void){
	int x, v[x], soma=0, media;
	double d_p, q=0.0;

	printf("Quantidade de numeros: \n");
	scanf("%i", &x);
	printf("Digite os %i numeros.\n", x);

	for(int i=0; i<x; i++) {
		scanf("%i", &v[i]);
	}

	for(int a=0; a<x; a++){
		soma += v[a];
	}

	media = soma/x;

	for(int b=0; b<x; b++){
		q += pow((v[b]-media), 2);
	}
	

	d_p= sqrt(q/x);

	printf("Soma: %i\n", soma);
	printf("Media: %i\n", media);
	printf("Desvio Padrao: %.2lf\n", d_p);
	
	return 0;
}