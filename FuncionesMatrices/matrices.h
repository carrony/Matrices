/*
 * matrices.h
 *
 *  Created on: 17 nov 2023
 *      Author: Usuario
 */

#ifndef MATRICES_H_
#define MATRICES_H_
#define MAX 30


	void pedirMatriz(int filas, int cols, int matriz[][MAX]); //int **matriz;
	void mostrarMatriz(int filas, int cols, int matriz[][MAX]);

	int devuelveMenor(int filas, int cols, int matriz[][MAX]);

	void inicializar(int filas, int cols, int matriz[][MAX], int num);

	void matrizAleatoriaEntre1y10(int filas, int cols, int matriz[][MAX]);

	int esIgualAValor(int filas, int cols, int matriz[][MAX], int valor);

	int esTriangularSup(int tam, int matriz[][MAX]);


	int esTriangularInf(int tam, int matriz[][MAX]);

	int esDiagonal(int tam, int matriz[][MAX]);


#endif /* MATRICES_H_ */
