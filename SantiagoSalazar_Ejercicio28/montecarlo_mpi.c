#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mpi.h"

double func(double *vec){
	double xx;
	xx=vec[0]+vec[1]+vec[2]+vec[3]+vec[4]+vec[5]+vec[6]+vec[7]+vec[8]+vec[9];
	return pow(xx,2.0);
}

//int argc, char *argv[]
double integral(int N){
	
int i; //indice
int j; //indice

double x0[10]; //la funcion tiene 10 variables
double h; // paso de integracion
double rand_c; //current random
double integral; //resultado del montecarlo
double prev;
double current;

//inicializa cosas
//N=atoi(argv[1]);
N=atoi(argv[1]);
h=1.0/(double)N;
integral=0.0;


//inicializo un array de numeros aleatorios
for(i=0;i<10;i++){
	x0[i]=(double)rand() / (double)RAND_MAX;	
}


for(i=0;i<10;i++){
	for(j=0;j<N;j++){
		rand_c= (double)rand()/(double)RAND_MAX;
		x0[i]=rand_c;
		prev=integral;
		current=func(x0);
		integral=h*(prev+current);	
	}	
}

printf("El resultado es %f",integral);
return(integral);
}


int main(int argc, char *argv[]){
	
	int n, /* number of intervals */ 
	rank, /* rank of the MPI process */
	size, /* number of processes */ 
	i, /* variable for the loop */
	len; /* name of the process */
	
	double int_a;
	
	/*Initialization */
	n=argv[1];

 MPI_Init(&argc,&argv); 
 MPI_Comm_size(MPI_COMM_WORLD,&size); 
 MPI_Comm_rank(MPI_COMM_WORLD,&rank); 
 
 /* We ask for the name of the node */ 
 MPI_Get_processor_name(name, &len); 
 
 if(rank!=0){
 		int_a= integral(n)
 }
 
 
 MPI_Bcast(&n, 1, MPI_INT, 0, MPI_COMM_WORLD); 
 	 	} 
 	 	
if (rank == 0) {	 
 		
 		  }
 
MPI_Finalize(); 
	
}