/*
 *  memory.c
 *
 *  Created by Alejandro Santiago on 12/09/20.
 *  aurelio.santiago@uat.edu.mx
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "types.h"

int *reserva_vector_int(int dim)
{
	int *aux;
	
	aux=calloc(dim,sizeof(int));
	if(!aux)perror("Memoria insuficiente");
    
	return aux;
}

float *reserva_vector_float(int dim)
{
	float *aux;
	
	aux=calloc(dim,sizeof(float));
	if(!aux)perror("Memoria insuficiente");
    
	return aux;
}

double *reserva_vector_double(int dim)
{
	double *aux;
	
	aux=calloc(dim,sizeof(double)); //<--- Corregidisimo favor de checar los demas
	if(!aux)perror("Memoria insuficiente");
    
	return aux;
}

int **reserva_matriz_int(int filas,int columnas)
{
	int **aux,i;
	
	aux=calloc(filas,sizeof(int*));
	if(!aux)perror("Memoria insuficiente");
    for(i=0;i<filas;i++)
		aux[i] = reserva_vector_int(columnas);
	return aux;
}

float **reserva_matriz_float(int dim)
{
	float **aux;
	int i;
	
	aux=calloc(dim,sizeof(float*));
	if(!aux)perror("Memoria insuficiente");
    for(i=0;i<dim;i++)
		aux[i] = reserva_vector_float(dim);
	return aux;
}

double **reserva_matriz_double(int filas, int columnas)
{
	double **aux;
	int i;
	
	aux=calloc(filas,sizeof(double*));
	if(!aux)perror("Memoria insuficiente");
    for(i=0;i<filas;i++)
		aux[i] = reserva_vector_double(columnas);
	return aux;
}

void libera_memoria_arreglo(int *arreglo)
{
	free(arreglo);	
}

void libera_memoria_matriz(int **matriz,int filas)
{
	int i;
	for(i=0;i<filas;i++)
    {
		free(matriz[i]);
	}
	free(matriz);
    matriz=NULL;
}




