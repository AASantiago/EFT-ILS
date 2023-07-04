/*
 *  blevel.c
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

double *calcula_blevel()
{
	int i,nodo;
	double *blevel;
	blevel=reserva_vector_double(T);
	nodo=0; //el nodo de entrada 
	for(i=0;i<T;i++)
	{
		blevel[i]=recursivo_blevel(i,promedios[i]);
	}
	return blevel;
}

double recursivo_blevel(int nodo, double sum)
{
	int i;
	double max,temp;
	max=sum;
	for(i=0;i<T;i++)
	{
		if(graph[nodo][i])
		{
			temp=recursivo_blevel(i,sum+graph[nodo][i]+promedios[i]);
			if(max<temp)
				max=temp;
		}
		
	}
	return max;
}
