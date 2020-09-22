/*
 *  energy.c
 *
 *  Created by Alejandro Santiago on 12/09/20.
 *  aurelio.santiago@upalt.edu.mx
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "types.h"

double makespan(int **candidata, int *order)
{
	//primero lideare con el puro makespan
	int i,j,temp;
	double rspeed,maxlocal,maxglobal; //conviene global ???
	for(i=0;i<M;i++)
	{
		TAEM[i]=0; //tiempo actual en maquina = 0 al iniciar
	}
	
	for(i=0;i<T;i++)
	{
		temp=order[i];
		maxlocal=0;
		maxglobal=0;
		for(j=0;j<T;j++)
		{
			if(graph[j][temp])
			{
				maxlocal=tareas[j].termina;
				if(candidata[0][j]!=candidata[0][temp])
				{
					maxlocal+=graph[j][temp];
				}
				if(maxlocal>maxglobal) maxglobal=maxlocal;
			}
		}
		if(TAEM[candidata[0][temp]]>maxglobal)
		{maxglobal=TAEM[candidata[0][temp]];}
		tareas[temp].empieza=maxglobal;
		rspeed=pij[temp][candidata[0][temp]] / vspairs[candidata[1][temp]][configuracion_maquinas[candidata[0][temp]]*2+1]; // *2+1 gastando memoria por procesador ; )
		tareas[temp].termina=maxglobal+rspeed;
		TAEM[candidata[0][temp]]=maxglobal+rspeed;
		//printf("\nTarea %d Comienza %lf Termina %lf en Maquina %d\n",temp,tareas[temp].empieza,tareas[temp].termina,candidata[1][temp]);
		
	}
	maxglobal=0;
	for(i=0;i<M;i++)
	{
		if(TAEM[i]>maxglobal) maxglobal=TAEM[i];
		
	}

	return maxglobal;
}

double makespan_parcial(int **candidata, int *order,int limite)
{
	//primero lideare con el puro makespan
	int i,j,temp;
	double rspeed,maxlocal,maxglobal; //conviene global ???

	for(i=0;i<M;i++)
	{
		TAEM[i]=0; //tiempo actual en maquina = 0 al iniciar
	}
	
	for(i=0;i<=limite;i++)
	{
		temp=order[i];
		maxlocal=0;
		maxglobal=0;
		for(j=0;j<T;j++)
		{
			if(graph[j][temp])
			{
				maxlocal=tareas[j].termina;
				if(candidata[0][j]!=candidata[0][temp])
				{
					maxlocal+=graph[j][temp];
				}
				if(maxlocal>maxglobal) maxglobal=maxlocal;
			}
			
		}
		if(TAEM[candidata[0][temp]]>maxglobal)
		{maxglobal=TAEM[candidata[0][temp]];}
		tareas[temp].empieza=maxglobal;
		rspeed=pij[temp][candidata[0][temp]] / vspairs[0][configuracion_maquinas[candidata[0][temp]]*2+1]; // *2+1 gastando memoria por procesador ; ) //eft es a maximo volt vspairs[candidata[0]
		tareas[temp].termina=maxglobal+rspeed;
		TAEM[candidata[0][temp]]=maxglobal+rspeed;
		
	}
	maxglobal=tareas[temp].termina;

	return maxglobal;
	
}

double makespan_parcialDavid(int **matrizTrabajo, int *order,int limite, double TAEM[], struct tarea tareas[])
{
    //primero lideare con el puro makespan
    int i,j,temp;
    double rspeed,maxlocal,maxglobal;
    
    for(i=0;i<M;i++)
    {
        TAEM[i]=0;
    }

    for(i=limite-2;i>=0;i--)
    {
        if(tareas[order[i]].termina > TAEM[matrizTrabajo[0][order[i]]])
        {
            TAEM[matrizTrabajo[0][order[i]]] = tareas[order[i]].termina;
        }
    }
    
    if ((i = limite-1) < 0)
    {
        i = 0;
    }
    
    for(;i<=limite;i++)
    {
        temp=order[i];
        maxlocal=0;
        maxglobal=0;
        for(j=0;j<T;j++)
        {
            if(graph[j][temp])
            {
                maxlocal=tareas[j].termina;
                if(matrizTrabajo[0][j]!=matrizTrabajo[0][temp])
                {
                    maxlocal+=graph[j][temp];
                }
                if(maxlocal>maxglobal)
                    maxglobal=maxlocal;
            }
        }
        if(TAEM[matrizTrabajo[0][temp]]>maxglobal)
        {
            maxglobal=TAEM[matrizTrabajo[0][temp]];
        }
        tareas[temp].empieza=maxglobal;
        rspeed=pij[temp][matrizTrabajo[0][temp]] / vspairs[0][configuracion_maquinas[matrizTrabajo[0][temp]]*2+1]; // *2+1 gastando memoria por procesador ; ) //eft es a maximo volt vspairs[candidata[0]
        tareas[temp].termina=maxglobal+rspeed;
        TAEM[matrizTrabajo[0][temp]]=maxglobal+rspeed;
    }
    maxglobal=tareas[temp].termina;
    

    //resetea los tiempo de inicio y final de la tarea que se acaba de calcular en la posición de límite.
    tareas[order[limite]].empieza = 0;
    tareas[order[limite]].termina = 0;
    
    return maxglobal;
}

double energy(int **candidata,double makespan)
{
	double energia,rspeed,temp,*busys;
	int i;
	energia=0;
	busys=reserva_vector_double(M);
    for(i=0;i<M;i++)
    {
        busys[i]=0;
    }
	//energia directa
	for(i=0;i<T;i++)
	{
		rspeed=pij[i][candidata[0][i]] / vspairs[candidata[1][i]][configuracion_maquinas[candidata[0][i]]*2+1]; // *2+1 gastando memoria por procesador ; )
		busys[candidata[0][i]]+=rspeed;
		temp=rspeed*pow(vspairs[candidata[1][i]][configuracion_maquinas[candidata[0][i]]*2],2); // *2 ; ) el voltaje
		energia+=temp;
	}
	
	//energia por idle
	
	for(i=0;i<M;i++)
	{
		//idle X voltaje al cuadrado
		energia+=(makespan-busys[i])*pow(vspairs[tope_pairs[configuracion_maquinas[i]]][configuracion_maquinas[i]*2],2);
		
	}
	free(busys);
	return energia;
}

int *genera_orden_blevel()
{
	int *order,i,j,pos;
	double *blevels,mayor;
	blevels=calcula_blevel();
	order=reserva_vector_int(T);
	for(j=0;j<T;j++)
	{
		
		mayor=0;
		for(i=0;i<T;i++)
		{
			if(blevels[i]>mayor)
			{
				mayor=blevels[i];
				pos=i;
			}
		}
		order[j]=pos; //indice de el orden
		blevels[pos]=0;
	}
	
	return order;
}

int *genera_orden_aleatorio()
{
	int *ready_tasks,i,j,ready,tope_ready,tope_order,*ejecutadas;
	int *order;
	int tarea;
	ready_tasks=reserva_vector_int(T);
	ejecutadas=reserva_vector_int(T);
	order=reserva_vector_int(T);
	//sacando las tareas listas para ejecutarse
	tope_order=0;
	while(tope_order<T){
	tope_ready=0;
	for(i=0;i<T;i++)
	{
		if(ejecutadas[i]==0)
		{ready=1;}
		else{ready=0;}
		for(j=0;j<T;j++)
		{
			if(graph[j][i])
				if(ejecutadas[j]==0)
					ready=0;
		}
		if(ready)
		{
			ready_tasks[tope_ready++]=i;
		}
	}
	
	//y luego cuantas son las listas para ejecutarse lol  :x
	//for(i=0;i<1;i++) //hasta tope_ready o 1 solo de una en una
	//{
		do{
		tarea=rand()%tope_ready;
		}while(ejecutadas[ready_tasks[tarea]]==1);
		order[tope_order++]=ready_tasks[tarea];
		ejecutadas[ready_tasks[tarea]]=1;
	//}
	
	}
	free(ready_tasks);
	free(ejecutadas);
	return order;

}

int **genera_solucion_aleatoria()
{
	int **regresa,i;
	regresa=reserva_matriz_int(2,T);
	for(i=0;i<T;i++)
	{
		regresa[0][i]=rand()%M;
		regresa[1][i]=0;
	}
	return regresa;
}

int **copia_solucion(int **candidata)
{
	int **regresa,i,j;
	regresa=reserva_matriz_int(2,T);
	for(i=0;i<2;i++)
		for(j=0;j<T;j++)
			regresa[i][j]=candidata[i][j];
	return regresa;
}
int **vecina_maquina(int **candidata,int tarea,int maquina,int voltaje)
{
	int **regresa,i,j;
	regresa=reserva_matriz_int(2,T);
	
	for(i=0;i<2;i++)
		for(j=0;j<T;j++)
		{
			regresa[i][j]=candidata[i][j];
		}
	
	regresa[0][tarea]=maquina;
    regresa[1][tarea]=voltaje;
	return regresa;
}

void perturba_solucion(int **candidata)
{
	int maquina,i,j;
    
	for(i=0;i<T;i++)
	{
		if(rand()%101<=20)
		{
			do{
				maquina=rand()%M;
			}while(maquina==candidata[0][i]);
			candidata[0][i]=maquina;
		}
	}
}

int **perturba_solucion2(int **candidata)
{
	int **regresa,maquina,i,j,tarea;
	double porcentaje,x;
	regresa=reserva_matriz_int(2,T);
	for(i=0;i<2;i++)
		for(j=0;j<T;j++)
		{
			regresa[i][j]=candidata[i][j];
		}
	
	porcentaje=100/T;
	for(x=porcentaje;x<=25;x=x+porcentaje)
	{
		tarea=rand()%T;
		do{
			maquina=rand()%M;
		}while(maquina==regresa[0][T]);
		regresa[0][tarea]=maquina;
	}
	
	return regresa;
}
