/*
 *  localsearch.c
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

int **aleatoria(int **candidata,int *order)
{
	static int i,sinmejora;
	int **temp,**regresa;
	static double valor_objetivo,mejor_local,tiempo;
	mejor_local=makespan(candidata,order);
	regresa=copia_solucion(candidata);
	sinmejora=0;
	do{
	sinmejora++;
	for(i=0;i<T;i++) 
	{
		
			temp=vecina_maquina(regresa,rand()%T,rand()%M,0);
			valor_objetivo=makespan(temp, order);
			if(valor_objetivo<mejor_local)
			{
				mejor_local=valor_objetivo;
				libera_memoria_matriz(regresa,2);
				regresa=copia_solucion(temp);
				sinmejora=0;
			}
			libera_memoria_matriz(temp,2);
			t_fin=clock();
			tiempo = (double)((t_fin-t_ini)/CLOCKS_PER_SEC);
			if(tiempo>=MAXTIMEITER)
			break;

	}
			t_fin=clock();
			tiempo = (double)((t_fin-t_ini)/CLOCKS_PER_SEC);
			if(tiempo>=MAXTIMEITER)
			break;
	}while(sinmejora<M);
	return regresa;
}

int first_derecha(int **candidata,int *order)
{
    int evals=0;
    int i,j,**temp;
    static double valor_objetivo,mejor_local;
    mejor_local=makespan(candidata,order);
    //printf("Mejor local entrante %lf\n",mejor_local);
    for(i=0;i<T;i++){
        for(j=0;j<M;j++){
            temp=vecina_maquina(candidata,order[i],j,0);
            valor_objetivo=makespan(temp, order);
            evals ++;
            if(valor_objetivo<mejor_local)
            {
                mejor_local=valor_objetivo;
                //libera_memoria_matriz(candidata,2);
                candidata=copia_solucion(temp);
                i=0;
                j=0;
                
            }
            libera_memoria_matriz(temp,2);
            if((evals+evaluaciones)>=maxevals)
            {
                return evals;
            }
        }
    }
    return evals;
    
    //printf("Mejor local saliente %lf\n",mejor_local);
}

int **first_izquierda(int **candidata, int *order)
{
	static int i,j,tarea,sinmejora;
	int **temp,**regresa;
	static double valor_objetivo,mejor_local,tiempo;
	mejor_local=makespan(candidata,order);
	regresa=copia_solucion(candidata);
	sinmejora=0;
	do{
	j=rand()%M;
	sinmejora++;
	for(i=T-1;i>=0;i--)
	{
		tarea=order[i];
			temp=vecina_maquina(candidata,tarea,j,0);
			valor_objetivo=makespan(temp, order);
			if(valor_objetivo<mejor_local)
			{
				mejor_local=valor_objetivo;
				libera_memoria_matriz(regresa,2);
				regresa=copia_solucion(temp);
				sinmejora=0;
				break;
			}
			libera_memoria_matriz(temp,2);
			t_fin=clock();
			tiempo = (double)((t_fin-t_ini)/CLOCKS_PER_SEC);
			if(tiempo>=MAXTIMEITER)
			break;
		
	}
			t_fin=clock();
			tiempo = (double)((t_fin-t_ini)/CLOCKS_PER_SEC);
			if(tiempo>=MAXTIMEITER)
			break;
	}while(sinmejora<M);
	return regresa;
}

int **best_makespan(int **candidata, int *order)
{
	static int i,j,tarea,sinmejora;
	int **temp,**original,**mejorsol;
	static double valor_objetivo,mejor_local;
	mejor_local=makespan(candidata,orden);
	original=copia_solucion(candidata);
	mejorsol=copia_solucion(candidata);
	sinmejora=0;
	do{
	sinmejora++;
	for(i=0;i<T;i++)
	{
        for(j=0;j<M;j++)
        {
			tarea=order[i];
			temp=vecina_maquina(original,tarea,j,0);
			valor_objetivo=makespan(temp, order);
            printf("BEST MKSPAN valor makespan %lf mejor makespan %lf  energia %lf energiadelMejor %lf\n",valor_objetivo,mejor_local,energy(temp,valor_objetivo),energy(mejorsol,mejor_local));
			if(valor_objetivo<mejor_local) 
			{
				mejor_local=valor_objetivo;
				libera_memoria_matriz(mejorsol,2);
				mejorsol=copia_solucion(temp);
				sinmejora=0;
			}
			libera_memoria_matriz(temp,2);
        }
	}
		libera_memoria_matriz(original,2);
		original=copia_solucion(mejorsol);
	}while(sinmejora==0);
	libera_memoria_matriz(original,2);
	return mejorsol;

}

int **improve_sol_derecha_makespan(int **candidata, int *order) 
{
	static int i,j,tarea,sinmejora;
	int **temp,**regresa;
	static double valor_objetivo,mejor_local;
	mejor_local=makespan(candidata,order);
	regresa=copia_solucion(candidata);
	sinmejora=0;
	do{
		j=rand()%M;
		sinmejora++;
		for(i=0;i<T;i++)
		{
			tarea=order[i];
			temp=vecina_maquina(regresa, tarea,j,0);
			valor_objetivo=makespan(temp, order);
            printf("IMPROVE SOL DERECHA valor makespan %lf mejor makespan %lf  energia %lf energiadelMejor %lf\n",valor_objetivo,mejor_local,energy(temp,valor_objetivo),energy(regresa,mejor_local));
			if(valor_objetivo<mejor_local)
			{
				mejor_local=valor_objetivo;
				libera_memoria_matriz(regresa,2);
				regresa=copia_solucion(temp);
				sinmejora=0;
			}
			libera_memoria_matriz(temp,2);
		}
	}while(sinmejora<M);
	
	return regresa;
	
}

int **best_biobjective(int **candidata, int *order)
{
	static int i,j,x,tarea,sinmejora;
	int **temp,**original,**mejorsol;
	static double valor_objetivo_makespan,valor_objetivo_energia,mejor_local_makespan,mejor_local_energia;
	mejor_local_makespan=makespan(candidata,orden);
    mejor_local_energia=energy(candidata,mejor_local_makespan);
	original=copia_solucion(candidata);
	mejorsol=copia_solucion(candidata);
	sinmejora=0;
	do{
        i=rand()%T;
        sinmejora++;
        for(j=0;j<M;j++)
        {
            for(x=0;x<=(tope_pairs[configuracion_maquinas[j]]);x++)
            {
			tarea=order[i];
			temp=vecina_maquina(original,tarea,j,x);
			valor_objetivo_makespan=makespan(temp, order);
            valor_objetivo_energia=energy(temp,valor_objetivo_makespan);
             printf("BI OBJECTIVE valor makespan %lf mejor makespan %lf  energia %lf energiadelMejor %lf\n",valor_objetivo_makespan,mejor_local_makespan,valor_objetivo_energia,mejor_local_energia);
			if(valor_objetivo_makespan<=mejor_local_makespan&&valor_objetivo_energia<=mejor_local_energia) 
			{
				mejor_local_makespan=valor_objetivo_makespan;
                mejor_local_energia=valor_objetivo_energia;
				libera_memoria_matriz(mejorsol,2);
				mejorsol=copia_solucion(temp);
				sinmejora=0;
			}
			libera_memoria_matriz(temp,2);
            }
        }
		libera_memoria_matriz(original,2);
		original=copia_solucion(mejorsol);
	}while(sinmejora<T);
	libera_memoria_matriz(original,2);
	return mejorsol;
    
}

int **best_biobjective2(int **candidata, int *order)
{
	static int i,j,x,tarea,sinmejora;
	int **temp,**original,**mejorsol;
	static double valor_objetivo_makespan,valor_objetivo_energia,mejor_local_makespan,mejor_local_energia;
	mejor_local_makespan=makespan(candidata,orden);
    mejor_local_energia=energy(candidata,mejor_local_makespan);
	original=copia_solucion(candidata);
	mejorsol=copia_solucion(candidata);
	sinmejora=0;
	do{
        j=rand()%M;
        x=rand()%(tope_pairs[configuracion_maquinas[j]]+1);
        sinmejora++;
        for(i=0;i<T;i++)
        {
                tarea=order[i];
                temp=vecina_maquina(original,tarea,j,x);
                valor_objetivo_makespan=makespan(temp, order);
                valor_objetivo_energia=energy(temp,valor_objetivo_makespan);
                printf("BI OBJECTIVE valor makespan %lf mejor makespan %lf  energia %lf energiadelMejor %lf\n",valor_objetivo_makespan,mejor_local_makespan,valor_objetivo_energia,mejor_local_energia);
                if(valor_objetivo_makespan<=mejor_local_makespan&&valor_objetivo_energia<=mejor_local_energia) 
                {
                    mejor_local_makespan=valor_objetivo_makespan;
                    mejor_local_energia=valor_objetivo_energia;
                    libera_memoria_matriz(mejorsol,2);
                    mejorsol=copia_solucion(temp);
                    sinmejora=0;
                }
                libera_memoria_matriz(temp,2);

        }
		libera_memoria_matriz(original,2);
		original=copia_solucion(mejorsol);
	}while(sinmejora<T);
	libera_memoria_matriz(original,2);
	return mejorsol;
    
}

void MCER(int **candidata,int *order)
{
    int i,j,x;
    int tarea,maquina,voltaje;
    double mejor_local,mejor_local_energia,valor_objetivo,valor_objetivo_energia,mkspan;
    mejor_local=makespan(candidata,order);
    mejor_local_energia=energy(candidata,mejor_local);
    for(i=0;i<T;i++)
    {
        
        for(j=0;j<M;j++)
        {
            
            for(x=0;x<=(tope_pairs[configuracion_maquinas[j]]);x++)
            {
                tarea=best_order[i];
                maquina=candidata[0][tarea];
                voltaje=candidata[1][tarea];
                candidata[0][tarea]=j;
                candidata[1][tarea]=x;
                valor_objetivo=makespan(candidata,order);
                valor_objetivo_energia=energy(candidata,valor_objetivo);
                if(valor_objetivo<=mejor_local && valor_objetivo_energia<mejor_local_energia)
                {
                    mejor_local=valor_objetivo;
                    mejor_local_energia=valor_objetivo_energia;
                    candidata[0][tarea]=j;
                    candidata[1][tarea]=x;
                    
                }else{
                    candidata[0][tarea]=maquina;
                    candidata[1][tarea]=voltaje;
                }
                mkspan=makespan(candidata,order);
                printf("Makespan %lf Mejor makespan %lf Energia %lf Mejor energia %lf\n",valor_objetivo,mejor_local,energy(candidata,valor_objetivo),mejor_local_energia);
            }
        }
        
    }
} 



void energy_search(int **candidata, int *order)
{

	static int i,tarea,voltaje,voltajetemp,sinmejora;
	static double mejor_local,mejor_local_energia,valor_objetivo,valor_objetivo_energia;
	mejor_local=makespan(candidata,order);
    mejor_local_energia=energy(candidata,mejor_local);
    
    sinmejora=0;
    do{
    voltajetemp=rand()%L;
    sinmejora++;
    for(i=0;i<T;i++)
	{
        tarea=order[i];
        voltaje=candidata[1][tarea];
        if(tope_pairs[candidata[0][tarea]]<=voltajetemp)
        {
            candidata[1][tarea]=voltajetemp;
            valor_objetivo=makespan(candidata,order);
            valor_objetivo_energia=energy(candidata,valor_objetivo);
            if(valor_objetivo<=mejor_local&&valor_objetivo_energia<mejor_local_energia)
            {
                mejor_local_energia=valor_objetivo_energia;
                voltaje=voltajetemp;
                sinmejora=0;
            }
            candidata[1][tarea]=voltaje;
        }
        
		
	}
    }while(sinmejora<L);
	
}


int **improve_sol_izquierda(int **candidata,int *order)
{
	static int i,j,tarea,sinmejora;
	int **temp,**regresa;
	static double valor_objetivo,mejor_local,tiempo;
	mejor_local=makespan(candidata,order);
	regresa=copia_solucion(candidata);
	sinmejora=0;
	do{
		j=rand()%M;
		sinmejora++;
		for(i=T-1;i>=0;i--)
		{
			tarea=order[i];
			temp=vecina_maquina(candidata,tarea,j,0);
			valor_objetivo=makespan(temp, order);
			if(valor_objetivo<mejor_local)
			{
				mejor_local=valor_objetivo;
				libera_memoria_matriz(regresa,2);
				regresa=copia_solucion(temp);
				sinmejora=0;
			}
			libera_memoria_matriz(temp,2);
			t_fin=clock();
			tiempo = (double)((t_fin-t_ini)/CLOCKS_PER_SEC);
			if(tiempo>=MAXTIMEITER)
			break;
			
		}
		t_fin=clock();
		tiempo = (double)((t_fin-t_ini)/CLOCKS_PER_SEC);
		if(tiempo>=MAXTIMEITER)
		break;
	}while(sinmejora<M);
	return regresa;	
}
