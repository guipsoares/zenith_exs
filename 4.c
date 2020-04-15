// na criação das matrizes com alocação dinâmica, tive auxilio do João!! Valeuu pela ajuda
#include <stdio.h>
#include <stdlib.h>

//-----------------FUNÇÕES
int divi(double **r, int **m, int *a, int *z);


int main(int argc, char const *argv[]) {
	FILE *open_data;
	
	//Criando matriz m com alocação dinâmica de memória
	int **m = (int **) calloc(10, sizeof(int*));
	for(int j = 0; j < 10; j++) m[j] = (int *)calloc(3, sizeof(int));

	//Criando matriz r com alocação dinâmica de memória
	double **r = (double **) calloc(10, sizeof(double*));
	for(int j = 0; j < 10; j++) r[j] = (double *)calloc(3, sizeof(double));
	

// Lendo os arquivos do arquivo dados1.csv e transformando-os em uma matriz
	open_data = fopen("dados1.csv", "r");

	for(int i=0; i<10; i++) {
			fscanf(open_data, "%i,%i,%i", &m[i][0], &m[i][1], &m[i][2]);
	}
	fclose(open_data);


// divisão do primeiro e segundo numero de cada linha z pelo terceiro numero da mesma linha

	for(int z=0; z<10; z++){
		for(int a=0; a<2; a++){
			divi(r, m, &a, &z);	
		}
	}

// imprimindo o resultado do primeiro numero dividido pelo terceiro e do segundo/terceiro, respectivamente

	for(int y=0; y<10; y++){
		for(int b=0; b<2; b++){
			printf("%.2lf\t", r[y][b]);
		}
		printf("\n");
	}



	return 0;
}


// função que realiza as divisões e retorna 0 em caso de sucesso e -1 em caso de erros
int divi(double **r, int **m, int *a, int *z) {
		int d, w;
			d = *a;
			w = *z;

		if(m[w][2]==0) {
			return (-1);
		} else {
			
			r[d][w] = (double) m[w][d]/ m[w][2];
		}
	return 0;
}
