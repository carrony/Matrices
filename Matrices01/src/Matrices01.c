/*
 ============================================================================
 Name        : Matrices01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <matrices.h>

int main(void) {
	int matriz[MAX][MAX];
	int filas,cols, valor;
	puts("Programa que iniciliza una matriz a un número");

	do{
		printf("Introduce la filas. Entre 1 y %d: ", MAX);
		fflush(stdout);
		scanf("%d", &filas);
	}while(filas<=0 || filas >MAX);

	do{
		printf("Introduce la columnas. Entre 1 y %d: ", MAX);
		fflush(stdout);
		scanf("%d", &cols);
	}while(cols<=0 || cols >MAX);


	puts("Introduce el número a asignar");
	fflush(stdout);
	scanf("%d", &valor);

	inicializar(filas,cols,matriz, valor);
	puts("Tu matriz inicializada es ");
	mostrarMatriz(filas,cols,matriz);

	puts("La matriz aleatoria es ");
	matrizAleatoriaEntre1y10(filas,cols,matriz);
	mostrarMatriz(filas,cols,matriz);




	return EXIT_SUCCESS;
}
