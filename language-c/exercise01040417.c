/*
	Produto de matrizes segundo o link: http://www.infoescola.com/matematica/operacoes-com-matrizes-multiplicacao/
*/

#include <stdio.h>
#include <stdlib.h>
#define lineMat1 3
#define columnMat1 2
#define lineMat2 2
#define columnMat2 3

int main() 
{
	int mat1[lineMat1][columnMat1],
			mat2[lineMat2][columnMat2],
			matFinal[lineMat1][columnMat2];

	int x, y;

	for (x = 0; x < lineMat1; x++) {
		for(y = 0; y < columnMat1; x++) {
			printf("Digite um valor para a posicao mat1[%d][%d]: ", x, y);
			scanf("%i", &mat1[x][y]);
		}
	}
	for (x = 0; x < lineMat2; x++) {
		for(y = 0; y < columnMat2; x++) {
			printf("Digite um valor para a posicao mat2[%d][%d]: ", x, y);
			scanf("%i", &mat2[x][y]);	
		}
	}

	// Efetuando a multiplicacao
	for (x = 0; x < lineMat2; x++) {
		for(y = 0; y < columnMat2; x++) {
			matFinal[x][y] = mat1[x][y] * mat1[x][++y] + mat2[++y][x] * mat2[x++][y];
		}
	}

	return 0;
}