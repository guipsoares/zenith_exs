#include <stdio.h>
#include <math.h>

int soma(int i, int j, int k);
double media(int i, int j, int k);
double desvio(int i, int j, int k);

int main(int argc, char const *argv[]) {

	int a, b, c, sum;
	double med, d_p;

	scanf("%i %i %i", &a, &b, &c);
	sum = soma(a, b, c);
	printf("Soma: %i\n", sum);
	
	med = media(a, b, c);
	printf("Media: %.2lf\n", med);

	d_p = desvio(a, b, c);
	printf("Desvio Padrao: %.2lf\n", d_p);

	return 0;
}

int soma(int i, int j, int k){
	int soma;
	soma = i+j+k;
	return(soma);
}

double media(int i, int j, int k){
	double media;
	media = (i+j+k)/3;
	return(media);
}

double desvio(int i, int j, int k){
	double dp, media, z;
	media = (i+k+j)/3;
	z = pow(i-media, 2) + pow(j-media, 2) + pow(k-media, 2);
	dp = sqrt(z/3);
	return(dp);

}
