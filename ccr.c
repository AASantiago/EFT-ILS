/*
 *  ccr.c
 *
 *  Created by Alejandro Santiago on 12/09/20.
 *  aurelio.santiago@upalt.edu.mx
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"

int **constructivo2(int *order)
{
	int i,j,pos,menor;
	int *sin_precedentes;
	int **regresa;
	int cont,tope;
	int tarea_actual;
	sin_precedentes=reserva_vector_int(T);
	regresa=reserva_matriz_int(2,T);
	for(i=0;i<T;i++)
	{
		orden[i]=order[i];
	}
	
	//seleccionando el procesador que menos le cueste realizar la tarea
	
	for(i=0;i<T;i++)
	{
		menor=99999;
		for(j=0;j<M;j++)
		{
			if(pij[i][j]<menor)
			{
				menor=pij[i][j];
				pos=j;
			}
		}
		regresa[0][i]=pos;
	}
	
	
	//CCR :X
	
	//necesito conseguir primero las tareas que no tienen precedente
	//apartir de hai se va a actuar
	
	tope=0;
	for(i=0;i<T;i++)
	{
		cont=0;
		for(j=0;j<T;j++)
		{
			if(graph[j][i])
			{
				cont=1;
			}
		}
		if(!cont)
		{
			sin_precedentes[tope++]=i;	
		}
	}	
	
	//y apartir de aqui comienzo a trabajar los calculos del CCR
	for(i=0;i<tope;i++)
	{
		tarea_actual=sin_precedentes[i];
		recursivo_crr(tarea_actual,regresa);
		
		
	}
	
	return regresa;
	

}

void recursivo_crr(int tarea,int **regresa)
{
	int x,siguiente;
	double mayor,ccr;
	mayor=0;
	siguiente=-1;
	for(x=0;x<T;x++)
	{
		if(graph[tarea][x])
		{
			ccr=(graph[tarea][x])/(pij[tarea][regresa[0][tarea]]+pij[tarea][regresa[0][x]]);
			if(ccr>mayor)
			{
				mayor=ccr;
				siguiente=x;
			}
		}
	}
	
	if(mayor>1)
	{
		regresa[0][siguiente]=regresa[0][tarea];
		if(siguiente!=-1)
		recursivo_crr(siguiente,regresa);
	}
	else{
		if(siguiente!=-1)
		recursivo_crr(siguiente,regresa);
	}
	
}