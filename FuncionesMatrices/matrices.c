/*
 * matrices.c
 *
 *  Created on: 17 nov 2023
 *      Author: Usuario
 */
#include <stdio.h>
#include "matrices.h"
#include <time.h>
#include <stdlib.h>

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


	void inicializar(int filas, int cols, int matriz[][MAX], int num){
		int i,j;
		for (i=0;i<filas;i++) {
			for (j=0;j<cols;j++) {
				matriz[i][j]=num;
			}
		}
	}


	void matrizAleatoriaEntre1y10(int filas, int cols, int matriz[][MAX]){
		int i,j;

		srand(time(NULL));

		for (i=0;i<filas;i++) {
			for (j=0;j<cols;j++) {
				matriz[i][j]=rand()%10+1;
			}
		}
	}

	int esIgualAValor(int filas, int cols, int matriz[][MAX], int valor){
		int i,j;
		for (i=0;i<filas;i++) {
			for (j=0;j<cols;j++) {
				if (matriz[i][j]!=valor) {
					return 0;
				}
			}
		}
		return 1;
	}

	int esTriangularSup(int tam, int matriz[][MAX]) {
		int i,j;
		for (i=1;i<tam;i++) {
			for (j=0; j<i;j++) {
				if (matriz[i][j]!=0) {
					return 0;
				}
			}
		}
		return 1;
	}

	int esTriangularInf(int tam, int matriz[][MAX]) {
		int i,j;
		for (i=0;i<tam-1;i++) {
			for (j=i+1; j<tam;j++) {
				if (matriz[i][j]!=0) {
					return 0;
				}
			}
		}
		return 1;
	}



//	int esTriangularInfv2(int tam, int matriz[][MAX]) {
//			int i,j;
//			for (i=1;i<tam;i++) {
//				for (j=0; j<i;j++) {
//					if (matriz[j][i]!=0) {
//						return 0;
//					}
//				}
//			}
//			return 1;
//		}

//	int esTriangularSupv2(int tam, int matriz[][MAX]) {
//		int i,j;
//		for (i=0;i<tam;i++) {
//			for (j=0; j<tam;j++) {
//
//				if (matriz[i][j]!=0 && j<i) {
//					return 0;
//				}
//			}
//		}
//		return 1;
//	}


	int esDiagonal(int tam, int matriz[][MAX]){
		return esTriangularInf(tam,matriz)
				&&  esTriangularSup(tam,matriz)
				&& !esIgualAValor(tam,tam,matriz,0);
	}

