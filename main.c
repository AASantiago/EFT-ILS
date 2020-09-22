/*
 *  main.c
 *
 *  Created by Alejandro Santiago on 12/09/20.
 *  aurelio.santiago@upalt.edu.mx
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "types.h"

int main (int argc, const char * argv[]) {
    srand((int)time(NULL));
    int Problema;
    sscanf(argv[1],"%d",&Problema);
    char problem_name[1000];
    memset(problem_name, 0, sizeof problem_name);
    switch (Problema) {
        case 1:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 2:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 3:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 4:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 5:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 6:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 7:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 8:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 9:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 10:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 11:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 12:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 13:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 14:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 15:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 16:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 17:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 18:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 19:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 20:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 21:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 22:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 23:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 24:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 25:
            M=8;
            T=76;
            strcat(problem_name,"LIGO/LIGO_8_76_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 26:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 27:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 28:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 29:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 30:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 31:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 32:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 33:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 34:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 35:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 36:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 37:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 38:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 39:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 40:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 41:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 42:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 43:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 44:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 45:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 46:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 47:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 48:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 49:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 50:
            M=16;
            T=76;
            strcat(problem_name,"LIGO/LIGO_16_76_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 51:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 52:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 53:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 54:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 55:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 56:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 57:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 58:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 59:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 60:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 61:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 62:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 63:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 64:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 65:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 66:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 67:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 68:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 69:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 70:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 71:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 72:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 73:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 74:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 75:
            M=32;
            T=76;
            strcat(problem_name,"LIGO/LIGO_32_76_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 76:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 77:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 78:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 79:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 80:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 81:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 82:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 83:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 84:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 85:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 86:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 87:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 88:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 89:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 90:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 91:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 92:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 93:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 94:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 95:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 96:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 97:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 98:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 99:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 100:
            M=64;
            T=76;
            strcat(problem_name,"LIGO/LIGO_64_76_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 101:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 102:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 103:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 104:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 105:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 106:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 107:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 108:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 109:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 110:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 111:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 112:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 113:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 114:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 115:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 116:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 117:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 118:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 119:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 120:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 121:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 122:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 123:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 124:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 125:
            M=8;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_8_334_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 126:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 127:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 128:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 129:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 130:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 131:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 132:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 133:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 134:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 135:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 136:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 137:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 138:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 139:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 140:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 141:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 142:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 143:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 144:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 145:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 146:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 147:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 148:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 149:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 150:
            M=16;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_16_334_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 151:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 152:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 153:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 154:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 155:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 156:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 157:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 158:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 159:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 160:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 161:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 162:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 163:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 164:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 165:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 166:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 167:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 168:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 169:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 170:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 171:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 172:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 173:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 174:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 175:
            M=32;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_32_334_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 176:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 177:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 178:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 179:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 180:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 181:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 182:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 183:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 184:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 185:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 186:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 187:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 188:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 189:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 190:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 191:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 192:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 193:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 194:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 195:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 196:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 197:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 198:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 199:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 200:
            M=64;
            T=334;
            strcat(problem_name,"Fpppp/fpppp_64_334_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 201:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 202:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 203:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 204:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 205:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 206:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 207:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 208:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 209:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 210:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 211:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 212:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 213:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 214:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 215:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 216:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 217:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 218:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 219:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 220:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 221:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 222:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 223:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 224:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 225:
            M=8;
            T=88;
            strcat(problem_name,"Robot/robot_8_88_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 226:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 227:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 228:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 229:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 230:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 231:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 232:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 233:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 234:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 235:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 236:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 237:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 238:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 239:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 240:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 241:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 242:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 243:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 244:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 245:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 246:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 247:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 248:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 249:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 250:
            M=16;
            T=88;
            strcat(problem_name,"Robot/robot_16_88_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 251:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 252:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 253:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 254:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 255:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 256:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 257:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 258:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 259:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 260:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 261:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 262:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 263:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 264:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 265:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 266:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 267:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 268:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 269:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 270:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 271:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 272:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 273:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 274:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 275:
            M=32;
            T=88;
            strcat(problem_name,"Robot/robot_32_88_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 276:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 277:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 278:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 279:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 280:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 281:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 282:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 283:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 284:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 285:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 286:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 287:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 288:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 289:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 290:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 291:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 292:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 293:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 294:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 295:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 296:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 297:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 298:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 299:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 300:
            M=64;
            T=88;
            strcat(problem_name,"Robot/robot_64_88_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 301:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 302:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 303:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 304:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 305:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 306:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 307:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 308:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 309:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 310:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 311:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 312:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 313:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 314:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 315:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 316:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 317:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 318:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 319:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 320:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 321:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 322:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 323:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 324:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 325:
            M=8;
            T=96;
            strcat(problem_name,"Sparse/sparse_8_96_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 326:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 327:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 328:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 329:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 330:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 331:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 332:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 333:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 334:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 335:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 336:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 337:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 338:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 339:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 340:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 341:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 342:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 343:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 344:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 345:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 346:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 347:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 348:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 349:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 350:
            M=16;
            T=96;
            strcat(problem_name,"Sparse/sparse_16_96_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 351:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 352:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 353:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 354:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 355:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 356:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 357:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 358:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 359:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 360:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 361:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 362:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 363:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 364:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 365:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 366:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 367:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 368:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 369:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 370:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 371:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 372:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 373:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 374:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 375:
            M=32;
            T=96;
            strcat(problem_name,"Sparse/sparse_32_96_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 376:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 377:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 378:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 379:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 380:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 381:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.25_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 382:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.25_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 383:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.25_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 384:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.25_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 385:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.25_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 386:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.5_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 387:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.5_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 388:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.5_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 389:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.5_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 390:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.5_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 391:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.75_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 392:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.75_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 393:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.75_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 394:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.75_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 395:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_0.75_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 396:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_1_0.1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 397:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_1_0.5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 398:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_1_1.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 399:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_1_5.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        case 400:
            M=64;
            T=96;
            strcat(problem_name,"Sparse/sparse_64_96_1_10.dag");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
	case 501:
	    M=3;
	    T=9;
	    strcat(problem_name,"Synthetic/Ahmad-3-9.txt");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
	case 502:
	    M=2;
	    T=11;
	    strcat(problem_name,"Synthetic/Daoud-2-11.txt");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
	case 503:
	    M=2;
	    T=11;
	    strcat(problem_name,"Synthetic/Eswari-2-11.txt");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
	case 504:
	    M=3;
	    T=10;
	    strcat(problem_name,"Synthetic/Hamid-3-10.txt");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
	case 505:
	    M=4;
	    T=12;
	    strcat(problem_name,"Synthetic/Heteropar-4-12.txt");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
	case 506:
	    M=3;
	    T=10;
	    strcat(problem_name,"Synthetic/Hsu-3-10.txt");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
	case 507:
	    M=3;
	    T=10;
	    strcat(problem_name,"Synthetic/Ilavarasan-3-10.txt");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
	case 508:
	    M=3;
	    T=10;
	    strcat(problem_name,"Synthetic/Kang1-3-10.txt");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
	case 509:
	    M=3;
	    T=10;
	    strcat(problem_name,"Synthetic/Kang2-3-10.txt");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
	case 510:
	    M=3;
	    T=10;
	    strcat(problem_name,"Synthetic/Kuan-3-10.txt");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
	case 511:
	    M=3;
	    T=10;
	    strcat(problem_name,"Synthetic/Liang-3-10.txt");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
	case 512:
	    M=3;
	    T=8;
	    strcat(problem_name,"Synthetic/Sample-3-8.txt");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
	case 513:
	    M=3;
	    T=8;
	    strcat(problem_name,"Synthetic/SampleFig-3-8.txt");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
	case 514:
	    M=3;
	    T=8;
	    strcat(problem_name,"Synthetic/YCLee-3-8.txt");
            printf("Problem %s\n",problem_name);
            read_instance(M,T,problem_name,"speed_pairs.txt");
            break;
        default:
            printf("Problema seleccionado inexistente\n");
            break;
    }

	int *order;
	int i,j,sinmejora,**temp,**solactual;
    char cadenita[1000000],tempcadena[1000000];
    double tiempo;
    memset(cadenita, 0, sizeof cadenita);
    memset(tempcadena, 0, sizeof tempcadena);
    strcat(cadenita,"*****************New Instance************************\n");
    t_inicio=clock();
    tiempo = (double)((t_inicio)/CLOCKS_PER_SEC);
    sprintf(tempcadena,"StartTime = %lf\n",tiempo);
    strcat(cadenita,tempcadena);
    strcat(cadenita,"New Iteration\n");
	double valor_objetivo;
	best_known=999999;
    sinmejora=0;
    best_candidate=reserva_matriz_int(2,T);
    temp=reserva_matriz_int(2,T);
    for(i=0;i<2;i++){
        for(j=0;j<T;j++)
            best_candidate[i][j]=0;
        temp[i][j]=0;
            }
    //buscando el mejor orden en iteraciones :P
    t_inicio=clock();
    
    for(i=0;i<50;i++)
    {
	
	order=genera_orden_aleatorio();
        printf("Order iteration %d\n",i);
        temp=EFT(order);
        valor_objetivo=makespan(temp,order);
        memset(tempcadena, 0, sizeof tempcadena);
        t_final=clock();
        tiempo = (double)((t_final)/CLOCKS_PER_SEC);
        sprintf(tempcadena,"0.- Construction: \t %lf \t Time: \t %lf\n",makespan(temp,order),tiempo);
        strcat(cadenita,tempcadena);
        if(valor_objetivo<best_known)
        {
            best_known=valor_objetivo;
            libera_memoria_matriz(best_candidate,2);
            best_candidate=copia_solucion(temp);
            for(j=0;j<T;j++)
                best_order[j]=order[j];
        }
        t_final=clock();
        tiempo = (double)((t_final-t_inicio)/CLOCKS_PER_SEC);
        free(order);
	if(tiempo>=300)
        {
            i=51;
        }
        
    }
    
    best_known=makespan(best_candidate,best_order);
    solactual=copia_solucion(best_candidate); //copiando la mejor solucion encontrada
    printf("Mejor makespan construido %lf\n",best_known);
    evaluaciones=0;
    maxevals=100000;
    do{ //ILS
        strcat(cadenita,"New Iteration\n");
        perturba_solucion(solactual);
        memset(tempcadena, 0, sizeof tempcadena);
        t_inicio=clock();
        tiempo = (double)((t_inicio)/CLOCKS_PER_SEC);
        sprintf(tempcadena,"2.- Perturbation: \t %lf \t Time: \t %lf\n",makespan(solactual,best_order),tiempo);
        strcat(cadenita,tempcadena);
        evaluaciones+=first_derecha(solactual,best_order);
        memset(tempcadena, 0, sizeof tempcadena);
        t_inicio=clock();
        tiempo = (double)((t_inicio)/CLOCKS_PER_SEC);
        sprintf(tempcadena,"3.- Local Search: \t %lf \t Time: \t %lf\n",makespan(solactual,best_order),tiempo);
        strcat(cadenita,tempcadena);
        valor_objetivo=makespan(solactual,best_order);
        if(valor_objetivo<best_known)
        {
            best_known=valor_objetivo;
            libera_memoria_matriz(best_candidate,2);
            best_candidate=copia_solucion(solactual);
        }
        printf("Evaluaciones %d\n",evaluaciones);
    }while(evaluaciones<maxevals);
    best_known=makespan(best_candidate,best_order);
    printf("Mejor makespan encontrado %lf\n \n",best_known);
    write_out("salidaTeran.txt",cadenita);
    strcat(problem_name,"_ejecuciones.txt");
    memset(tempcadena, 0, sizeof tempcadena);
    sprintf(tempcadena,"%lf\n",best_known);
    write_out(problem_name,tempcadena);
	return 0;
}
