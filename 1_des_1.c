#include <stdio.h>
// usarei n=5 para demonstrar, podendo ser
// realizado com qualquer N
#define N 5

int main(void){
	int v[N], soma=0, media;
	double d_p, q=0.0;

	for(int i=0; i<N; i++) {
		scanf("%i", &v[i]);
	}

	for(int a=0; a<N; a++){
		soma += v[a];
	}

	media = soma/N;

	for(int b=0; b<N; b++){
		q += pow((v[b]-media), 2);
	}
	

	d_p= sqrt(q/N);

	printf("Soma: %i\n", soma);
	printf("Media: %i\n", media);
	printf("Desvio Padrao: %.2lf\n", d_p);
	
	return 0;
}