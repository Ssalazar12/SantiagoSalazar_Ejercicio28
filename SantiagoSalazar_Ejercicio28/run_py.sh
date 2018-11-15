#PBS -l nodes=8:ppn=8,mem=1gb,walltime=00:10:00
#PBS -M s.salazar12@uniandes.edu.co
#PBS -m abe
#PBS -N ejercicio28

cd /hpcfs/home/fisi4028/s.salazar12/SantiagoSalazar_Ejercicio28/

module load mpich/3.2.1

make clean
make 
