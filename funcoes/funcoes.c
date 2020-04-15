#include <funcoes.h>
#include <math.h> // pow, sqrt 

int soma(int i, int j, int k){
	int soma;
	soma = i+j+k;
	return(soma);
}

double media(int i, int j, int k){
	double media;
	media = (double)(i+j+k)/3.0;
	return(media);
}

double desvio(int i, int j, int k){
	double dp, media, z;
	media = (i+k+j)/3;
	z = pow(i-media, 2) + pow(j-media, 2) + pow(k-media, 2);
	dp = sqrt(z/3);
	return(dp);

}