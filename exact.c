/*
 *  exact.c
 *
 *  Created by Alejandro Santiago on 12/09/20.
 *  aurelio.santiago@upalt.edu.mx
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"

//n=3 maquinas
//r=10 tareas

void permutaciones()
{
	int i,j,n,x,t,r,s;
	int cont_factibles;
	int *sol;
	int *temp;
	n=T;
	cont_factibles=0;
	ordenes_con_optimo=0;
	sol=reserva_vector_int(n+1);
	temp=reserva_vector_int(T);
	for(j=1;j<=n;j++)
	{
		sol[j]=j;
	}
	
	i=1; //por poner cualquier numero
	while(i!=0)
	{
		for(x=1;x<=n;x++)
		{
			temp[x-1]=sol[x]-1;
		}
		if(factibilidad_precedencia(temp))
		{
			/*
			printf("\n");
			for(x=0;x<T;x++)
				printf(" %d ",temp[x]);
			printf("\n");
			*/
			cont_factibles++;
			arreglos_con_repeticion(temp);
		}
		i=n-1;
		while(sol[i]>sol[i+1])
		{
			i=i-1;
		}
		j=n;
		while(sol[i]>sol[j])
		{
			j=j-1;
		}
		t=sol[i];
		sol[i]=sol[j];
		sol[j]=t;
		r=n;
		s=i+1;
		while(r>s)
		{
			t=sol[r];
			sol[r]=sol[s];
			sol[s]=t;
			r=r-1;
			s=s+1;
		}
		
	}
	
	printf("\nSe encontraron %d  ordenes factibles\n",cont_factibles);
	
}
void arreglos_con_repeticion(int *order)
{
	int i,j,k,n,x;
	int **temp,*sol;
	int cont_optimos;
	double valor_objetivo;
	cont_optimos=0;
	temp=reserva_matriz_int(2,T);
	k=T; //vector sol
	n=M; //elementos
	sol=reserva_vector_int(k+1);
	for(i=0;i<=k;i++)
	{
		sol[i]=1;
	}
	
	while(sol[0]==1)
	{
		//imprimir
		//printf("\n");
		for(x=1;x<=k;x++)
		{
			//printf(" %d ",sol[x]-1);
			temp[0][x-1]=sol[x]-1;
		}
		/*
		for(x=0;x<T;x++) //para usar con el voltaje mas bajo
		{
			temp[1][x]=tope_pairs[configuracion_maquinas[temp[0][x]]];
		}
		*/
		//printf("\n");
		valor_objetivo=makespan(temp,order);
		//valor_objetivo=energy(temp,makespan(temp,order));
		//printf("%lf \n",valor_objetivo);
		if(valor_objetivo<best_known) //aqui cambio best_known
		{
			best_known=valor_objetivo;
			best_candidate=copia_solucion(temp);
			//copiar el mejor orden ayado
			for(x=0;x<T;x++)
				orden[x]=order[x];
		}
		j=k;
		
		while(sol[j]==n){
			sol[j]=1;
			j=j-1;
		}
		sol[j]=sol[j]+1;
		
	}

	for(i=0;i<2;i++) //forma correcta de liberar memoria
		free(temp[i]);
	free(temp); //liberando memoria 
	free(sol); //liberando memoria por que me la acabo
	//printf("\n optimos globales encontrados %d \n",cont_optimos);
	
}