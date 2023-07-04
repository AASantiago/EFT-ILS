/*
 *  write.c
 *
 *  Created by Alejandro Santiago on 12/09/20.
 *  aurelio.santiago@uat.edu.mx
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"


void write_out(char *archivo,char *cadena)
{
    FILE *puntfile;
    if((puntfile=fopen(archivo,"a"))==NULL)
        perror("\nArchivo de entrada no encontrado");
	fprintf(puntfile,"%s",cadena);
	fclose(puntfile);
}
