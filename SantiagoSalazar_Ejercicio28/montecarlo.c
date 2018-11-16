#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double func(double *vec){
	double xx;
	xx=vec[0]+vec[1]+vec[2]+vec[3]+vec[4]+vec[5]+vec[6]+vec[7]+vec[8]+vec[9];
	return pow(xx,2.0);
}

//int argc, char *argv[]
int main(int argc, char *argv[]){
	
int N; //number of points to try
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


}
