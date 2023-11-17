/*
 * matrices.c
 *
 *  Created on: 17 nov 2023
 *      Author: Usuario
 */
#include <stdio.h>
#include "matrices.h"

void pedirMatriz(int filas, int cols, int matriz[][MAX]) {
	int i,j;

	for (i = 0; i < filas; i++) {
		for (j=0;j<cols;j++) {
			printf("Itroduce el elemento (%d,%d): ",i+1,j+1);
			fflush(stdout);
			scanf("%d", &matriz[i][j]);
		}
	}
}
	void mostrarMatriz(int filas, int cols, int matriz[][MAX]){
		int i,j;
		for (i = 0; i < filas; i++) {
			for (j=0;j<cols;j++) {
				printf("%5d ", matriz[i][j]);
			}
			puts("");
		}
	}

	int devuelveMenor(int filas, int cols, int matriz[][MAX]){
		int menor=matriz[0][0];
		int i,j;
		for (i=0;i<filas; i++) {
			for(j=0;j<cols;j++) {
				if (matriz[i][j]<menor) {
					menor=matriz[i][j];
				}
			}
		}
		return menor;
	}

