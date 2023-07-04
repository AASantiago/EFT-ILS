/*
 *  validate.c
 *
 *  Created by Alejandro Santiago on 12/09/20.
 *  aurelio.santiago@uat.edu.mx
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "types.h"

void imprime_solcandidata(int **candidata)
{
	static int j;
	printf("\nT");
	for(j=0;j<T;j++)
	{
		printf(" %d ",j);
	}
	printf("\n");
	
	printf("M");
	for(j=0;j<T;j++)
	{
		printf(" %d ",candidata[0][j]);
	}
	printf("\n");
	
	printf("V");
	for(j=0;j<T;j++)
	{
		printf(" %d ",candidata[1][j]);
	}
	printf("\n");
	printf("\n");
	printf("Orden ");
	for(j=0;j<T;j++)
	{
		printf(" %d ",best_order[j]);
	}
	printf("\n");
}


void imprime_vspairs()
{
	static int i,j,x;
	x=P*2;
	for(i=0;i<L;i++)
	{
		for(j=0;j<x;j++)
		{
			printf(" %lf ",vspairs[i][j]);
		}
		printf("\n");
	}
}

void imprime_orden(int *order)
{
	static int i;
	printf("\n");
	for(i=0;i<T;i++)
	{
		printf(" %d ",order[i]);
	}
	printf("\n");
}

int factibilidad_precedencia(int *indices)
{
	int ejecutadas[T];
	static int i,j;
	for(i=0;i<T;i++)
		ejecutadas[i]=0;
	for(i=0;i<T;i++){
		for(j=0;j<T;j++){
			if(graph[j][indices[i]])
				if(ejecutadas[j]==0)
					return 0;
		}
		ejecutadas[indices[i]]=1;
	}
	return 1;	
	
}
