/*
 *  eft.c
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
#include <time.h>

int **EFT(int *order)
{
	int i,j,pos;
	int **regresa;
	double menor,temp;
	int iteracion;
	iteracion=0;
	regresa=reserva_matriz_int(2,T);
    	double TAEM[M];//for david makespan PARCIAL
    	struct tarea tareas[T]; //for david makespan PARCIAL
	for(i=0;i<T;i++)
		regresa[1][i]=0;
	
	for(i=0;i<T;i++)
	{
       	regresa[1][i]=0;
       	tareas[i].empieza = 0;
       	tareas[i].termina = 0;
    	}

	for(i=0;i<T;i++)
	{
		menor=9999;
		for(j=0;j<M;j++)
		{
			regresa[0][order[i]]=j;
			temp=makespan_parcialDavid(regresa, order, i, TAEM, tareas);
			//temp=makespan_parcial(regresa,order,i);
			if(temp<menor) //< o <= cambia mucho los empates 
			{
				menor=temp;
				pos=j;
			}
		}
		regresa[0][order[i]]=pos;
		
	}

	return regresa;
	
}
