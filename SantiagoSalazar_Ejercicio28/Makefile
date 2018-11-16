calc_pi: calc_pi.c 
	mpicc calc_pi.c -o calc_pi
	mpirun -np 8 ./calc_pi 1000
	
clean:
	rm -f calc_pi


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



double func(double *vector);

int main(int argc, char *argv[]){
	
printf("yeet");

int N; //number of points to try
int i,j; //indice

double x0[10]; //la funcion tiene 10 variables
double h; // paso de integracion
double rand_c; //current random
double integral; //resultado del montecarlo

//inicializa cosas
printf("yeet");

//N=atoi(argv[1]);
N=100;
h=(double)1.0/(double)N;
integral=0;


//inicializo un array de numeros aleatorios
for(i=0;i<10;i++){
	printf("yeet");
	x0[i]=(double)rand() / (double)RAND_MAX;	
}

for(i=0;i<10;i++){
	for(j=0;i<N;i++){
		rand_c= (double)rand() / (double)RAND_MAX;
		x0[i]=rand_c;
		integral=h*(integral+func(x0));			
	}	
}

printf("El resultado es %f",integral);


return(0);
}

double func(double *vector){
	printf("yeet");

	double xx;
	xx=vector[0]+vector[1]+vector[2]+vector[3]+vector[4]+vector[5]+vector[6]+vector[7]+vector[8]+vector[9];
	return pow(xx,2);
}