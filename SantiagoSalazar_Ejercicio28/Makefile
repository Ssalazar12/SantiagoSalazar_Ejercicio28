calc_pi: calc_pi.c 
	mpicc calc_pi.c -o calc_pi
	mpirun -np 8 ./calc_pi
	
clean:
	rm -f calc_pi
