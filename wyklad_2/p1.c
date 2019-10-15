#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ( int argc, char **argv) {
	int n = argc > 1 ? atoi(argv[1]) : 10; // Jeśli podał argument, to podał argument, jeżeli nie to chciał 10
	FILE *out =argc > 2 ? fopen( argv[2], "w") : stdout; // Jeśli jest więcej niż jeden argument, to zapisze do pliku

	double x =8e4; // 8e4 = 80000 wartość całkowita, stała typu DOUBLE!!! atoi nie odczyta tego, trzeba napisać atof - ascii to float	

	srand ( time(NULL) );

	for( int i=0; i < n; i++)	
		fprintf( out, "%g\n", (double)rand()/ RAND_MAX); // w efekcie dostanę double z przedziału <0,1>, zapisuje to i kończe program
	fclose( out ); // dobry program zamknie program symetrycznie do out, nie jest problemem, bo program jest kończony, ale generalnie zamyka się to
	return 0;
}

// coś tam gwiazdka --> wskaźnik na plik
