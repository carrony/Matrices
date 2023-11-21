/*
 ============================================================================
 Name        : Matrices02y03.c
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
	puts("Programa que calcula si una matriz es igual a la matriz nula o contiene todos los valores a un número dado");

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

	inicializar(filas,cols, matriz,0);
	if (esIgualAValor(filas, cols, matriz, 0)) {
		puts("Es la matriz nula");
	} else {
		puts("No es la matriz nula");
	}



	puts("Introduce una matriz");
	pedirMatriz(filas,cols, matriz);


	puts("Introduce el valor a comprobar");
	fflush(stdout);
	scanf("%d", &valor);

	if (esIgualAValor(filas, cols, matriz, valor)) {
		printf("Todos los elementos de la matriz son iguales a %d",valor);
	} else {
		printf("NO todos los elementos de la matriz son iguales a %d",valor);
	}



	return EXIT_SUCCESS;
}
