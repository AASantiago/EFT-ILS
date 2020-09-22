/*
 *  read.c
 *
 *  Created by Alejandro Santiago on 12/09/20.
 *  aurelio.santiago@upalt.edu.mx
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"

void read_instance(int m,int t, const char fichero[],const char fichero2[])
{
	FILE *puntfile;
	char buffer[100];
	int i,j;
	double temp,promedio;
	if((puntfile=fopen(fichero,"r"))==NULL)
		perror("\nArchivo de entrada no encontrado");
	//sacando el numero de procesadores y tareas del nombre de el archivo
	M=m;
	T=t;
	//
	fscanf(puntfile,"%*s"); //#critical
	fscanf(puntfile,"%*s"); //<---- critical
	fscanf(puntfile,"%*s"); //#tasks
    //globales para heft
    TAEM=reserva_vector_double(M);
    tareas=calloc(T,sizeof(struct tarea));
	//tabla pij
	pij=reserva_matriz_double(T,M);
	//solucion candidata
	best_candidate=reserva_matriz_int(2,T);
	//indice de orden de ejecucion de las tareas
	orden=reserva_vector_int(T);
	best_order=reserva_vector_int(T);
	for(i=0;i<T;i++)
	{
		
		fscanf(puntfile,"%*s");
		for(j=0;j<M;j++)
		{
			fscanf(puntfile,"%lf%*c",&temp); // fscanf(puntfile,"%lf%*c",&temp);
			pij[i][j]=temp;
			
		}
		fscanf(puntfile,"\n");
		
		
	}
	fscanf(puntfile,"%*s \n");
	//grafo y aristas
	graph=reserva_matriz_double(T,T);
	
	while(strncmp(buffer,"#end",4))
	{
		fgets (buffer,100, puntfile); 
		sscanf(buffer,"%*s %d%*c %d%*c %lf \n",&i,&j,&temp); // (buffer,"%*s %d%*c %d%*c %lf \n",&i,&j,&temp);
		graph[i][j]=temp;
	}
	
	
	promedios=reserva_vector_double(T);
	for(i=0;i<T;i++)
	{
		promedio=0;
		for(j=0;j<M;j++)
		{
			promedio+=pij[i][j];
		}
		promedio=promedio/M;
		promedios[i]=promedio;
	}
	
	read_vspairs(fichero2);
	
}

void read_vspairs(const char fichero[])
{
	FILE *puntfile;
	int i,j,x,cont;
	double temp;
	if((puntfile=fopen(fichero,"r"))==NULL)
		perror("\nArchivo de entrada no encontrado");
	fscanf(puntfile,"%d %d \n",&L,&P);
	fscanf(puntfile,"\n");
	x=P*2;
	vspairs=reserva_matriz_double(L,x);
	tope_pairs=reserva_vector_int(P);
	for(i=0;i<L;i++)
	{
		for(j=0;j<x;j++)
		{
		fscanf(puntfile," %lf ",&temp);
		vspairs[i][j]=temp;
		}
		fscanf(puntfile,"\n");
	}
	
	//asigna a cada maquina una configuracion par
	configuracion_maquinas=reserva_vector_int(M);
	cont=0;
	for(i=0;i<M;i++)
	{
		configuracion_maquinas[i]=cont;
		cont++;
		if(cont>P-1)
		{
			cont=0;
		}
	}

	//saca los topes para cada pair
	for(i=0;i<x;i=i+2)
	{
		for(j=L-1;j>0;j--)
		{
		
		if(vspairs[j][i]!=0)
			{
			tope_pairs[i/2]=j;
			break;
			}
					
		}
		
	}
	
	
}

