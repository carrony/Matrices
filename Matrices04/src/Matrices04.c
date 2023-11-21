/*
 ============================================================================
 Name        : Matrices04.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"

int main(void) {
	int matriz[MAX][MAX];
	int tam;
//	int filas,cols;
	puts("Programa que calcula si una matriz es igual a la matriz nula o contiene todos los valores a un número dado");

//	do{
//		printf("Introduce la filas. Entre 1 y %d: ", MAX);
//		fflush(stdout);
//		scanf("%d", &filas);
//	}while(filas<=0 || filas >MAX);
//
//	do{
//		printf("Introduce la columnas. Entre 1 y %d: ", MAX);
//		fflush(stdout);
//		scanf("%d", &cols);
//	}while(cols<=0 || cols >MAX);
//
//	if (filas!=cols) {
//		pritf("No es triangular Superior"); exit(0);
//	}
//
//	puts("Introduce una matriz");
//	pedirMatriz(filas,cols, matriz);

	do{
			printf("Introduce el tamaño de la matriz cuadrada. Entre 1 y %d: ", MAX);
			fflush(stdout);
			scanf("%d", &tam);
		}while(tam<=0 || tam >MAX);

	puts("Introduce una matriz");
	pedirMatriz(tam,tam, matriz);

	puts("Tu matriz es ");
	mostrarMatriz(tam,tam,matriz);

	if (esTriangularSup(tam,matriz)) {
		puts("La matriz es triangular superior");
	} else {
		puts("La matriz NO es triangular superior");
	}

	if(esTriangularSup(tam,matriz) && esTriangularInf(tam,matriz)) {
		puts("La matriz es diagonal");
	} else {
		puts("NO es la matriz diagonal");
	}






	return EXIT_SUCCESS;
}
