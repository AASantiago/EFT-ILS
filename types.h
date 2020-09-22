/*
 *  types.h
 *
 *  Created by Alejandro Santiago on 12/09/20.
 *  aurelio.santiago@upalt.edu.mx
 *
 */
#include <time.h>
struct tarea {
	double empieza;
	double termina;
};
double *TAEM;
struct tarea *tareas;
//**********BENCHMARK**********//
void write_out(char *archivo,char *cadena);
clock_t t_ini,t_fin;
clock_t t_inicio,t_final;
clock_t t_localsearch,t_perturbacion,t_constructivo;
int m_localsearch,m_perturbacion,m_constructivo;
int evaluaciones,maxevals;
double c_localsearch,c_perturbacion,c_constructivo;

double MAXTIMEITER; //tiempo maximo por iteracion
double MAXTIME; //tiempo maximo total

int M,T; //maquinas tareas
int P,L; //pares y niveles
double **graph; //grafo dirigido aciclico
double **pij; //tabla de costos computacionales al 100%
double **vspairs; //configuraciones de los procesadores

int **best_candidate; //solucion candidata
int *orden; //orden de ejecucion indice
int *best_order; //mejor orden encontrado
int *tope_pairs; //ultimo nivel en cada pair
int *configuracion_maquinas; //par asignado a cada maquina
double *promedios; //promedios de Pij
double best_known; //mejor conocido
double best_energy;
int ordenes_con_optimo; //ordenes con optimo

int factibilidad_precedencia(int *indices);
int *insercion_izquierda(int *original,int pos1,int pos2);
int **vecina_maquina(int **candidata,int tarea,int maquina,int voltaje);
void perturba_solucion(int **candidata);
int **perturba_solucion2(int **candidata);
int **copia_solucion(int **candidata);
int *genera_orden_blevel(void);
int *genera_orden_aleatorio(void);

void read_instance(int m,int t,const char fichero[],const char fichero2[]);
void read_vspairs(const char fichero[]);
void imprime_vspairs(void);
void imprime_solcandidata(int **candidata);
void imprime_orden(int *order);
int  **EFT(int *order);
int **constructivo2(int *order);
void recursivo_crr(int tarea,int **regresa);
void subconjunto_ordenado();
void arreglos_con_repeticion(int *order);
void permutaciones(void);
int **aleatoria(int **candidata,int *order);
int first_derecha(int **candidata,int *order);
int **first_izquierda(int **candidata,int *order);
int **best(int **candidata,int *order);
int **improve_sol_derecha(int **candidata,int *order);
int **improve_sol_izquierda(int **candidata,int *order);
void energy_search(int **candidata,int *order);
int  **genera_solucion_aleatoria(void);
int busqueda_local_determinista(void);
void busqueda_local_iterante(void);
double makespan(int **candidata, int *ordenamiento);
double makespan_parcial(int **candidata, int *ordenamiento,int limite);
double makespan_parcialDavid(int **candidata, int *ordenamiento,int limite, double TAEM[], struct tarea tareas[]);
double energy(int **candidata,double mkspan);
double *calcula_blevel(void);
double recursivo_blevel(int nodo, double sum);



//memory
int *reserva_vector_int(int dim);
float *reserva_vector_float(int dim);
double *reserva_vector_double(int dim);
int **reserva_matriz_int(int filas,int columnas);
float **reserva_matriz_float(int dim);
double **reserva_matriz_double(int filas, int columnas);
void libera_memoria_arreglo(int *arreglo);
void libera_memoria_matriz(int **matriz,int filas);
//LOCAL SEARCHS
int **best_makespan(int **candidata, int *order);
int **improve_sol_derecha_makespan(int **candidata, int *order) ;
int **best_biobjective(int **candidata, int *order);
int **best_biobjective2(int **candidata, int *order);
void MCER(int **candidata,int *order);
