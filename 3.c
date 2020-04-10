#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[]) {

	FILE *pont_dados;
	FILE *pont_resultado;
	int m[10][3], soma[10];
	double media[10], d_p[10], w;
	pont_dados = fopen("dados1.csv", "r");

	
	for(int i=0; i<10; i++){
		fscanf(pont_dados, "%i,%i,%i", &m[i][0], &m[i][1], &m[i][2]);
		
	};

	for(int b=0; b<10; b++){
		soma[b] = m[b][0]+m[b][1]+m[b][2];
		media[b] = soma[b]/3.0;
		w = pow(m[b][0]-media[b], 2)+pow(m[b][1]-media[b], 2)+pow(m[b][2]-media[b], 2);
		d_p[b]= sqrt(w/3.0);
	};

	fclose(pont_dados);
	
	pont_resultado = fopen("restultados.csv", "w");

	for(int z=0; z<10; z++){
		fprintf(pont_resultado, "Soma: %i    Media: %.2lf      Desvio P: %.2lf \n", soma[z], media[z], d_p[z]);
	};

	fclose(pont_resultado);


	return 0;
}